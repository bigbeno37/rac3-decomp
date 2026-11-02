# WIP matching campaign

Branch: `wip/sol-matching`. This work follows AGENTS.md and BUILD_FIDELITY.md;
the explicit WIP-branch request overrides the usual master-branch instruction.

## Attempt and integration policy

- Assign each unmatched function to GPT 6.1 Sol with Low reasoning effort first.
- If that attempt cannot produce a valid candidate with the file's existing flags,
  hand its draft, evidence and failed approaches to GPT 6.1 Sol with High effort.
- If High also cannot match it, preserve a useful draft in `nonmatching/`, document
  what differs, keep the `INCLUDE_ASM` marker, and move to the next function.
- Apply the repository's stop rules at both tiers: non-functions and handwritten
  routines are not C candidates; stop repeating equivalent failed rewrites, and
  stop after about ten compiles without improvement. Escalation is for a new
  approach, not more repetitions of a stopped search.
- Prefer small plain-C functions and coherent families, then expand the queue.
  Existing near-miss drafts are starting points, not evidence of a match.
- Start with eight candidate workers on the 8-vCPU VM; expand to twelve when
  CPU and memory measurements permit. Workers own
  separate scratch directories and do not change tracked sources, commit, spawn
  children, run full builds, or change compiler flags.
- The coordinator reviews and integrates candidates in coherent batches. A
  single-function checker result is only a candidate, never a completed match.
- Before a source commit, resolve symbols, carry changes through NTSC-U with
  `tools/carry_us.sh`, refresh generated reports, run repository checks and all
  unit tests, and require full core and affected level builds to print MATCH.
- Commits use the configured user identity, conventional subjects and validation
  details. No game data, toolchains, generated assembly, scratch logs or AI
  attribution trailers are committed. Commits remain on WIP unless requested otherwise.

## Attempt record

After each source commit, compare the committed function blocks with the latest
`origin/master` and report the upstream commit, new matches in the batch, cumulative
new matches, their behavior and validation. Count only full-build matches; describe
existing coverage refreshes separately from newly decompiled functions.

Pending and active task metadata and full compiler logs are local in
`scratch/campaign/`. Completed unsuccessful two-tier attempts are recorded here
with their stopping reason and any preserved draft path. Successful candidates
are recorded by their source commit and the generated progress report.

The entries below stopped after both Low and High review. Their INCLUDE_ASM markers remain; no full-build match is claimed.

