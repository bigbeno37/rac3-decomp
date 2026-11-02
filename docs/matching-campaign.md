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

| `func_L39_004CBFC8` | Code generation | Best: 8/20 raw words, frame size, save offsets and restore order; final exploratory probe: 19 diff. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004CBFC8.c). |
| `func_L39_004D76B0` | Code generation | 11/20 raw words differ: start=s0 and arg=s2 instead of start=s2 and arg=s0, plus save/restore scheduling. Preserve High's decoded helper arguments and status returns; the earlier draft passed an extra argument. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004D76B0.c). |
| `func_L39_004E5008` | Code generation | 7 literal words at offsets 0, 0x10, 0x30, 0x34, 0x40, 0x44, 0x4c: frame, ra slot, branch-likely and restore order; all three LOW/HIGH wordings have identical raw text. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004E5008.c). |
| `func_L39_004F4F18` | Code generation | 16 diff; object 84 bytes versus retail 80; identical raw .text to Low; prologue ordering, branch-likely duplicated clear, cleanup delay-slot scheduling. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004F4F18.c). |
| `func_L39_00500198` | Code generation | 5 raw words at 0x0, 0xC, 0x3C, 0x44, 0x4C: frame size, ra slot, restore order and frame release; all body words equal. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_00500198.c). |
| `func_L39_00505780` | Code generation | Best retained Low draft: 5 literal stack-frame word differences; all 3 HIGH forms: identical 14-diff output. Preserve the five-difference Low draft. The existing memset return declaration conflict remains documented; no prototype change is justified merely for allocation. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_00505780.c). |
| `func_L39_00507DD0` | Code generation | func_L39_00507DD0: 14 diff; raw audit: 13 differing words within 80 bytes plus 4 extra candidate bytes. Keep the copy helper void: its zero-count path does not establish a return value. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_00507DD0.c). |
| `func_L39_0050C5A8` | Code generation | 8 words in prologue/argument scheduling; raw sole-placement audit confirms; 80-byte object retained. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_0050C5A8.c). |
| `func_L39_0050C5F8` | Code generation | 8 words; prologue/argument setup scheduling; raw ELF audit agrees; both objects identical to Low. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_0050C5F8.c). |
| `func_L39_005128F8` | Code generation | Best retained draft: 16 diff, 76 bytes versus 80 retail; final probe: 17 diff, 84 bytes. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_005128F8.c). |
| `func_L39_00516498` | Code generation | Closest draft: 10 literal prologue/epilogue word differences; call/store body exact with only two genuine JAL relocations resolved. Return-reuse approach: 14 diff. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_00516498.c). |
| `func_L39_005165D0` | Code generation | 10 differing words / 80 bytes; identical to Low best: frame/save spacing and epilogue/branch scheduling. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_005165D0.c). |
| `func_L39_0069C738` | Code generation | Low evidence independently audited: 17 diff; 72-byte object vs 80-byte retail; real .lit4 R_MIPS_LITERAL for 0.6f versus inline lui/ori/mtc1; argument scheduling differs. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_0069C738.c). |
| `func_L39_0069FD38` | Code generation | Low probe: 11 diff; 72-byte text vs 80 retail; High raw audit confirms R_MIPS_LITERAL at +0x18 and four-byte .lit4 instead of inline 0x3FD66666 synthesis. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_0069FD38.c). |
| `func_L39_006A5AA0` | Code generation | 11 diff; 72-byte text versus 80-byte retail; .lit4 4 bytes, final scalar .text identical to Low. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_006A5AA0.c). |
| `func_L39_006C8278` | Code generation | Independent raw audit confirms Low: 11 check.py diffs; 72-byte .text versus retail 80, with .lit4 0.1f and R_MIPS_LITERAL instead of inline lui/ori/mtc1. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_006C8278.c). |
| `func_L39_006DF118` | Code generation | 4 raw words at +0x08,+0x0c,+0x10,+0x18; opening v1/v0 allocation and a1/ra-save order. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_006DF118.c). |
| `func_L01_00514D78` | Code generation | 6 literal words in HIGH probes01-03 (identical objects); LOW best remains 4 words. Preserve the simpler Low draft with four differences; High has six. Neither tier matched. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L01_00514D78.c). |
| `func_L03_003AEC58` | Code generation | 5 instruction differences at offsets 0x4,0x8,0xC,0x10,0x1C in all 6 PAL placements; other-level relocation values unresolved. The existing func_L03_0043F5D0 wrapper omits its consumed float argument and packed-colour return. Independent review of all seven PAL and seven US wrapper placements supports s32(s32,s32,f32), explicitly passing weight to f32 func_0038D0B0(f32) and returning s32 func_0038DBD8(s32,s32,f32). No accepted campaign function depends on this correction; it remains a prerequisite for future integration. The failed cross-placement audit leaves noncanonical relocation values unresolved. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L03_003AEC58.c). |
| `func_L03_0032ED88` | Catalogue / integration | Independent retail audit confirms literal member +0x60 in level03 versus +0x50 in level07 at function+0x18; inventory.identity incorrectly masks it. No C draft is recommended. The Low draft changed an existing pointer declaration to an array; catalogue and callee identity must be reviewed first. The two placements also call different helper bodies. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L07_003328D0` | Code generation | 11/22 raw PAL words differ after resolving all six actual object relocations; address setup and counter/values register allocation. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L07_003328D0.c). |
| `func_L07_003C90F8` | Code generation | 20 positional diff; 80 vs 88 bytes. Final store order corrected; sole remaining aligned difference is R_MIPS_LITERAL load versus inline 0x3D80ADFD setup. High fixes the final store order. The shifted comparison is diagnostic only; a real literal relocation remains unresolved. Actual helper float returns conflict with an older void declaration. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L07_003C90F8.c). |
| `func_L07_003D7628` | Code generation | 11 diff; text 72 vs retail 88 bytes, plus 8-byte .lit4; text identical to Low. Preserve all four callee arguments: the incoming angle in f13 is consumed transitively. The Low note claiming it is overwritten was incorrect. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L07_003D7628.c). |
| `func_L39_004BCDE0` | Code generation | 5 raw differing words at +00,+0C,+48,+4C,+54; body exact; frame/save/restore mismatch. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004BCDE0.c). |
| `func_L39_004C23A0` | Code generation | 15 differing words; 84-byte candidate vs 88-byte retail; frame, branch layout and restore order. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004C23A0.c). |
| `func_L39_004F60D8` | Code generation | 19 diff; 92 bytes vs retail 88; exact same .text as LOW best; saved-register allocation and branch scheduling. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004F60D8.c). |
| `func_L39_004E3050` | Catalogue / integration | Low check: 1 diff, missing trailing 0xCDCDCDCD at +0xC; independent High raw audit confirms all 12 executable bytes exact at sole PAL placement after only actual HI16/LO16 relocations. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004E3050.c). |

| `func_L39_004FB5C8` | Code generation | Best retained probe 1: 18 checker and raw word differences, 88 versus 88 bytes. Final probe 3: 20 checker differences, 84 versus 88 bytes. Preserve High nonvolatile draft and exact best object; the unused 0xD6 stack store and larger frame remain unsupported. Do not preserve Low volatile workaround. Low and High completed without an integrated match; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004FB5C8.c). |
| `func_L39_005049D8` | Code generation | 9 raw differing words: frame size, saved s1/ra offsets, save/copy order; body and actual resolved jal agree. Low and High completed without an integrated match; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_005049D8.c). |
| `func_L39_004DF698` | Code generation | Low check.py: 1 diff, absent trailing 0xCDCDCDCD at +0xC; independent raw audit confirms all 12 executable bytes equal after only actual HI16/LO16 relocations. Low and High completed without an integrated match; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004DF698.c). |
| `func_L39_004DF6A8` | Catalogue / integration | Low PAL and US checks each report 1 diff: exact 12-byte executable getter, missing trailing CDCDCDCD in the fixed 16-byte span; independently confirmed raw ELF/object bytes in both versions. Exact 12 executable bytes PAL/US, actual relocations only; trailing CD fill remains unsupported. Ordinary C. Low and High completed without an integrated match; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004DF6A8.c). |
| `func_L39_004E2440` | Catalogue / integration | Low check: 1 diff, absent trailing CDCDCDCD at +0xC in 16-byte span; independent raw audit confirms exact 12 executable bytes after resolving only actual HI16/LO16 relocations. Exact 12 executable PAL bytes; CD fill remains unsupported. US applicable but unchecked. Low and High completed without an integrated match; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004E2440.c). |
| `func_L39_004F16A0` | Catalogue / integration | Low PAL and US checks: 1 diff each; independent raw audit confirms all 12 executable bytes exact, but trailing CDCDCDCD absent from 16-byte catalogue span. Exact 12 executable PAL/US bytes, zero relocations; CD fill remains unsupported. Low and High completed without an integrated match; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004F16A0.c). |
| `func_L39_004F16B0` | Catalogue / integration | Low check: 1 diff; exact 12-byte getter, catalogue span 16 includes trailing 0xCDCDCDCD at 004F16BC. Independent raw audit confirms zero relocations and literal offsets +4/+4. Low and High completed without an integrated match; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004F16B0.c). |
| `func_L01_00432F38` | Code generation | Inherited isolated PAL/US MATCH only; current-gp all-placement audit: PAL 34 pass/15 fail, US 34 pass/17 fail, all failures +0x10 same-symbol HI/LO vs GPREL contradiction. Do not integrate despite canonical isolated matches. Fixed-gp direct audit passes 34 story placements per version but fails all 15 PAL/17 US multiplayer placements at +0x10. Retain INCLUDE_ASM. Low and High completed without an integrated match; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L01_00432F38.c). |
| `func_L01_00432F68` | Code generation | 2 address-register differences (lui v1 vs v0; lw base v1 vs v0), independently confirmed at all 49 PAL placements. Retain Low plain unsized global view, not High diagnostic section annotation. Actual 32-bit mode access supported by resident instructions, full extent unproven. High scalar yields 5 diff; actual-section diagnostic returns to Low two register differences across49PAL. Ordinary C unresolved; US applicable unchecked. Low and High completed without an integrated match; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L01_00432F68.c). |
| `func_L01_00433098` | Catalogue / integration | 3 diff: lui/load use v1 rather than v0; store is lui-relative instead of gp-relative. Preserve simple Low scalar u32 \|= 0x20 draft. High array view has 3 diff but unproven object shape; canonical codegen and multiplayer fixed-gp constraint remain unresolved. Low and High completed without an integrated match; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L01_00433098.c). |
| `func_L01_004DFE88` | Code generation | PAL 6 diff: 24-byte HI16/LO16 absolute addressing versus 20-byte GP-relative retail; raw mismatch at all 34 placements. Preserve High plain extern f32 table[5], not Low experimental section attribute. Real five-float table requires GP addressing not obtained under existing flags. High 6 diff versus Low 5. Low and High completed without an integrated match; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L01_004DFE88.c). |
| `func_L01_003A4708` | Code generation | Low's retained unchanged-flags probe: 3 diff; .text 12 bytes plus .lit4 4 bytes versus retail inline 20-byte float return. Independently confirmed object relocation and all ten retail bodies. Ten PAL bodies audited; ordinary return 0.7f remains blocked by literal-pool codegen with existing flags. Low and High completed without an integrated match; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L01_003A4708.c). |
| `func_L01_003BE190` | Code generation | Low VM check: 3 diff; independently confirmed 12-byte .text plus 4-byte .lit4/R_MIPS_LITERAL versus retail 20-byte inline constant-return body. Seven PAL bodies audited; return 0.7f literal-pool blocker with existing flags. Low and High completed without an integrated match; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L01_003BE190.c). |
| `func_L01_00356B70` | Code generation | 3 diff; 12-byte literal-pool lwc1/jr/nop versus 20-byte inline lui/ori/mtc1/jr/nop; raw .text identical to Low; .lit4 storage remains. Preserve simplest 0.45f return draft; High natural fraction emits identical 12-byte text with .lit4 versus retail 20. Ordinary C unresolved under existing flags; one High compile, US applicable unchecked. Low and High completed without an integrated match; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L01_00356B70.c). |
| `func_L16_004DCA98` | Code generation | PAL 2 diff: lui uses v1 instead of v0; lw base v1 instead of v0. Raw audit confirms only word offsets +00 and +04 differ. Retain Low direct expression; High inline accessor repeats identical two register differences. Signed offset/void return evidence retained; PAL actual relocations resolve and other3words exact. US Low diagnostic masks unresolved globals, not raw verified. Ordinary C unresolved. Low and High completed without an integrated match; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L16_004DCA98.c). |
| `func_L39_004BB410` | Code generation | 1 diff: retail trailing sw v0,0x14(a0) at +0x10 absent; both High objects exactly match first 16 bytes, no relocations. Retain simple Low flags \|= 0xA setter. Low plus two High forms reproduce exact 16 executable bytes, missing trailing duplicate store in 20-byte span. Independent PAL/US overlay and resident direct-reference scans found only normal entry references; dynamic references not excluded. Ordinary C unresolved, not handwritten. Low and High completed without an integrated match; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004BB410.c). |
| `func_L39_004C4EC8` | Catalogue / integration | No compile: full 20-byte span contains reachable 12-byte setter, zero, then unreferenced store at +0x10; PAL and applicable US retail spans audited literally. Record independent frozen-span boundary evidence in notes only. Ordinary reachable prefix plus unreferenced nonzero tail; not a handwritten classification. No full-span candidate, zero High probes. Keep INCLUDE_ASM and all boundaries unchanged; semantic prefixes remain in ignored scratch. Low and High completed without an integrated match; retain INCLUDE_ASM. Boundary evidence concerns the assigned span, not a handwritten classification of its ordinary C prefix. |
| `func_L39_004CB680` | Catalogue / integration | No compile: direct PAL and US ELF audits confirm empty return followed by two unreachable nonzero stack-adjustment words within the 20-byte catalogue extent. Record independent frozen-span boundary evidence in notes only. Ordinary reachable prefix plus unreferenced nonzero tail; not a handwritten classification. No full-span candidate, zero High probes. Keep INCLUDE_ASM and all boundaries unchanged; semantic prefixes remain in ignored scratch. Low and High completed without an integrated match; retain INCLUDE_ASM. Boundary evidence concerns the assigned span, not a handwritten classification of its ordinary C prefix. |
| `func_L39_00508458` | Catalogue / integration | 0 body bytes PAL and US using retained Low objects; PAL integration loses CDCDCDCD word at 0x0050846C before next entry 0x00508470. Executable20-byte body PAL/US exact; existing PAL C integration drops external +20 CD fill. US pad copy can preserve it, but does not fix PAL. Ordinary C unresolved, zero High probes. Callback return not fully established; taking address only, document prototype caveat. Low and High completed without an integrated match; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_00508458.c). |
| `func_L39_006D4018` | Code generation | 3 differing full words at indices 1,2,4: pointer-load/store base registers; literal offsets 0x3C and 1 agree. Low and High completed without an integrated match; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_006D4018.c). |
| `func_L39_004CC178` | Catalogue / integration | PAL and US: 1 diff; all five executable raw words exact, missing sixth catalogue word 0xCDCDCDCD. Low and High completed without an integrated match; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004CC178.c). |
| `func_L39_004DDFB0` | Catalogue / integration | No compile: retail span is a 12-byte ordinary address getter followed by zero, orphan addiu v0,v0,0x30, and CDCDCDCD fill; PAL and applicable US twin audited directly. Frozen 24-byte span contains ordinary 12-byte getter, zero alignment, orphan instruction and CD fill. Notes only; no matching attempt exists for full span. Retain INCLUDE_ASM; boundary review is not handwritten classification. Low and High completed without an integrated match; retain INCLUDE_ASM. Boundary evidence concerns the assigned span, not a handwritten classification of its ordinary C prefix. |
| `func_L39_004EABF0` | Catalogue / integration | PAL and US: 1 diff, trailing CD fill absent from 24-byte catalogue comparison; all 20 executable bytes exact, zero relocations. Low and High completed without an integrated match; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_004EABF0.c). |
| `func_L01_0032ADC0` | Code generation | 4 positional diffs; 32-byte candidate uses HI16/LO16 address pair instead of retail 28-byte GP-relative body. Preserve simple Low four-byte scalar slot draft. High function-pointer typing remains canonical-only; multiplayer initialization is not independently established. @ps2as late extern sizing still produces an absolute address pair instead of GP. Low and High completed without an integrated match; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L01_0032ADC0.c). |
| `func_L01_003F1740` | Catalogue / integration | Canonical isolated PAL/US MATCH inherited from Low; actual relocation-resolved bodies pass 49 PAL/51 US. Level39 complete span differs at +28 (CDCDCDCD vs zero); callee symbol/prototype conflicts remain. Ordinary wrapper has four distinct callee families with incompatible return contracts and conflicting existing declarations. Canonical isolated checks pass, but PAL level39 trailing CD fill is lost by existing C layout. No uniform portable draft is recommended; retain INCLUDE_ASM. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L01_003F1760` | Catalogue / integration | 0 canonical PAL/US; exact raw 49 PAL + 51 US placements after sole actual R26 relocation; heterogeneous callee return types remain. Caller-specific alias resolves every address and raw body, but actual callees return s32 in levels03/07 and void elsewhere. Discarding the result does not establish a single faithful prototype. Notes only pending catalogue/type handling; retain INCLUDE_ASM. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L39_005A5F48` | Code generation | 5 diff: load/LUI scheduling and v0/v1/a0 allocation; raw comparison differs at word indices 1,2,3,4,6 across all 15 PAL placements. Low and High completed without an integrated match; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_005A5F48.c). |
| `func_L03_0032C870` | Code generation | 4 positional diffs; complete 16-byte struct still emits HI16/LO16 address pair; 32 candidate bytes versus 28 retail code bytes. Low and High completed without an integrated match; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L03_0032C870.c). |
| `func_L28_00420020` | Catalogue / integration | Low check.py: 1 diff, final sb at 0x0042003C exceeds 28-byte catalogue range; independent High audit confirms full 32-byte object equals retail with zero relocations. Low and High completed without an integrated match; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L28_00420020.c). |
| `func_L39_004BB470` | Catalogue / integration | No compiler comparison: actual PAL/US frozen span contains 12-byte C getter followed by zero/orphan mask 7/zero/orphan mask 8. The frozen span bundles an ordinary 12-byte getter with orphan instructions. Direct PAL/US and resident reference scans found entry calls only; computed references remain possible. This is boundary review, not handwritten classification; no full-span C candidate. Low and High completed without an integrated match; retain INCLUDE_ASM. Boundary evidence concerns the assigned span, not a handwritten classification of its ordinary C prefix. |
| `func_L39_00504500` | Code generation | 5 instructions: frame 0x10 versus 0x20; ra slot 8 versus 0x10; restore order s0/ra versus ra/s0. Low and High completed without an integrated match; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_00504500.c). |
| `func_L39_00518A38` | Code generation | 2 instruction words: initial andi/sll order reversed; literal raw offsets 0 and 4; no relocations. Low and High completed without an integrated match; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_00518A38.c). |
| `func_L39_00515DA8` | Code generation | 20 instruction differences; the 92-byte draft exceeds retail's 88 bytes. High rewrites reproduced Low's output. The simpler Low allocation/copy draft is retained. Low and High remain unresolved; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_00515DA8.c). |
| `func_L39_006CD218` | Code generation | The best Low draft differs only in the initial address-register pair. Three High probes worsened the result to 37, 15 and 22 checker differences. Low and High remain unresolved; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_006CD218.c). |
| `func_L39_006CD270` | Code generation | The best Low draft has two address-register differences; all other 20 words agree. High's builtin-copy form grew to 96 bytes versus retail's 88. Low and High remain unresolved; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_006CD270.c). |
| `func_L39_006D6868` | Code generation | 13 register-allocation differences remain in the 88-byte body. Independent High review reproduced Low's output. Low and High remain unresolved; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_006D6868.c). |
| `func_L39_006D9E10` | Code generation | 13 of 22 words differ only in register allocation. The High draft preserves the established unsized s32 global declaration. Low and High remain unresolved; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_006D9E10.c). |
| `func_L39_006DA628` | Code generation | 13 of 22 words differ only in register allocation. The High draft preserves the established unsized s32 global declaration. Low and High remain unresolved; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_006DA628.c). |
| `func_L39_006DCCE0` | Code generation | The initial address-register pair differs; the other 20 words agree after resolving actual relocations. The simpler Low draft is retained. Low and High remain unresolved; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_006DCCE0.c). |
| `func_L01_0032BE90` | Code generation | 16 checker differences remain: the fixed assembler emits an 88-byte body with a literal pool instead of retail's inline constant. All 34 PAL placements were audited. Low and High remain unresolved; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L01_0032BE90.c). |
| `func_L16_003E2518` | Code generation | The fixed assembler emits 80 bytes plus an eight-byte literal pool instead of retail's 96-byte inline-constant body. The checker reports 15 differences; two literal relocations remain unresolved in the raw audit. US explicitly differs. Low and High remain unresolved; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L16_003E2518.c). |
| `func_L30_00342030` | Code generation | Nine checker differences remain: the 88-byte draft uses a literal pool instead of retail's 96-byte inline-constant body. US explicitly differs. Low and High remain unresolved; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L30_00342030.c). |
| `func_L39_00500450` | Code generation | Seven frame/save/restore words differ; the call body agrees after resolving actual relocations. The simpler Low draft is retained. Low and High remain unresolved; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_00500450.c). |
| `func_L39_00504528` | Code generation | Five frame/save/restore words differ; all allocation, error-reporting and zeroing instructions agree. Callee arguments and pointer returns were independently audited. Low and High remain unresolved; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_00504528.c). |
| `func_L39_00518E48` | Code generation | Ten of 24 words differ in frame layout and scheduling. The retained scalar-input draft copies the evidenced 18 bytes and forwards all four helper arguments; its natural structure extent does not prove the original allocation size. Low and High remain unresolved; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_00518E48.c). |
| `func_L39_0067F0A0` | Catalogue / integration | Both isolated 96-byte bodies match, but the shared wrapper has incompatible downstream contracts: menu s32(s32), story void(void). All 35 wrapper and 34 callback placements per version were audited. Notes only; a uniform cast or declaration does not repair the contract. Low and High remain unresolved; retain INCLUDE_ASM. |
| `func_L39_0067F1B0` | Catalogue / integration | Both isolated 96-byte bodies match. Independent review confirms the same shared-wrapper contract conflict as func_L39_0067F0A0. Notes only; Low's function-pointer cast is unsuitable for integration. Low and High remain unresolved; retain INCLUDE_ASM. |
| `func_L39_006873F0` | Code generation | Seven words differ: six allocation/prologue differences and unused retail argument setup. The High draft preserves the empty callee's established void(void) declaration; Low's six-difference draft misdeclares it. Low and High remain unresolved; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_006873F0.c). |
| `func_L39_006B78F8` | Code generation | Four scheduling/register words differ. The draft also requires an explicit three-argument forwarding correction in existing func_L39_00688340; that separate proposal remains uncompiled and unintegrated. US has no twin. Low and High remain unresolved; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_006B78F8.c). |
| `func_L39_006CD1B8` | Code generation | The initial address-register pair differs; the other 22 words agree. The draft preserves the established unsized s32 global and literal 32-byte copy. Low and High remain unresolved; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_006CD1B8.c). |
| `func_L39_006D6808` | Code generation | 14 register-allocation words differ in the 96-byte body. The High draft preserves the established unsized s32 global and 36-byte aggregate with four-byte alignment. Low and High remain unresolved; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_006D6808.c). |

| `func_L12_003E6790` | Code generation | Three initial-load instructions differ in the 96-byte body at all four PAL placements. Every later word agrees after resolving actual relocations. Noncanonical global identities were inferred from the tested operands and still require independent corroboration. US remains unchecked. Low and High remain unresolved; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L12_003E6790.c). |
| `func_L39_00508620` | Code generation | Eleven scheduling instructions differ in the 100-byte body. The retained byte-array draft copies eight bytes, adjusts parity, compares and clears the buffer, and returns zero or 0x21E. Helper arguments and nonzero-size pointer returns were audited. US remains unchecked. Low and High remain unresolved; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_00508620.c). |
| `func_L01_00305C50` | Code generation | Three stores remain reordered in the 104-byte draft across all 49 PAL placements. High recovered their order only with an extra assembler nop, producing 108 bytes. Future integration also requires a consistent structure type with the existing caller. US remains unchecked. Low and High remain unresolved; retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L01_00305C50.c). |
| `func_L01_0051B270` | Catalogue / integration | All 49 PAL and 50 US placements agree. US level 17 calls an integer-output getter where the others call an integer-input setter. No shared declaration or address alias preserves both contracts. Notes only; retain INCLUDE_ASM. |
| `func_L01_0051B2D8` | Catalogue / integration | All 49 PAL placements agree. US level 17 calls a nested float getter returning one instead of the mapped void integer getter. The other 50 US callees agree; GP identities are independently corroborated. Notes only; retain INCLUDE_ASM. |
| `func_L01_0051B8F8` | Catalogue / integration | All 49 PAL placements agree. US level 17 calls a direct void float getter instead of the nested getter returning one and loads a different type-ID global than the established siblings. Notes only; retain INCLUDE_ASM. |
| `func_L01_0051BA20` | Catalogue / integration | All 49 PAL and 50 US callees agree. US level 17 calls an integer setter instead of the mapped float-output getter; GP identities independently agree at every placement. Notes only; retain INCLUDE_ASM. |
| `func_L01_0051C180` | Catalogue / integration | All 49 PAL and 50 US placements agree. US level 17 calls an integer setter instead of the mapped float-output getter. Three frozen scalar sibling mappings corroborate the GP global. Notes only; retain INCLUDE_ASM. |
| `func_L01_0051C650` | Catalogue / integration | All 49 PAL and 50 US callees agree. US level 17 calls an integer setter instead of the mapped float-output getter. Three frozen scalar sibling mappings corroborate the GP global. Notes only; retain INCLUDE_ASM. |
| `func_L39_0066D9A8` | Code generation | Seven scheduling/allocation differences remain in all 15 PAL placements. The retained draft preserves the existing Obj pointer contract and three helper arguments; the resident global was independently corroborated. US explicitly differs. Retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L39_0066D9A8.c). |
| `func_L03_00435A08` | Code generation | The 104-byte draft has 14 raw instruction differences across all four PAL placements; its final 44 bytes agree. Local union constants eliminate literal pooling but leave register/scheduling differences. This target-specific representation preserves the intermediate stores and possible pointer aliasing. US explicitly differs. Retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L03_00435A08.c). |
| `func_L02_004B8BB0` | Code generation | Twelve checker differences remain: the fixed assembler emits 80 bytes plus a literal pool instead of retail's 104-byte inline-constant body. High's union form produced identical text and relocations; retain the simpler float-literal draft. Both PAL placements were audited, with literal relocations still unresolved. US explicitly differs. Retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L02_004B8BB0.c). |
| `func_L03_003D09C0` | Code generation | Seven scheduling words differ with the evidence-backed pointer-return lookup and existing effect-helper declaration. Low's isolated matches used conflicting legacy C types; they do not validate this corrected draft. Every consumed argument is explicit. US remains unchecked for this source. Retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L03_003D09C0.c). |
| `func_L07_00332230` | Code generation | The best 100-byte draft has 15 positional differences because the scalar global uses GP addressing instead of retail's HI/LO load. Actual ELF places the pointer in BSS; High's rejected data-section probe was unsupported, and its traversal rewrite worsened the result. All eight calls and both arguments are preserved. US remains unchecked. Retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L07_00332230.c). |
| `func_L03_00322548` | Catalogue / integration | Five initial address/index words differ. Retail storage is a scalar object-pool pointer in BSS, while the closest diagnostic form uses an unapproved array declaration. The indexed virtual target and all consumed arguments remain unresolved. Preserve notes only; retain INCLUDE_ASM. US remains unchecked. |
| `func_L03_0032C890` | Code generation | The closest 104-byte form has five address/load-order differences but requires an unproved shift count in 0..31. Preserve the explicit count-mask form instead: 108 bytes and 21 positional differences. It reflects the hardware shift semantics without assuming that range. Both callees and actual relocations were audited; US remains unchecked. Retain INCLUDE_ASM. Draft: [C](../nonmatching/levels/func_L03_0032C890.c). |

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


Batch 07 adds 25 level C functions, bringing this campaign to 237 new PAL
matches. These include object state wrappers, callbacks, reset helpers and
multiplayer settings. Existing file-wide flags remain unchanged.

Two existing C functions also receive evidence-backed corrections, adding no
functions to the count: func_L01_004D56A8 now returns its helper's integer
result, and func_L03_0032DBD0 explicitly forwards the lookup argument.
The former is covered across all 49 PAL and 51 US placements; the latter
has one placement in each version.

Validation and audit each ran once at priority -5. tools/build.py --target all
-j 8 printed three retail MATCH results; tools/build_levels.py -P 4 -j 2
printed 49 of 49 PAL levels match; JOBS=8 sh tools/carry_us.sh printed 54 of
54 US targets match. All 12 preflight levels matched. Repository checks and
all 36 unit tests passed. All 23 applicable additions have complete US C
coverage across 58 program placements, with no existing coverage regressions.
func_L39_005E5FA0 and func_L39_006DD5B8 have differing US counterparts and
are excluded from the new US C count. Frozen, initial and final build-input
hashes agree. The 76-byte func_L39_00505360 preserves the following existing
assembly block, and all four placements of func_L12_003E67F0 were checked.

Runtime evidence preserves three recovered PAL timeout notices and twelve
preliminary US checker retry notices. The 54 non-candidate checker no-result
diagnostics are archived separately. Every final linked program matched,
all applicable additions and both corrections were built from C, and no
previous C coverage was lost. No manual validation retry or source fix was
needed. Preflight and final logs were archived separately.


Batch 08 adds 17 level C functions, bringing this campaign to 254 new PAL
matches. These cover type identifiers, object state, callbacks and multiplayer
helpers. Existing file-wide flags and function boundaries remain unchanged.

Validation and audit each ran once at priority -5. tools/build.py --target all
-j 8 printed three retail MATCH results; tools/build_levels.py -P 4 -j 2
printed 49 of 49 PAL levels match; JOBS=8 sh tools/carry_us.sh printed 54 of
54 US targets match. All ten preflight levels passed. Repository checks and
all 36 unit tests passed. The 15 applicable additions have complete US C
coverage across 184 program placements, with no baseline regressions.
func_L39_005C1310 has no US twin and func_L39_0066C558 has a differing US
counterpart; neither contributes to the new US C count. No existing C
correction is counted as an addition in this batch.

Independent linked-byte evidence covers all 206 PAL and 184 US candidate
placements, including scalar identifier mappings across story and multiplayer
levels and ten alignment placements. Frozen, initial, final and post-audit
source hashes agree. The three recovered PAL timeout notices and twelve
preliminary US checker retry notices are preserved. Six preliminary US probes
retained no-result diagnostics; final linked builds and C coverage still passed.
All 54 non-candidate checker diagnostics are archived separately. No manual
validation retry or source fix was needed.

The same commit records 32 completed Low/High attempts: 26 useful drafts and
six notes-only boundary or catalogue issues. These remain assembly and add no
matching-function count. Post-return remnants and unsupported fill are kept
distinct from ordinary C code-generation failures.


Batch 09 adds 21 level C functions, bringing this campaign to 275 new PAL
matches. These cover state accessors, flags, callback wrappers, random state,
and bounded string-copy wrappers. Existing file-wide flags and catalogue
boundaries remain unchanged. All 21 additions have applicable US counterparts.

Prescribed validation and audit each ran once at priority -5. The three PAL
cores, all 49 PAL levels, and all 54 US programs printed retail MATCH. All 14
preflight levels passed. Repository checks and all 36 unit tests passed.
All 149 applicable US C placements are covered, with no baseline regressions.
Independent supplemental inspection verifies all 146 PAL and 149 US candidate
placements, alignment and mapped references. There are no existing-C corrections
counted in this batch.

The validator's supplemental inspector stopped because it applied the PAL
multiplayer default address to US. The parent preserved that failure and
completed a corrected read-only inspection: PAL uses 0x00225780, US uses
0x00225900. A second supplemental assertion was widened to verify the full
preserved twelve-byte zero gap before the level22 remnant on both versions.
No source fix or full-validation retry was needed. A separate
resident ABI review identified the bounded-copy routine in the actual i5bootn
multiplayer payload, rather than the different boot ELF address space; both
regions consume destination, source and count and return the original
destination pointer. Loader evidence and retail routine identity corroborate
that mapping.

Frozen source hashes stayed unchanged. Three observed PAL timeouts recovered;
twelve preliminary US checker retry notices ended in six no-result contexts.
All 54 non-candidate no-result diagnostics remain separately archived, while
final linked builds and candidate C coverage passed. The same commit records
19 completed Low/High attempts as 17 unlinked drafts and two notes-only shared
wrapper contract blockers. They retain INCLUDE_ASM and add no match count.


Batch 10 adds 16 plain-C level functions, bringing this campaign to 291 new PAL
matches. They cover state and callback helpers, timers and queues, bounded string
copies, and multiplayer object updates. Two existing C corrections explicitly
forward four arguments through func_L39_006878A0 and reconcile the void setter
contract of func_L39_0067F8B0. These corrections add no matching-function count.
File-wide flags, catalogue boundaries and assembly/remnant classifications stay
unchanged.

Validation and audit each ran once at priority -5. All three PAL cores, 49 PAL
levels, and 54 US programs printed retail MATCH. All ten preflight levels,
repository checks and 36 unit tests passed. The 12 applicable US additions cover
161 C placements; three additions have no US twin and one explicitly differs.
Independent inspection verified all 175 PAL and 161 US addition placements,
both corrections in both regions, following alignment gaps, and 200 GP bindings.
All 5,562 baseline coverage rows and 968 known-good partially covered level
placements were preserved. Current build-input hashes equal the frozen hash.

All 54 non-candidate checker diagnostics and six exhausted checker retry chains
remain archived separately from the successful final builds. Supplemental
inspection mistakes, including a parser that treated a comment footer as a
function row, were corrected only in ignored inspection scripts; their original
errors remain preserved. No source fix or full-validation retry was needed.
The same commit records 16 completed Low/High attempts: nine unlinked drafts and
seven notes-only declaration, callback or version-contract issues. They retain
INCLUDE_ASM and add no matching count.
