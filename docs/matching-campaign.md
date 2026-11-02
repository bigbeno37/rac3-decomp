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