| Function | Outcome | Reason / preserved draft |
| --- | --- | --- |
| `func_L01_003BC658` | Layout | Isolated PAL/US checks match, but the 12-byte C function occupies a 16-byte section and displaces following assembly in levels 40-53. Draft: [C](../nonmatching/levels/func_L01_003BC658.c). |
| `func_L01_003FE1D8` | Not C | Alternate entry into handwritten VU0 code; custom saved-register handling and an interior jump. Both tiers stopped without compiles. |
| `func_L01_004618E0` | Not C | Handwritten tail wrapper with trapping ADDI; confirmed from retail and its handwritten destination. Both tiers stopped without compiles. |
| `func_L01_0040DF30` | Not C | Internal float-load nop matches documented handwritten math and existing ASM_FUNC analogues. Both tiers stopped without compiles. Draft: [C](../nonmatching/levels/func_L01_0040DF30.c). |
| `func_L01_0040DF68` | Not C | Internal float-load nop matches documented handwritten math, corroborated by adjacent accumulator operations. Both tiers stopped without compiles. Draft: [C](../nonmatching/levels/func_L01_0040DF68.c). |
| `func_L01_0047DAD0` | Code generation | Three distinct Low/High forms emit the same three instruction differences with existing no-split-address flags: address register and store scheduling disagree. Draft: [C](../nonmatching/levels/func_L01_0047DAD0.c). |
| `func_L01_00494580` | Code generation | Low and High forms omit an internal nop or schedule the return differently (three differences). No evidence justifies handwritten classification. Draft: [C](../nonmatching/levels/func_L01_00494580.c). |
| `func_L01_00474068` | Boundary | Unbalanced stack restoration followed by a referenced empty callback suggests an epilogue/callback boundary problem. Both tiers stopped without compiles. |
| `func_L01_0045A520` | Code generation | Low and High retain an absolute load instead of the GP-relative load under existing Ps2EeAs flags (four differences). Draft: [C](../nonmatching/levels/func_L01_0045A520.c). |
| `func_L01_0030A130` | Code generation | Low and High retain an absolute load instead of the GP-relative load (five differences); moving the extern into the block did not help. Draft: [C](../nonmatching/levels/func_L01_0030A130.c). |
| `func_L01_0030D678` | Code generation | Three Low/High forms retain the same absolute-load mismatch (five differences) under existing file flags. Draft: [C](../nonmatching/levels/func_L01_0030D678.c). |
| `func_L01_00461C20` | Boundary / tail transfer | Indirect jump through object offset 0x3C has no ordinary return. Both tiers stopped without compiles; handwritten origin is not established. |
| `func_L27_00410028` | Boundary | The assigned range excludes its nonzero return delay slot, catalogued as the following linker remnant. Low had one differing instruction; High confirmed the boundary issue without compiles. |
| `func_L22_003D0038` | Boundary | The four-byte range contains a return but excludes its nonzero delay slot, assigned to the next catalogue entry. Both tiers stopped without compiles. |
| `func_L36_00460038` | Boundary | The return executes a store catalogued separately as the following remnant. Low had two differences; High confirmed the incomplete boundary without compiles. |
| `func_L39_00505BB8` | Nonzero padding | PAL and US body checks match, but the current zero-padding path cannot preserve level 39's trailing nonzero fill word. Ordinary C; not classified as handwritten. Draft: [C](../nonmatching/levels/func_L39_00505BB8.c). |
| `func_L39_004EC7C8` | Boundary | The assigned range combines an eight-byte getter with an unreachable store after its return delay slot. High confirmed the retail bytes; the residual store origin is unproven. No complete C draft represents this range. |
| `func_L39_005061C8` | Nonzero padding | PAL and US body checks match, but the current C integration path drops the trailing nonzero fill word at PAL 0x005061D4. Ordinary C; keep the assembly marker. Draft: [C](../nonmatching/levels/func_L39_005061C8.c). |
| `func_L39_0050B050` | Nonzero padding | PAL and US body checks match, but the current C integration path drops the trailing nonzero fill word at PAL 0x0050B05C. Ordinary C; keep the assembly marker. Draft: [C](../nonmatching/levels/func_L39_0050B050.c). |
| `func_L39_00516228` | Nonzero padding | PAL and US body checks match, but the current C integration path drops the trailing nonzero fill word at PAL 0x00516234. Ordinary C; keep the assembly marker. Draft: [C](../nonmatching/levels/func_L39_00516228.c). |
| `func_L10_004AFFF0` | Boundary | The 16-byte catalogue extent excludes the live return delay-slot store at 0x004B0000. Retail confirms a 20-byte function. The semantic draft includes that separately catalogued delay slot and is uncompiled. Draft: [C](../nonmatching/levels/func_L10_004AFFF0.c). |
| `func_L11_004AFFF0` | Boundary | The 16-byte catalogue extent excludes the live return delay-slot comparison at 0x004B0000, classified separately as a remnant. The complete equality-test draft needs 20 bytes; no full match. Draft: [C](../nonmatching/levels/func_L11_004AFFF0.c). |
| `func_L39_004C35C8` | Nonzero padding | The 12 executable bytes match, but the 16-byte catalogue entry also includes a trailing nonzero fill word. High confirmed the object and retail bytes; the PAL checker still reports one difference. Draft: [C](../nonmatching/levels/func_L39_004C35C8.c). |
| `func_L39_004C47C0` | Nonzero padding | All 12 executable bytes match in PAL and US, but both checkers report the missing trailing nonzero fill included in the 16-byte catalogue entry. Existing C padding cannot preserve it. Draft: [C](../nonmatching/levels/func_L39_004C47C0.c). |
| `func_L39_0068B460` | Version portability | A fixed-address draft passes PAL, but US requires 0x002415C0 instead of PAL 0x00241440. Symbolic Low and High forms retain five code-generation differences. The PAL-only draft is not integrated. Draft: [C](../nonmatching/levels/func_L39_0068B460.c). |
| `func_L39_006B6C30` | Version portability | A fixed-address draft passes PAL, but US requires 0x002415C0 instead of PAL 0x00241440. The symbolic Low form has five code-generation differences. The PAL-only draft is not integrated. Draft: [C](../nonmatching/levels/func_L39_006B6C30.c). |
| `func_L39_006DDDE8` | Code generation | Low and High forms retain four register-allocation differences in the global load, nested pointer load and stores. Size and store order agree. Repeated equivalent code generation; ordinary C remains plausible. Draft: [C](../nonmatching/levels/func_L39_006DDDE8.c). |
| `func_L39_0061BF50` | Code generation | Low and High forms retain two instruction-order differences: the index shift precedes address adjustment instead of following it. All other instructions agree. Stopped on repeated equivalent code generation. Draft: [C](../nonmatching/levels/func_L39_0061BF50.c). |
| `func_L01_0041A6BC` | Alignment | The isolated PAL body matches, but whole-file eight-byte entry alignment shifts its four-mod-eight retail address and failed level preflight. All 34 places have the same restriction; no same-code US twin. Draft: [C](../nonmatching/levels/func_L01_0041A6BC.c). |
| `func_L01_0041A6D4` | Alignment | The isolated PAL body matches, but whole-file eight-byte entry alignment conflicts with all 34 four-mod-eight retail places. The preserved integration object confirms the shift; no separate first-error diagnostic or US twin. Draft: [C](../nonmatching/levels/func_L01_0041A6D4.c). |

