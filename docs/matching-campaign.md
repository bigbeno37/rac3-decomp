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
- Use at most eight candidate workers initially on the 8-vCPU VM. Workers own
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

No two-tier failures recorded yet.
