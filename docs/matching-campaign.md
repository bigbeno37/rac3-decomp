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