| `func_L39_004B5938` | Code generation | 5 differing instructions; correct 24-byte size; shift/mask ordering and v0/v1/a0 allocation differ. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. Draft: [C](../nonmatching/levels/func_L39_004B5938.c). |
| `func_L39_0050DBB0` | Code generation | 4 differences: copy temporary v1 instead of retail v0; size, offsets, instruction order and zero return agree. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. Draft: [C](../nonmatching/levels/func_L39_0050DBB0.c). |
| `func_L39_00518A60` | Code generation | 5 differing instructions; High best 5, Low best 4 (low/compile-02.log). Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. The retained Low draft is closer than High; an existing caller declares void(s32), so the byte-swap return prototype also needs integration review. Draft: [C](../nonmatching/levels/func_L39_00518A60.c). |
| `func_L01_003EB2C0` | Code generation | 6 positional diff; 28 bytes versus 24 retail: lui/addiu replaces GP-relative addiu. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. The retained Low draft indexes from the existing scalar global declaration; the true aggregate extent is unknown. It is a semantic reference only. Draft: [C](../nonmatching/levels/func_L01_003EB2C0.c). |
| `func_L01_00436940` | Handwritten evidence | Not measured: persistent reserved $at hardware pointer across four stores, including return delay slot. Low and High independently found handwritten-instruction evidence; no marker reclassification is made in this batch. |
| `func_L39_004C6100` | Code generation | 12 diff; 48-byte framed jal versus retail 32-byte frame-free sibling j; early-return form emits same instructions as Low. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. Draft: [C](../nonmatching/levels/func_L39_004C6100.c). |
| `func_L01_0040DF08` | Handwritten evidence | Low evidence: 10 diff, 48 vs 40 bytes; mul.s/add.s instead of retail adda.s/three-operand madd.s. No High compile. Low and High independently found handwritten-instruction evidence; no marker reclassification is made in this batch. |
| `func_L01_0040DF40` | Handwritten evidence | Not compiled: retail adda.s and three-operand madd.s require FPU accumulator instructions absent from SN cc1 patterns; followed by cvt.w.s. Low and High independently found handwritten-instruction evidence; no marker reclassification is made in this batch. |
| `func_L01_0040DF78` | Handwritten evidence | Not compiled: retail adda.s and three-operand madd.s have no SN cc1 patterns per docs/us/full_match_roadmap.md:144; cvt.w.s also requires rounding-mode semantics. Low and High independently found handwritten-instruction evidence; no marker reclassification is made in this batch. |
| `func_L01_004D2470` | Catalogue variant | At +0x10 canonical PAL body uses addiu immediate 0x4610 (34 placements); all 15 multiplayer PAL placements require 0x45E0. Canonical PAL/US MATCH inherited from Low only. All 34 story placements use member offset 0x4610; all 15 multiplayer placements use 0x45E0. Shared catalogue identity masks this field-offset difference. Keep assembly until both variants can be represented legitimately. Draft: [C](../nonmatching/levels/func_L01_004D2470.c). |
| `func_L01_004D2498` | Catalogue variant | Preserved low draft: canonical PAL/US checks MATCH. Read-only low-object derivation fails at +0x10 in all PAL multiplayer levels39-53: emitted 0x24A54610 versus retail 0x24A545E0; other34 placements derive successfully. All 34 story placements use member offset 0x4610; all 15 multiplayer placements use 0x45E0. Shared catalogue identity masks this field-offset difference. Keep assembly until both variants can be represented legitimately. Draft: [C](../nonmatching/levels/func_L01_004D2498.c). |
| `func_L01_003897E8` | Code generation | 2 instruction positions: lui a0 and sd ra reversed; remaining 40-byte body agrees. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. Draft: [C](../nonmatching/levels/func_L01_003897E8.c). |
| `func_L39_005E0ED8` | Code generation | 8 diff; 32-byte body versus 40-byte retail; arithmetic pi * -0.5f folds to literal-pool lwc1 instead of inline lui/ori/mtc1. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. Draft: [C](../nonmatching/levels/func_L39_005E0ED8.c). |
| `func_L04_00362EF0` | Code generation | 5 diff: 36-byte body vs 40; sltiu writes a1 instead of v0, missing move a1,v0, branch displacement and epilogue shifted. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. Draft: [C](../nonmatching/levels/func_L04_00362EF0.c). |
| `func_L01_003A4910` | Code generation | 5 diff lines; 36 bytes versus retail 40: sltiu writes a1 directly, omitting v0-to-a1 copy and shortening branch displacement. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. Draft: [C](../nonmatching/levels/func_L01_003A4910.c). |
| `func_L30_0034C428` | Code generation | 2 instructions in second 64-bit constant synthesis; other eight instructions match. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. Draft: [C](../nonmatching/levels/func_L30_0034C428.c). |
| `func_L07_003E31F8` | Code generation | 9 diff: named float scale still emits 32-byte body plus .lit4; union alternative emits 44-byte body, 10 diff ($v0 constant, mtc1 hazard nop and schedule/register differences). Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. Draft: [C](../nonmatching/levels/func_L07_003E31F8.c). |
| `func_L19_00323398` | Code generation | 2 diff: sd ra and addiu completing global address a1 are swapped; all other instructions and 40-byte size agree. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. Trailing one-element members are draft layout placeholders; their actual extents remain unknown. Draft: [C](../nonmatching/levels/func_L19_00323398.c). |
| `func_L19_003D0108` | Code generation | 2 diff: sd ra and addiu a1 address-low instructions swapped. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. The High draft preserves the reviewed callee prototype; its exploratory effect[12] bound is unproven and must not be treated as a recovered object layout. Draft: [C](../nonmatching/levels/func_L19_003D0108.c). |
| `func_L21_00338D38` | Code generation | 5 differing lines; sltiu targets v1 instead of v0 and retail move v1,v0 is missing; 36 versus 40 bytes. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. Draft: [C](../nonmatching/levels/func_L21_00338D38.c). |
| `func_L39_004B5910` | Code generation | 2 differing instructions: initial andi/sll order swapped; High 2 and 3 reproduce Low best bytes. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. Draft: [C](../nonmatching/levels/func_L39_004B5910.c). |
| `func_L39_00504460` | Code generation | 5 differing words: frame 0x10 vs 0x20, ra save/restore offset 8 vs 0x10, and s0/ra restore order. Both High probes identical to Low best; all functional body instructions agree. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. Draft: [C](../nonmatching/levels/func_L39_00504460.c). |
| `func_L39_00504488` | Code generation | 5 differing words: frame size, ra save/restore slot, and s0/ra restore order; body and 40-byte size agree. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. Draft: [C](../nonmatching/levels/func_L39_00504488.c). |
| `func_L39_005044B0` | Code generation | 5 instructions: frame 0x10 vs retail 0x20; ra slot 8 vs 0x10; restore s0/ra vs retail ra/s0. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. Draft: [C](../nonmatching/levels/func_L39_005044B0.c). |
| `func_L39_005044D8` | Code generation | 5 instruction differences: frame 0x10 vs 0x20, ra slot 8 vs 0x10, restore order; body exact. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. Draft: [C](../nonmatching/levels/func_L39_005044D8.c). |
| `func_L39_0068E0E8` | Code generation | 4 differing words at correct 40-byte size: global-load high-half register and prologue scheduling; identical to Low. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. Draft: [C](../nonmatching/levels/func_L39_0068E0E8.c). |
| `func_L39_006AF7A8` | Code generation | 4 differing instruction positions at correct 40-byte size: global high-half v1 vs v0 and global load scheduled after ra save/a1 setup rather than before. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. Draft: [C](../nonmatching/levels/func_L39_006AF7A8.c). |
| `func_L39_006B2D18` | Code generation | 4 instruction differences: global high-half v1 versus v0 and load/save/second-argument ordering; unchanged from Low. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. High confirmed the caller passes an unused object argument; the retained draft preserves that signature. Draft: [C](../nonmatching/levels/func_L39_006B2D18.c). |
| `func_L39_004C4EE0` | Boundary | Low probe: 2 diff; exact 8-byte getter prefix, independent trailing return-1 body missing. This is a malformed multi-body range, not evidence that either constituent function was handwritten. Keep the current marker pending boundary repair. |
| `func_L39_004CBF60` | Nonzero padding | Low check.py: 1 diff; all 3 executable instructions match, missing trailing 0xCDCDCDCD at 0x004CBF6C. High independently verified retail and saved object. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. Draft: [C](../nonmatching/levels/func_L39_004CBF60.c). |

| `func_L39_006BDCC8` | Code generation | 3 diff: global high-half register v1 versus v0, and singleton load versus ra-save scheduling; unchanged from Low. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_006BDCC8.c). |
| `func_L01_004360B8` | Catalogue variant | Low canonical PAL/US candidate matches, but independent retail/object derive rejects all 15 multiplayer placements at nonrelocated stores +0x20/+0x24: 0x24E10/0x24E14 versus 0x24DE0/0x24DE4. All 34 story placements use +0x24E10/+0x24E14; all 15 multiplayer placements use +0x24DE0/+0x24DE4. Canonical PAL/US checks do not establish an integrated match. Shared catalogue layout variants require a legitimate representation. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L01_004360B8.c). |
| `func_L39_005A8CC8` | Code generation | 11 differing words; 52 bytes vs retail 48, swapped v0/v1, grouped/reversed base stores and empty return delay slot. All 15 PAL placements agree, but all 17 US placements shift the fixed globals by +0x180. The preserved absolute-address draft is PAL-only. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_005A8CC8.c). |
| `func_L39_005E3A10` | Code generation | 2 differing words at +0x08/+0x0c: table-low addiu and index sll are swapped. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_005E3A10.c). |
| `func_L30_0034C460` | Code generation | 10 diff; 40-byte body vs retail 48. movz coalescing replaces retail copies and movn; remaining registers and scheduling differ. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L30_0034C460.c). |
| `func_L07_003318D8` | Code generation | 2 words: generated lui v0/addiu v1,v0 versus retail lui v1/addiu v1,v1; all other words agree. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L07_003318D8.c). |
| `func_L39_00508080` | Code generation | 4 differing words, same 48-byte size: object v1 versus retail a0; constant v0 versus retail v1. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_00508080.c). |
| `func_L39_00515F90` | Code generation | Latest: 12 positional diffs, 56 versus 48 bytes. Best retained draft: 6 positional diffs, 48 bytes; input register, null branch/save/zero initialization and callback/payload load scheduling differ. Preserved High probe 4 is the best draft: six differences at the correct 48-byte size. Its null-path pointer-to-integer conversion relies on this target ABI. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_00515F90.c). |
| `func_L39_006DD3D0` | Code generation | 4 diff, 48 bytes: initial global/argument load order and condition register; all instructions after initial branch match. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_006DD3D0.c). |
| `func_L01_0041A7D0` | Code generation | 6. Six differences remain in mask/counter registers and setup order. The draft relies on existing owning-file declarations for D_001A7E18 and T_00417F60. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L01_0041A7D0.c). |
| `func_L09_00403E40` | Code generation | 8 diff; 56 bytes; register allocation only. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L09_00403E40.c). |

| `func_L09_00405450` | Code generation | 8 instruction words in best HIGH draft; Low remains better at 6. Size 56 bytes and tail agree. Preserved Low draft is better at six differing words; High remained at eight. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L09_00405450.c). |
| `func_L39_00508470` | Code generation | 13 positional diffs; 52 vs 56 bytes. Missing entry daddu v1,a0,zero; checks a0 and loads field into v0 instead of v1. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_00508470.c). |
| `func_L01_00436020` | Code generation | Last probe: 14 diff with scalar global / gp load; best retained: 4 instruction-order differences (initial lui/stack adjustment and argument copy/ra save swapped). Preserved four-difference draft uses an array declaration; the existing scalar declaration gives fourteen differences. Field offset 0x1FCA8 agrees across all 49 PAL placements. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L01_00436020.c). |
| `func_L39_00509078` | Code generation | 14 diff for preserved High probe 1 (56 bytes vs 60); probe 3 reports 12 diff but emits 64 bytes and adds boolean materialization. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_00509078.c). |
| `func_L39_005733F8` | Code generation | 4 positional instruction differences: global lui register and ra restore scheduling. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_005733F8.c). |
| `func_L39_006772B8` | Code generation | 2 instruction differences at +0x20/+0x24: second global address uses v1 instead of retail v0. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_006772B8.c). |
| `func_L04_00361DB8` | Code generation | 9 instruction differences; 64-byte draft retains both tests but two return sequences instead of retail common exit. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L04_00361DB8.c). |
| `func_L39_004CC440` | Code generation | 5 diff; generated frame 0x10 vs retail 0x20, ra slot 8 vs 0x10, and reversed restore order; body agrees. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004CC440.c). |
| `func_L39_004D9610` | Code generation | 7 positional differences; 68 vs 64 bytes; xor/select v0/v1 allocation and extra epilogue move. Final probe08 confirms restored probe01. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004D9610.c). |
| `func_L39_00510EB0` | Code generation | Best probe 03: 12 diff, 56 vs 64 bytes; missing 16-byte frame and final-store scheduling differs. Last probe 05: 17 diff, same aggregate stack stores as Low. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_00510EB0.c). |
| `func_L39_006D78B8` | Code generation | 4 differing words on PAL and US: compiler emits split lui v1 before s0/ra restores; retail restores first, then adjacent lui at/sw pair. Destination is 0x0024D760 in PAL and 0x0024D860 in US; a fixed PAL literal is not portable. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_006D78B8.c). |
| `func_L39_004CC800` | Trailing fill | PAL and US: Low checks report 1 diff; independent raw-object audit confirms all 12 executable bytes match, but trailing 0xCDCDCDCD at +0xC is missing from the fixed 16-byte span. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004CC800.c). |
| `func_L39_004DD240` | Trailing fill | 1 diff in Low compile-01.log, independently confirmed from raw ELF: all 12 executable bytes agree; missing trailing 0xCDCDCDCD at +0xC in the 16-byte catalogue span. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004DD240.c). |
| `func_L39_004DE8E8` | Trailing fill | PAL and US: one missing trailing 0xCDCDCDCD word; all three executable words independently verified exact, without relocations. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004DE8E8.c). |
| `func_L39_004DE908` | Trailing fill | Low PAL/US check.py: 1 diff, missing trailing CDCDCDCD; independent raw-byte verification confirms all three executable words match in both regions. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004DE908.c). |
| `func_L39_004DF668` | Trailing fill | 1 diff (Low retained probe, independently byte-verified): executable 12 bytes equal; missing trailing 0xCDCDCDCD at 0x004DF674 in 16-byte catalogue span. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004DF668.c). |
| `func_L39_004DF678` | Trailing fill | Low: 1 diff, missing trailing 0xCDCDCDCD at 0x004DF684; all 12 executable return bytes independently verified from kept object and retail ELF. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004DF678.c). |
| `func_L39_004DF688` | Trailing fill | LOW probe: 1 diff, missing trailing 0xCDCDCDCD at 0x004DF694; HIGH independently verified all 12 executable bytes fully resolved equal retail and next boundary 0x004DF698. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004DF688.c). |
| `func_L01_0047BB98` | Code generation | Low evidence: 12 diff; .lit4 load versus inline lui/ori/mtc1; 64 versus 72 bytes. No HIGH compiler probe. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L01_0047BB98.c). |
| `func_L01_00514DD0` | Code generation | 3 diff at +0x1C/+0x20/+0x24: entry a0 versus v1; null branch destination and delay slot. Retail explicitly returns 0 or 1; the existing void caller declaration is stale. The preserved s32 draft corrects the return based on retail evidence and forwards every helper argument. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L01_00514DD0.c). |

| `func_L01_00300678` | Code generation | 18 diff; generated 64 bytes versus retail 72; object stays in a0, global in v1, eliminating retail entry/argument pointer moves and changing scheduling. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L01_00300678.c). |
| `func_L08_003BAB88` | Code generation | 7 prologue scheduling/register differences; remaining 11 instructions agree. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L08_003BAB88.c). |
| `func_L21_00339148` | Code generation | 13 diff; 56-byte .text versus 72-byte retail; two .lit4 loads replace immediate lui/ori/mtc1 sequences; text identical to Low. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L21_00339148.c). |
| `func_L33_003AF628` | Code generation | 20 differing words; 84-byte body, 0x20 frame, extra saved register and cached global address versus retail 72 bytes and 0x10 frame. The first helper consumes one argument; its existing unused second parameter is documented in the attempt evidence. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L33_003AF628.c). |
| `func_L39_004D1480` | Code generation | 5 instruction-order differences at +0x04,+0x08,+0x0C,+0x10,+0x18; 72 bytes; full unmasked audit confirms all remaining words and both call targets agree. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004D1480.c). |
| `func_L39_004D1BB8` | Code generation | 5 unmasked differing words at offsets 0x04, 0x08, 0x0C, 0x10, 0x18: entry scheduling only; both resolved calls and remaining instructions agree. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004D1BB8.c). |
| `func_L39_004FC158` | Code generation | Best High probe: 5 frame/save/restore words differ; remaining 13 of 18 raw words exact after resolving sole genuine jal relocation. Final alternative: 16 diff. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004FC158.c). |
| `func_L39_00508340` | Code generation | Best High probe 02: 11 diff, 76 vs 72 bytes; prologue save/copy order, v0/v1 predicate/status allocation, store/zero scheduling and extra result move. Final probe 04: 12 diff. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_00508340.c). |
| `func_L39_00515C28` | Code generation | 5 instruction-order differences: prologue move/save swap and three epilogue positions; independently confirmed by resolving only three genuine call relocations. The free helper exists in the actual overlay but is only partly decoded. Its return prototype remains unproven and was not changed to force allocation. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_00515C28.c). |
| `func_L01_0047C4A8` | Code generation | 13 diff; 92-byte candidate vs 80-byte retail; lui/addiu instead of gp object addresses; all 49 raw PAL placements fail. Preserve the simpler Low draft (21 differences). High reached 13 using an experimental .sdata declaration and placement-specific callback aliases; the section attribute is not recovered source metadata, and global addressing still fails. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L01_0047C4A8.c). |
| `func_L01_00389798` | Code generation | 16 diff; Low and both High probes emit identical raw .text, including literal-pool load for 0.9f instead of inline lui/ori/mtc1. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L01_00389798.c). |
| `func_L01_004A35C0` | Code generation | 2 words: final addiu a0 and move a1 swapped at +0x34/+0x38 in all 34 PAL placements. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L01_004A35C0.c). |
| `func_L39_0060B478` | Code generation | 2 instruction differences at +8,+12: 64-bit constant synthesis at all 15 PAL placements. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_0060B478.c). |
| `func_L39_0066C788` | Code generation | 20 diff; 72 candidate bytes vs 80 retail; identical body and relocations to Low. Preserve Low without the unsuccessful experimental .sdata attribute. Exact object extent and runtime GP evidence remain insufficient; do not invent a small global. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_0066C788.c). |
| `func_L39_004E47A8` | Code generation | Best retained draft: 5 raw word differences at 0, 8, 0x40, 0x44, 0x4C (frame, ra slot and restores); final conditional-expression probe: 14 differences, reproducing Low probes 1/2. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004E47A8.c). |

## Validated batches

Batch 02 adds 26 C functions beyond the first 12 committed matches. It covers
float-pair setters, pointer and byte setters, field clears, getters, byte
comparisons and an empty function retaining its retail stack frame.
The setter at `func_L01_00480060` uses a per-caller symbol alias because level 07
targets a different byte from the neighboring getter. Compiler flags are unchanged.

Validation on the exe.dev VM: `tools/build.py --target all -j 8` printed three
retail `MATCH` lines; `tools/build_levels.py -P 4 -j 2` printed 49 of 49 levels
match; `JOBS=8 sh tools/carry_us.sh` printed 54 of 54 targets match. Repository
checks passed and all 36 unit tests passed. All 26 additions are built from C in
every applicable US program, with no previously complete US coverage lost.
The build inputs remained unchanged throughout validation. Attempt 1 preflight
exposed the two alignment blockers and a setter symbol conflict; those were
removed or corrected before the successful full validation.


Batch 03 adds 38 C functions, bringing this campaign to 76 new matches. It covers
field initialization and reset helpers, getters and setters, callback and virtual
dispatch wrappers, and shared story/multiplayer helpers. The float reset at
`func_L01_004C94B0` uses a per-caller symbol alias because four levels address a
different float from the neighboring getter. Compiler flags remain unchanged.

The final validation ran `tools/build.py --target all -j 8` (three retail MATCH
results), `tools/build_levels.py -P 4 -j 2` (49 of 49 PAL levels match), and
`JOBS=8 sh tools/carry_us.sh` (54 of 54 US targets match). Fourteen preflight
levels also matched. Repository checks and all 36 unit tests passed. All 37
same-code additions have complete applicable US C coverage; `func_L01_0050FEE8`
has a differing US counterpart, so no shared US C match is claimed for it.
No previous complete US coverage was lost. Build inputs stayed unchanged across
the final full validation, and their hash was checked again before committing.

Earlier attempts exposed the float-symbol conflict and two shared functions with
different multiplayer member offsets; the alias was corrected and those two
functions retain assembly. Silent assembler failures on unchanged pre-existing
source were reproduced successfully with identical commands. An ignored runtime
wrapper now retries only timeouts or silent assembly-driver failures, at most
three times with identical inputs. The final run observed 15 retry messages:
three PAL timeouts recovered, while six preliminary US probes still yielded no
result after their two retries each. All full linked programs and the C coverage
audit nevertheless passed. Preflight per-level logs were overwritten by the
subsequent all-level stage, so the retry count covers retained logs only.


Batch 04 adds 62 level-39 C functions, bringing this campaign to 138 new
matches. The additions cover dispatch and deletion wrappers, state updates,
indexed fields, and alignment helpers. Consumed deletion arguments are explicitly
forwarded; compiler flags remain unchanged.

Validation ran once: tools/build.py --target all -j 8 printed three retail MATCH
results, tools/build_levels.py -P 4 -j 2 printed 49 of 49 PAL levels match, and
JOBS=8 sh tools/carry_us.sh printed 54 of 54 US targets match. Level 39 also
passed preflight. Repository checks and all 36 unit tests passed. Every one of
the 62 additions has complete applicable US C coverage, with no prior coverage
regression. Frozen, initial, final and post-audit build-input hashes agree.

Preserved logs contain 15 retry notices: three PAL timeouts recovered, while six
preliminary US checker probes exhausted their two retries each without a result.
The full carry, all final linked builds and the C coverage audit nevertheless
passed. No manual validation retry or source fix was needed. Preflight and final
PAL level logs were archived separately; successful checker subprocess output
may remain internal, so no unobserved retry count is claimed.


Batch 05 adds 30 level C functions, bringing this campaign to 168 new PAL
matches. These include state updates, callback and allocation wrappers, sound
callbacks and indexed fields. Existing file-wide compiler flags are unchanged.

Validation and audit each ran once at priority -5. tools/build.py --target all
-j 8 printed three retail MATCH results; tools/build_levels.py -P 4 -j 2
printed 49 of 49 PAL levels match; JOBS=8 sh tools/carry_us.sh printed 54 of
54 US targets match. All 13 preflight levels matched. Repository checks and
all 36 unit tests passed. All 29 applicable additions have complete US C
coverage across 81 program placements, with no existing coverage regressions.
func_L39_005E60D8 is PAL-only because its mapped US counterpart differs.
Frozen, initial and final build-input hashes agree.

Logs preserve 16 retry notices: four PAL retries recovered (one silent
assembly-driver failure and three timeouts), while six preliminary US checker
probes exhausted two retries each. The carry also preserved 54 non-candidate
"no result" diagnostics. Despite these checker limitations, every final linked
program matched, all applicable candidates were built from C, and no previous
C coverage was lost. No manual validation retry or source fix was needed.
Preflight and final PAL logs were archived separately.


Batch 06 adds 44 level C functions, bringing this campaign to 212 new PAL
matches. These include object constructors, allocation and state wrappers,
sound callbacks and multiplayer settings. Existing file-wide flags remain
unchanged; output handles use the evidenced integer type.

Validation and audit each ran once at priority -5. tools/build.py --target all
-j 8 printed three retail MATCH results; tools/build_levels.py -P 4 -j 2
printed 49 of 49 PAL levels match; JOBS=8 sh tools/carry_us.sh printed 54 of
54 US targets match. All 12 preflight levels matched. Repository checks and
all 36 unit tests passed. All 42 applicable additions have complete US C
coverage across 179 program placements, with no existing coverage regressions.
func_L39_005D6408 has no US twin. func_L39_0063A2E8 differs from its US
counterpart: the timer argument is 6 on PAL and 7 on US. Neither is counted
as a new US C function. Frozen, initial and final build-input hashes agree.

Runtime retry evidence is preserved: PAL preflight levels 01 and 03 and final
level 09 recovered from timeouts or silent assembly-driver failures. The US
carry retained preliminary checker retries and 54 non-candidate "no result"
diagnostics. Every final linked program matched, all applicable new functions
were built from C, and no previous C coverage was lost. No manual validation
retry or source fix was needed. Preflight and final logs were archived separately.
