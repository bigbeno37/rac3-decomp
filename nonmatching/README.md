# Near misses and US drafts

C that is not linked and not counted: a starting point. One file per function,
`nonmatching/<program>/func_XXXXXXXX.c` (`<program>` is `frontbin`, `boot_elf` or `i5bootn`,
the name is the PAL address). Level drafts use `nonmatching/levels/func_LNN_XXXXXXXX.c`.
Each file has a comment at its top saying where it came from and what still
differs. Move it into `src/` once the full build prints `MATCH` with it in place, and delete its
row here. `tests/check_repository.py` checks that every file has a row.

Files that start with `/* US draft` are rac3-uya-decomp's C for that function (commit 13cf5c5),
with names moved to PAL addresses where the address maps are sure of them
(`tools/port_from_us.py`, docs/porting.md). They were not carried for the reason in their row:

- **flags**: the US match used flags of its own for this one function (a "single-function
  override" or `@ps2as` range), which this repository does not allow (docs/BUILD_FIDELITY.md);
- **differs**: the PAL function's bytes are not the US ones, or the C did not build to them here;
- **symbols**: a name in the C has no PAL address yet.

| Function | Program | Source | What differs |
| --- | --- | --- | --- |
| `func_00122278` | boot_elf | US draft of `func_00122278` | flags: the US matched it with without `-mno-check-zero-division` (a single-function override) |
| `func_00136010` | boot_elf | US draft of `func_00136010` | flags: the US matched it with without `-mno-check-zero-division` (a single-function override) |
| `func_0013A9F0` | boot_elf | US draft of `func_0013A9F0` | flags: the US matched it with without `-mno-check-zero-division` (a single-function override) |
| `func_0013B330` | boot_elf | US draft of `func_0013B330` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0013B3F8` | boot_elf | US draft of `func_0013B3F8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0013B620` | boot_elf | US draft of `func_0013B620` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0013B918` | boot_elf | US draft of `func_0013B918` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0013BAB8` | boot_elf | US draft of `func_0013BAB8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0013BC30` | boot_elf | US draft of `func_0013BC30` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0013BD58` | boot_elf | US draft of `func_0013BD58` | near miss: 44 diff with the file's flags (the US draft: 62) |
| `func_0013C908` | boot_elf | US draft of `func_0013C908` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0013CD28` | boot_elf | US draft of `func_0013CD28` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0013CDF0` | boot_elf | US draft of `func_0013CDF0` | near miss: 5 diff with the file's flags (was 37) |
| `func_0013D290` | boot_elf | US draft of `func_0013D290` | flags: the US matched it with `-mno-split-addresses` (a single-function override) |
| `func_00382360` | boot_elf | US draft of `func_00382380` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003823D0` | boot_elf | US draft of `func_003823F0` | differs: did not build, or built to other bytes, in PAL |
| `func_003824D0` | boot_elf | US draft of `func_003824F0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00382918` | boot_elf | US draft of `func_00382938` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00382BF0` | boot_elf | US draft of `func_00382BF8` | differs: did not build, or built to other bytes, in PAL |
| `func_00382CB8` | boot_elf | US draft of `func_00382CC0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00384598` | boot_elf | US draft of `func_00384578` | symbols: func_00383E38 |
| `func_00384878` | boot_elf | US draft of `func_00384850` | differs: did not build, or built to other bytes, in PAL |
| `func_00385168` | boot_elf | US draft of `func_00385140` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00385400` | boot_elf | US draft of `func_003853D8` | near miss: 144 diff with the file's flags (was 179) |
| `func_00385A98` | boot_elf | US draft of `func_00385A70` | differs: did not build, or built to other bytes, in PAL |
| `func_00386108` | boot_elf | US draft of `func_003860E0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003862D0` | boot_elf | US draft of `func_003862A8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00386488` | boot_elf | US draft of `func_00386460` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00386B10` | boot_elf | US draft of `func_00386AE8` | differs: did not build, or built to other bytes, in PAL |
| `func_00388ED8` | boot_elf | US draft of `func_00388E80` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0038C8E0` | boot_elf | US draft of `func_0038C828` | differs: did not build, or built to other bytes, in PAL |
| `func_0038D198` | boot_elf | US draft of `func_0038D0E0` | symbols: func_00388680 func_0038D0F4 |
| `func_0038D230` | boot_elf | US draft of `func_0038D178` | symbols: func_00388718 func_0038D18C |
| `func_0038D348` | boot_elf | US draft of `func_0038D290` | symbols: func_0038D2DC |
| `func_0038D708` | boot_elf | US draft of `func_0038D650` | symbols: func_00388BF0 func_0038D66C |
| `func_0038D990` | boot_elf | US draft of `func_0038D8D8` | symbols: func_0038D914 |
| `func_0038DD58` | boot_elf | US draft of `func_0038DCA0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0038DE48` | boot_elf | US draft of `func_0038DD90` | symbols: func_0038DDDC |
| `func_0038E4C8` | boot_elf | US draft of `func_0038E410` | flags: the US matched it with without `-mno-split-addresses` (a single-function override) |
| `func_0038E530` | boot_elf | US draft of `func_0038E478` | differs: did not build, or built to other bytes, in PAL |
| `func_0038E5C8` | boot_elf | US draft of `func_0038E510` | near miss: 4 diff with the file's flags (the US draft: 106) |
| `func_00390768` | boot_elf | US draft of `func_003906A8` | near miss: 234 diff with the file's flags (was 510) |
| `func_00391708` | boot_elf | US draft of `func_00391648` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003917E8` | boot_elf | US draft of `func_00391728` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00391880` | boot_elf | US draft of `func_003917C0` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_00391A58` | boot_elf | US draft of `func_00391998` | flags: the US matched it with `-fno-rerun-loop-opt` `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_00392640` | boot_elf | US draft of `func_00392580` | flags: the US matched it with without `-mno-split-addresses` (a single-function override) |
| `func_00392F98` | boot_elf | US draft of `func_00392ED8` | flags: the US matched it with without `-mno-split-addresses` (a single-function override) |
| `func_003931D0` | boot_elf | US draft of `func_00393110` | near miss: 7 diff with the file's flags (was 41) |
| `func_003932E8` | boot_elf | US draft of `func_00393228` | differs: did not build, or built to other bytes, in PAL |
| `func_00393548` | boot_elf | US draft of `func_00393488` | near miss: 5 diff with the file's flags (was 73) |
| `func_00393670` | boot_elf | US draft of `func_003935B0` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_00393728` | boot_elf | US draft of `func_00393668` | near miss: 57 diff with the file's flags (was 61) |
| `func_00393898` | boot_elf | US draft of `func_003937D8` | near miss: 3 diff with the file's flags (was 8) |
| `func_00393990` | boot_elf | US draft of `func_003938D0` | near miss: 16 diff with the file's flags (was 28) |
| `func_00393A70` | boot_elf | US draft of `func_003939B0` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_00393F38` | boot_elf | US draft of `func_00393E68` | near miss: 17 diff with the file's flags (was 34) |
| `func_00395370` | boot_elf | US draft of `func_00395288` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_00396948` | boot_elf | US draft of `func_00396860` | differs: did not build, or built to other bytes, in PAL |
| `func_00396AB8` | boot_elf | US draft of `func_003969D0` | near miss: 25 diff with the file's flags (the US draft: 49) |
| `func_00396C18` | boot_elf | US draft of `func_00396B30` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00397230` | boot_elf | US draft of `func_00397148` | flags: the US matched it with without `-mno-split-addresses` (a single-function override) |
| `func_00397EF0` | boot_elf | US draft of `func_00397E08` | differs: did not build, or built to other bytes, in PAL |
| `func_00397FC0` | boot_elf | US draft of `func_00397ED8` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_00398288` | boot_elf | US draft of `func_003981A0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00398878` | boot_elf | US draft of `func_00398760` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0039A148` | boot_elf | US draft of `func_0039A030` | near miss: 42 diff with the file's flags (was 57) |
| `func_0039A530` | boot_elf | US draft of `func_0039A418` | near miss: 10 diff with the file's flags (was 16) |
| `func_0039A5C0` | boot_elf | US draft of `func_0039A4A8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0039A818` | boot_elf | US draft of `func_0039A700` | symbols: func_003C2898 |
| `func_0039B088` | boot_elf | US draft of `func_0039AF70` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0039BD20` | boot_elf | US draft of `func_0039BC08` | near miss: 4 diff with the file's flags (was 7) |
| `func_0039BD90` | boot_elf | US draft of `func_0039BC78` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_0039C170` | boot_elf | US draft of `func_0039C058` | checks MATCH alone with its file's flags (`@ps2as`), but in place it changes how the full build compiles the next function, `func_0039C1A0` (7 diff; check the file whole: `tools/check.py src/boot_elf/text/39BE18.c func_0039C170 func_0039C1A0 --no-context`) |
| `func_0039F960` | boot_elf | US draft of `func_0039F848` | near miss: 3 diff with the file's flags (the US draft: 7) |
| `func_0039FE68` | boot_elf | US draft of `func_0039FD50` | near miss: 7 diff with the file's flags (was 18) |
| `func_003A1148` | boot_elf | US draft of `func_003A1008` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A2028` | boot_elf | US draft of `func_003A1EE8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A2A80` | boot_elf | US draft of `func_003A2940` | near miss: 4 diff with the file's flags (was 21) |
| `func_003A2FC0` | boot_elf | US draft of `func_003A2E80` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A31C8` | boot_elf | US draft of `func_003A3088` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A3B40` | boot_elf | US draft of `func_003A3A00` | near miss: 19 diff with the file's flags (was 239) |
| `func_003A4228` | boot_elf | US draft of `func_003A40E8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A53F8` | boot_elf | US draft of `func_003A52B8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A5AF8` | boot_elf | US draft of `func_003A59B8` | near miss: 39 diff with the file's flags (the US draft: 87) |
| `func_003A6578` | boot_elf | US draft of `func_003A6438` | symbols: func_003D9760_003A6438 |
| `func_003A6C90` | boot_elf | US draft of `func_003A6B18` | symbols: func_003A4548 func_003A7DB0 func_003A82F8 func_003E5950 |
| `func_003A7328` | boot_elf | US draft of `func_003A71B0` | symbols: func_003A4548 |
| `func_003A76A0` | boot_elf | US draft of `func_003A7528` | symbols: func_003A4548 |
| `func_003A8708` | boot_elf | US draft of `func_003A85C0` | differs: did not build, or built to other bytes, in PAL |
| `func_003AA168` | boot_elf | US draft of `func_003AA020` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003AACF8` | boot_elf | US draft of `func_003AABA0` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003AADB8` | boot_elf | US draft of `func_003AAC60` | differs: did not build, or built to other bytes, in PAL |
| `func_003ABBE8` | boot_elf | US draft of `func_003ABA48` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003ABDB0` | boot_elf | US draft of `func_003ABC10` | near miss: 1 diff with the file's flags (the US draft: 7) |
| `func_003ABFA0` | boot_elf | US draft of `func_003ABE00` | differs: did not build, or built to other bytes, in PAL |
| `func_003AC360` | boot_elf | US draft of `func_003AC1C0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003AC590` | boot_elf | US draft of `func_003AC3F0` | near miss: 22 diff with the file's flags (was 25) |
| `func_003AC9F0` | boot_elf | US draft of `func_003AC850` | differs: did not build, or built to other bytes, in PAL |
| `func_003ACD00` | boot_elf | US draft of `func_003ACB60` | near miss: 74 diff with the file's flags (was 76) |
| `func_003AD7E0` | boot_elf | US draft of `func_003AD640` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003AF1F0` | boot_elf | US draft of `func_003AF050` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003AF470` | boot_elf | US draft of `func_003AF2D0` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003AF7C0` | boot_elf | US draft of `func_003AF620` | flags: the US matched it with without `-fopt-stack` `@ps2as` (a single-function override) |
| `func_003AFC48` | boot_elf | US draft of `func_003AFAA8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003AFE10` | boot_elf | US draft of `func_003AFC70` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003B08E8` | boot_elf | US draft of `func_003B0748` | flags: the US matched it with without `-fopt-stack` (a single-function override) |
| `func_003B0D08` | boot_elf | US draft of `func_003B0B68` | flags: the US matched it with without `-mno-split-addresses` (a single-function override) |
| `func_003B0F70` | boot_elf | US draft of `func_003B0DD0` | near miss: 71 diff with the file's flags (the US draft: 77) |
| `func_003B2A00` | boot_elf | US draft of `func_003B2860` | flags: the US matched it with `-mno-split-addresses` (a single-function override) |
| `func_003B2A68` | boot_elf | US draft of `func_003B28C8` | near miss: 3 diff with the file's flags (was 17) |
| `func_003B2FB0` | boot_elf | US draft of `func_003B2E10` | flags: the US matched it with `-fno-schedule-insns` and without `-mno-split-addresses` (a single-function override) |
| `func_003B3440` | boot_elf | US draft of `func_003B32A0` | differs: did not build, or built to other bytes, in PAL |
| `func_003B3510` | boot_elf | US draft of `func_003B3370` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003B38E8` | boot_elf | US draft of `func_003B3748` | near miss: 2 diff with the file's flags (was 20) |
| `func_003B4218` | boot_elf | US draft of `func_003B4068` | near miss: 241 diff with the file's flags (was 253) |
| `func_003B4678` | boot_elf | US draft of `func_003B44C8` | flags: the US matched it with `-mno-split-addresses` (a single-function override) |
| `func_003B4738` | boot_elf | US draft of `func_003B4588` | flags: the US matched it with `-mno-split-addresses` (a single-function override) |
| `func_003B47F0` | boot_elf | US draft of `func_003B4640` | flags: the US matched it with `-mno-split-addresses` (a single-function override) |
| `func_003B4A10` | boot_elf | US draft of `func_003B4860` | flags: the US matched it with `-mno-split-addresses` (a single-function override) |
| `func_003B4C30` | boot_elf | US draft of `func_003B4A80` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003B5088` | boot_elf | US draft of `func_003B4ED8` | near miss: 39 diff with the file's flags (was 154) |
| `func_003B55D8` | boot_elf | US draft of `func_003B5428` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003B5890` | boot_elf | US draft of `func_003B56E0` | symbols: func_003B6220 |
| `func_003B5C10` | boot_elf | US draft of `func_003B5A60` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003B6128` | boot_elf | US draft of `func_003B5F78` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003B6940` | boot_elf | US draft of `func_003B6868` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003B6CC8` | boot_elf | US draft of `func_003B6BF0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003B8040` | boot_elf | US draft of `func_003B7F68` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003B8390` | boot_elf | US draft of `func_003B82B8` | differs: did not build, or built to other bytes, in PAL |
| `func_003B9650` | boot_elf | US draft of `func_003B9578` | flags: the US matched it with `@ps2as` and without `-fopt-stack` (a single-function override) |
| `func_003B9C58` | boot_elf | US draft of `func_003B9B80` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003BA280` | boot_elf | US draft of `func_003BA1A8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003BA9C0` | boot_elf | US draft of `func_003BA8E8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003BB348` | boot_elf | US draft of `func_003BB270` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003BB760` | boot_elf | US draft of `func_003BB688` | flags: the US matched it with `-mno-split-addresses` and without `@ps2as` (a single-function override) |
| `func_003BB988` | boot_elf | US draft of `func_003BB8B0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003BBC00` | boot_elf | US draft of `func_003BBB28` | near miss: 14 diff with the file's flags (was 35) |
| `func_003BBD20` | boot_elf | US draft of `func_003BBC48` | near miss: 25 diff with the file's flags (was 31) |
| `func_003BC7C0` | boot_elf | US draft of `func_003BC6E8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003BCA50` | boot_elf | US draft of `func_003BC978` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003BCC10` | boot_elf | US draft of `func_003BCB38` | differs: did not build, or built to other bytes, in PAL |
| `func_003BDCF0` | boot_elf | US draft of `func_003BDC00` | symbols: func_003BDA80 |
| `func_003BE0F0` | boot_elf | US draft of `func_003BE000` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003BEA10` | boot_elf | US draft of `func_003BE920` | differs: did not build, or built to other bytes, in PAL |
| `func_003BEB68` | boot_elf | US draft of `func_003BEA78` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003BF2B8` | boot_elf | US draft of `func_003BF1C8` | differs: did not build, or built to other bytes, in PAL |
| `func_003BF658` | boot_elf | US draft of `func_003BF568` | differs: did not build, or built to other bytes, in PAL |
| `func_003BFB58` | boot_elf | US draft of `func_003BFA68` | near miss: 6 diff with the file's flags (was 37) |
| `func_003C0010` | boot_elf | US draft of `func_003BFF08` | differs: did not build, or built to other bytes, in PAL |
| `func_003C0268` | boot_elf | US draft of `func_003C0160` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003C0760` | boot_elf | US draft of `func_003C0658` | differs: did not build, or built to other bytes, in PAL |
| `func_003C0E88` | boot_elf | US draft of `func_003C0D80` | near miss: 20 diff with the file's flags (was 24) |
| `func_003C1318` | boot_elf | US draft of `func_003C1210` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003C1638` | boot_elf | US draft of `func_003C1530` | symbols: func_003C1558 |
| `func_003C1848` | boot_elf | US draft of `func_003C1740` | symbols: func_003A7DB0 |
| `func_003C19B8` | boot_elf | US draft of `func_003C18B0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003C2868` | boot_elf | US draft of `func_003C2770` | symbols: func_003C2898 |
| `func_003C2D00` | boot_elf | US draft of `func_003C2BE8` | near miss: 6 diff with the file's flags (was 20) |
| `func_003C3A78` | boot_elf | US draft of `func_003C3960` | near miss: 9 diff with the file's flags (was 38) |
| `func_003C3FA0` | boot_elf | US draft of `func_003C3E68` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003C40E8` | boot_elf | US draft of `func_003C3FB0` | flags: the US matched it with `@ps2as` (a flag range the PAL file does not have) |
| `func_003C4280` | boot_elf | US draft of `func_003C4148` | flags: the US matched it with `-mno-split-addresses` `@ps2as` (a single-function override) |
| `func_003C4558` | boot_elf | US draft of `func_003C4420` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003C4718` | boot_elf | US draft of `func_003C45E0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003C4958` | boot_elf | US draft of `func_003C4818` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003C5110` | boot_elf | US draft of `func_003C4FA8` | flags: the US matched it with without `-mno-split-addresses` (a single-function override) |
| `func_003C5238` | boot_elf | US draft of `func_003C50D0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003C5728` | boot_elf | US draft of `func_003C55C8` | differs: did not build, or built to other bytes, in PAL |
| `func_003C5A98` | boot_elf | US draft of `func_003C5948` | symbols: func_003C3CB0 func_003C4CB8 |
| `func_003C6420` | boot_elf | US draft of `func_003C62D0` | near miss: 29 diff with the file's flags (was 33) |
| `func_003C6720` | boot_elf | US draft of `func_003C65D0` | differs: did not build, or built to other bytes, in PAL |
| `func_003C6A38` | boot_elf | US draft of `func_003C68F0` | flags: the US matched it with `@ps2as` and without `-fopt-stack` (a single-function override) |
| `func_003C6D48` | boot_elf | US draft of `func_003C6C00` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003CE7F8` | boot_elf | US draft of `func_003CE690` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003CE9A0` | boot_elf | US draft of `func_003CE838` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003CF1B0` | boot_elf | US draft of `func_003CF048` | differs: did not build, or built to other bytes, in PAL |
| `func_003D0ED8` | boot_elf | US draft of `func_003D0D70` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003D1280` | boot_elf | US draft of `func_003D1118` | flags: the US matched it with `-mno-split-addresses` `@ps2as` (a single-function override) |
| `func_003D1768` | boot_elf | US draft of `func_003D1600` | symbols: func_003D2110 func_003D2300 func_003D2770 func_003D2A10 |
| `func_003D30F8` | boot_elf | US draft of `func_003D2F90` | symbols: func_003D2FEC |
| `func_003D7790` | boot_elf | US draft of `func_003D7628` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003D90A8` | boot_elf | US draft of `func_003D8F40` | flags: the US matched it with without `-fopt-stack` (a flag range the PAL file does not have) |
| `func_003D9AF8` | boot_elf | US draft of `func_003D99A0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003D9FB8` | boot_elf | US draft of `func_003D9E70` | flags: the US matched it with `-mno-split-addresses` (a single-function override) |
| `func_003DA0A8` | boot_elf | US draft of `func_003D9F60` | near miss: 12 diff with the file's flags (was 37) |
| `func_003DA160` | boot_elf | US draft of `func_003DA018` | flags: the US matched it with `-mno-split-addresses` (a single-function override) |
| `func_003E17D0` | boot_elf | US draft of `func_003E1688` | near miss: 342 diff with the file's flags (was 356) |
| `func_003E41F8` | boot_elf | US draft of `func_003E40B0` | differs: did not build, or built to other bytes, in PAL |
| `func_003E47F8` | boot_elf | US draft of `func_003E46B0` | differs: did not build, or built to other bytes, in PAL |
| `func_003E5128` | boot_elf | US draft of `func_003E4FE0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003E60A0` | boot_elf | US draft of `func_003E5F58` | flags: the US matched it with `-mno-split-addresses` (a single-function override) |
| `func_003E6798` | boot_elf | US draft of `func_003E6650` | near miss: 56 diff with the file's flags (was 71) |
| `func_003E6FC0` | boot_elf | US draft of `func_003E6E78` | flags: the US matched it with without `-mno-split-addresses` (a single-function override) |
| `func_003E7620` | boot_elf | US draft of `func_003E74D8` | differs: did not build, or built to other bytes, in PAL |
| `func_003E7860` | boot_elf | US draft of `func_003E7700` | near miss: 2 diff with the file's flags (was 19) |
| `func_003E9828` | boot_elf | US draft of `func_003E96C8` | near miss: 507 diff with the file's flags (was 522) |
| `func_003EB628` | boot_elf | US draft of `func_003EB4C8` | flags: the US matched it with without `-mno-split-addresses` (a single-function override) |
| `func_003EBE58` | boot_elf | US draft of `func_003EBCF8` | flags: the US matched it with without `-mno-split-addresses` (a single-function override) |
| `func_003EC870` | boot_elf | US draft of `func_003EC710` | flags: the US matched it with without `-mno-split-addresses` (a single-function override) |
| `func_003ECF58` | boot_elf | US draft of `func_003ECDF8` | flags: the US matched it with without `-mno-split-addresses` (a single-function override) |
| `func_003ED5B0` | boot_elf | US draft of `func_003ED450` | flags: the US matched it with without `-mno-split-addresses` (a single-function override) |
| `func_003EDD40` | boot_elf | US draft of `func_003EDBE0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003EE310` | boot_elf | US draft of `func_003EE1B0` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003EE3F0` | boot_elf | US draft of `func_003EE290` | near miss: 39 diff with the file's flags (was 71) |
| `func_003EE560` | boot_elf | US draft of `func_003EE400` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003EEB18` | boot_elf | US draft of `func_003EE9B8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003EEBB8` | boot_elf | US draft of `func_003EEA58` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003EF1D8` | boot_elf | US draft of `func_003EF078` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003EF658` | boot_elf | US draft of `func_003EF4F8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003EF998` | boot_elf | US draft of `func_003EF838` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003EFF68` | boot_elf | US draft of `func_003EFE08` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003F0AC0` | boot_elf | US draft of `func_003F0940` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003F0C98` | boot_elf | US draft of `func_003F0B18` | near miss: 5 diff with the file's flags (was 38) |
| `func_003F10A8` | boot_elf | US draft of `func_003F0EE8` | differs: did not build, or built to other bytes, in PAL |
| `func_003F1D50` | boot_elf | US draft of `func_003F1B90` | differs: did not build, or built to other bytes, in PAL |
| `func_003F2118` | boot_elf | US draft of `func_003F1F58` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003F22E0` | boot_elf | US draft of `func_003F2120` | near miss: 46 diff with the file's flags (was 53) |
| `func_00381D88` | frontbin | US draft of `func_0037DD30` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00381F80` | frontbin | US draft of `func_0037DF28` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00381FF0` | frontbin | US draft of `func_0037DF98` | differs: did not build, or built to other bytes, in PAL |
| `func_003822C8` | frontbin | boot_elf's C of `func_003826A8` | near miss: 1 diff with the file's flags (boot_elf's copy is C) |
| `func_00382380` | frontbin | US draft of `func_0037E0F0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00382538` | frontbin | US draft of `func_0037E2A8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00382810` | frontbin | US draft of `func_0037E568` | differs: did not build, or built to other bytes, in PAL |
| `func_003828D8` | frontbin | US draft of `func_0037E630` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00382B20` | frontbin | US draft of `func_0037E878` | near miss: 16 diff with the file's flags (was 40) |
| `func_00382BC8` | frontbin | US draft of `func_0037E920` | near miss: 25 diff with the file's flags (was 33) |
| `func_00382E10` | frontbin | US draft of `func_0037EB68` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00383128` | frontbin | US draft of `func_0037EE80` | near miss: 20 diff with the file's flags (was 88) |
| `func_00383380` | frontbin | US draft of `func_0037F0D8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003834D0` | frontbin | US draft of `func_0037F228` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003841B8` | frontbin | US draft of `func_0037FEE8` | symbols: func_0037F7A8 |
| `func_00384498` | frontbin | US draft of `func_003801C0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00384778` | frontbin | US draft of `func_003804A0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003848D8` | frontbin | US draft of `func_00380600` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00384D88` | frontbin | US draft of `func_00380AB0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00385020` | frontbin | US draft of `func_00380D48` | near miss: 117 diff with the file's flags (was 179) |
| `func_003856B8` | frontbin | US draft of `func_003813E0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00385D28` | frontbin | US draft of `func_00381A50` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003860A8` | frontbin | US draft of `func_00381DD0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003861F0` | frontbin | US draft of `func_00381F18` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003864C0` | frontbin | US draft of `func_003821E8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003865A0` | frontbin | US draft of `func_003822C8` | flags: the US matched it with `-mno-split-addresses` (a single-function override) |
| `func_00386730` | frontbin | US draft of `func_00382458` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00387218` | frontbin | US draft of `func_00382F40` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00387268` | frontbin | US draft of `func_00382F90` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00387F68` | frontbin | US draft of `func_003838C0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003881B0` | frontbin | US draft of `func_00383B08` | near miss: 2 diff with the file's flags (was 4) |
| `func_00388AF8` | frontbin | US draft of `func_00384420` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00389240` | frontbin | US draft of `func_00384B68` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00389370` | frontbin | US draft of `func_00384C98` | flags: the US matched it with `-fno-schedule-insns` `@ps2as` (a single-function override) |
| `func_00389598` | frontbin | US draft of `func_00384EC0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00389B10` | frontbin | US draft of `func_00385438` | near miss: 8 diff with the file's flags (was 55) |
| `func_00389C48` | frontbin | US draft of `func_00385570` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00389D00` | frontbin | US draft of `func_00385628` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00389D60` | frontbin | US draft of `func_00385688` | near miss: 9 diff with the file's flags (the US draft: 18) |
| `func_00389DB0` | frontbin | US draft of `func_003856D8` | near miss: 7 diff with the file's flags (was 24) |
| `func_00389E28` | frontbin | US draft of `func_00385750` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00389EA0` | frontbin | US draft of `func_003857C8` | near miss: 7 diff with the file's flags (was 24) |
| `func_00389F18` | frontbin | US draft of `func_00385840` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00389FE0` | frontbin | US draft of `func_00385908` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0038A058` | frontbin | US draft of `func_00385980` | near miss: 61 diff with the file's flags (the US draft: 114) |
| `func_0038A238` | frontbin | US draft of `func_00385B60` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0038A3B8` | frontbin | US draft of `func_00385CE0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0038A948` | frontbin | US draft of `func_00386210` | near miss: 118 diff with the file's flags (was 155) |
| `func_0038ABC0` | frontbin | US draft of `func_00386488` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0038AD40` | frontbin | US draft of `func_00386608` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0038AE20` | frontbin | US draft of `func_003866E8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0038AF30` | frontbin | US draft of `func_003867F8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0038B120` | frontbin | US draft of `func_003869E8` | flags: the US matched it with `@ps2as` and without `-fopt-stack` (a single-function override) |
| `func_0038B4D0` | frontbin | US draft of `func_00386D98` | flags: the US matched it with `@ps2as` and without `-fopt-stack` (a single-function override) |
| `func_0038B670` | frontbin | US draft of `func_00386F38` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0038B850` | frontbin | US draft of `func_00387118` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0038BA30` | frontbin | US draft of `func_003872F8` | near miss: 150 diff with the file's flags (was 155) |
| `func_0038BCD8` | frontbin | US draft of `func_003875A0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0038C138` | frontbin | US draft of `func_00387A00` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0038C248` | frontbin | US draft of `func_00387B10` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0038C310` | frontbin | US draft of `func_00387BD8` | flags: the US matched it with `-mno-split-addresses` (a single-function override) |
| `func_0038C500` | frontbin | US draft of `func_00387DC8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0038C750` | frontbin | US draft of `func_00388018` | near miss: 58 diff with the file's flags (was 123) |
| `func_0038D2D0` | frontbin | US draft of `func_00388B98` | flags: the US matched it with without `@ps2as` (a single-function override) |
| `func_0038D308` | frontbin | US draft of `func_00388BD0` | flags: the US matched it with without `@ps2as` (a single-function override) |
| `func_0038D328` | frontbin | US draft of `func_00388BF0` | flags: the US matched it with without `@ps2as` (a single-function override) |
| `func_0038D5B0` | frontbin | US draft of `func_00388E78` | flags: the US matched it with without `@ps2as` (a single-function override) |
| `func_0038D5F0` | frontbin | US draft of `func_00388EB8` | final as `ASM_FUNC` in src/frontbin/38D278.c: VU0 macro code (lqc2, vmulax), hand-written assembly like its neighbours; this inline-asm draft is not C |
| `func_0038D688` | frontbin | US draft of `func_00388F50` | final as `ASM_FUNC` in src/frontbin/38D278.c: VU0 macro code (lqc2, vmulax), hand-written assembly like its neighbours; this inline-asm draft is not C |
| `func_0038D6C8` | frontbin | US draft of `func_00388F90` | flags: the US matched it with without `@ps2as` (a single-function override) |
| `func_0038D810` | frontbin | US draft of `func_003890D8` | flags: the US matched it with without `@ps2as` (a single-function override) |
| `func_0038D830` | frontbin | US draft of `func_003890F8` | flags: the US matched it with without `@ps2as` (a single-function override) |
| `func_0038D850` | frontbin | US draft of `func_00389118` | flags: the US matched it with without `@ps2as` (a single-function override) |
| `func_0038DA10` | frontbin | US draft of `func_003892D8` | flags: the US matched it with without `@ps2as` (a single-function override) |
| `func_0038DA68` | frontbin | US draft of `func_00389330` | flags: the US matched it with without `@ps2as` (a single-function override) |
| `func_0038DBA0` | frontbin | US draft of `func_00389468` | flags: the US matched it with `-mno-split-addresses` `@ps2as` (a single-function override) |
| `func_0038DED0` | frontbin | US draft of `func_003896E8` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_0038E150` | frontbin | US draft of `func_00389920` | differs: did not build, or built to other bytes, in PAL |
| `func_0038E1E8` | frontbin | US draft of `func_003899B8` | near miss: 2 diff with the file's flags (the US draft: 106) |
| `func_00390388` | frontbin | US draft of `func_0038BB50` | near miss: 179 diff with the file's flags (was 510) |
| `func_00391328` | frontbin | US draft of `func_0038CAF0` | near miss: 2 diff with the file's flags (was 21) |
| `func_00391408` | frontbin | US draft of `func_0038CBD0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003914A0` | frontbin | US draft of `func_0038CC68` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_00391678` | frontbin | US draft of `func_0038CE40` | flags: the US matched it with `-fno-rerun-loop-opt` `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_00392260` | frontbin | US draft of `func_0038DA28` | flags: the US matched it with without `-mno-split-addresses` (a single-function override) |
| `func_003922B8` | frontbin | US draft of `func_0038DA80` | near miss: 26 diff with the file's flags (was 36) |
| `func_00392350` | frontbin | US draft of `func_0038DB18` | near miss: 24 diff with the file's flags (was 31) |
| `func_003923D0` | frontbin | US draft of `func_0038DB98` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_00392440` | frontbin | US draft of `func_0038DC08` | near miss: 134 diff with the file's flags (was 160) |
| `func_003926E8` | frontbin | US draft of `func_0038DEB0` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_00392748` | frontbin | US draft of `func_0038DF10` | near miss: 65 diff with the file's flags (was 71) |
| `func_00392868` | frontbin | US draft of `func_0038E030` | near miss: 84 diff with the file's flags (the US draft: 85) |
| `func_00392BB8` | frontbin | US draft of `func_0038E380` | flags: the US matched it with without `-mno-split-addresses` (a single-function override) |
| `func_00392DF0` | frontbin | US draft of `func_0038E5B8` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_00392F08` | frontbin | US draft of `func_0038E6D0` | differs: did not build, or built to other bytes, in PAL |
| `func_00393168` | frontbin | US draft of `func_0038E930` | near miss: 25 diff with the file's flags (was 73) |
| `func_00393290` | frontbin | US draft of `func_0038EA58` | near miss: 4 diff with the file's flags (the US draft: 7) |
| `func_00393348` | frontbin | US draft of `func_0038EB10` | near miss: 23 diff with the file's flags (was 61) |
| `func_003934B8` | frontbin | US draft of `func_0038EC80` | near miss: 3 diff with the file's flags (was 8) |
| `func_003935B0` | frontbin | US draft of `func_0038ED78` | flags: the US matched it with without `-mno-split-addresses` (a single-function override) |
| `func_00393690` | frontbin | US draft of `func_0038EE58` | near miss: 27 diff with the file's flags (the US draft: 78) |
| `func_00393B58` | frontbin | US draft of `func_0038F310` | near miss: 19 diff with the file's flags (was 34) |
| `func_00394F90` | frontbin | US draft of `func_00390730` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_00396278` | frontbin | US draft of `func_00391A18` | flags: the US matched it with without `-mno-split-addresses` (a single-function override) |
| `func_00396568` | frontbin | US draft of `func_00391D08` | near miss: 17 diff with the file's flags (was 69) |
| `func_00396690` | frontbin | US draft of `func_00391E30` | flags: the US matched it with without `-mno-split-addresses` (a single-function override) |
| `func_003966D8` | frontbin | US draft of `func_00391E78` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_00396838` | frontbin | US draft of `func_00391FD8` | near miss: 6 diff with the file's flags (was 73) |
| `func_00396C60` | frontbin | US draft of `func_00392400` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00396E50` | frontbin | US draft of `func_003925F0` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003970D8` | frontbin | US draft of `func_00392878` | near miss: 2 diff with the file's flags (the US draft: 91) |
| `func_003972A0` | frontbin | US draft of `func_00392A40` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_00397638` | frontbin | US draft of `func_00392DD8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00397BE0` | frontbin | US draft of `func_00393380` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_00397D48` | frontbin | US draft of `func_003934E8` | near miss: 9 diff with the file's flags (the US draft: 11) |
| `func_00398498` | frontbin | US draft of `func_003936A8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00398668` | frontbin | US draft of `func_00393878` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00398808` | frontbin | US draft of `func_00393A18` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00398A88` | frontbin | US draft of `func_00393C98` | near miss: 7 diff with the file's flags (was 69) |
| `func_00398BB8` | frontbin | US draft of `func_00393DC8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00398C80` | frontbin | US draft of `func_00393E90` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00398E50` | frontbin | US draft of `func_00394060` | near miss: 151 diff with the file's flags (was 163) |
| `func_003990F0` | frontbin | US draft of `func_00394300` | near miss: 10 diff with the file's flags (was 18) |
| `func_00399450` | frontbin | US draft of `func_00394660` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003995A0` | frontbin | US draft of `func_003947B0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_00399D68` | frontbin | US draft of `func_00394F78` | near miss: 3 diff with the file's flags (was 57) |
| `func_0039A150` | frontbin | US draft of `func_00395360` | near miss: 10 diff with the file's flags (was 16) |
| `func_0039A1E0` | frontbin | US draft of `func_003953F0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0039A438` | frontbin | US draft of `func_00395648` | near miss: 38 diff with the file's flags (was 39) |
| `func_0039A8B8` | frontbin | US draft of `func_00395AC8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0039ACA8` | frontbin | US draft of `func_00395EB8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0039ADE0` | frontbin | US draft of `func_00395FF0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0039AEF0` | frontbin | US draft of `func_00396100` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0039AF10` | frontbin | US draft of `func_00396120` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0039B088` | frontbin | US draft of `func_00396298` | near miss: 5 diff with the file's flags (the US draft: 8) |
| `func_0039B100` | frontbin | US draft of `func_00396310` | near miss: 3 diff with the file's flags (was 23) |
| `func_0039B278` | frontbin | US draft of `func_00396488` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0039B328` | frontbin | US draft of `func_00396538` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0039B620` | frontbin | US draft of `func_00396830` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0039B680` | frontbin | US draft of `func_00396890` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0039B9B0` | frontbin | US draft of `func_00396BC0` | near miss: 3 diff with the file's flags (was 12) |
| `func_0039BA38` | frontbin | US draft of `func_00396C48` | near miss: 8 diff with the file's flags (was 39) |
| `func_0039BAD8` | frontbin | US draft of `func_00396CE8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0039BB60` | frontbin | US draft of `func_00396D70` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0039BC10` | frontbin | US draft of `func_00396E20` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0039BD08` | frontbin | US draft of `func_00396F18` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0039BDC0` | frontbin | US draft of `func_00396FD0` | near miss: 9 diff with the file's flags (was 19) |
| `func_0039C300` | frontbin | US draft of `func_00397380` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0039C410` | frontbin | US draft of `func_00397490` | flags: the US matched it with `@ps2as` and without `-fno-force-mem` (a single-function override) |
| `func_0039EC28` | frontbin | US draft of `func_00399C90` | near miss: 144 diff with the file's flags (was 166) |
| `func_0039EED8` | frontbin | US draft of `func_00399F40` | near miss: 2 diff with the file's flags (the US draft: 8) |
| `func_0039F108` | frontbin | US draft of `func_0039A170` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0039F348` | frontbin | US draft of `func_0039A3B0` | flags: the US matched it with `@ps2as` and without `-fno-force-mem` (a single-function override) |
| `func_0039F580` | frontbin | US draft of `func_0039A5E8` | near miss: 3 diff with the file's flags (was 7) |
| `func_0039FA88` | frontbin | US draft of `func_0039AAF0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_0039FDA0` | frontbin | US draft of `func_0039AE08` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A0D48` | frontbin | US draft of `func_0039BD48` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A0EC0` | frontbin | US draft of `func_0039BEC0` | near miss: 7 diff with the file's flags (was 47) |
| `func_003A0F98` | frontbin | US draft of `func_0039BF98` | near miss: 29 diff with the file's flags (was 33) |
| `func_003A1028` | frontbin | US draft of `func_0039C028` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A1F30` | frontbin | US draft of `func_0039CEA8` | differs: did not build, or built to other bytes, in PAL |
| `func_003A2680` | frontbin | US draft of `func_0039D5F8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A2DC8` | frontbin | US draft of `func_0039DB38` | differs: did not build, or built to other bytes, in PAL |
| `func_003A3E28` | frontbin | US draft of `func_0039EB98` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A4FF8` | frontbin | US draft of `func_0039FBD8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A56F8` | frontbin | US draft of `func_003A02D8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A6178` | frontbin | US draft of `func_003A0D58` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A6890` | frontbin | US draft of `func_003A1438` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A6CC8` | frontbin | US draft of `func_003A1870` | near miss: 74 diff with the file's flags (was 75) |
| `func_003A6F28` | frontbin | US draft of `func_003A1AD0` | near miss: 38 diff with the file's flags (was 182) |
| `func_003A72A0` | frontbin | US draft of `func_003A1E48` | near miss: 20 diff with the file's flags (the US draft: 59) |
| `func_003A7480` | frontbin | US draft of `func_003A2028` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A7618` | frontbin | US draft of `func_003A21C0` | near miss: 4 diff with the file's flags (was 164) |
| `func_003A8308` | frontbin | US draft of `func_003A2EE0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A8450` | frontbin | US draft of `func_003A3028` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A8678` | frontbin | US draft of `func_003A3128` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A8770` | frontbin | US draft of `func_003A3220` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A8980` | frontbin | US draft of `func_003A3430` | near miss: 17 diff with the file's flags (was 22) |
| `func_003A8A58` | frontbin | US draft of `func_003A3508` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A9050` | frontbin | US draft of `func_003A3B00` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A90A0` | frontbin | US draft of `func_003A3B50` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A9108` | frontbin | US draft of `func_003A3BB8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A91D0` | frontbin | US draft of `func_003A3C80` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A9338` | frontbin | US draft of `func_003A3DE8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A9440` | frontbin | US draft of `func_003A3EF0` | near miss: 43 diff with the file's flags (was 45) |
| `func_003A9618` | frontbin | US draft of `func_003A40C8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A9678` | frontbin | US draft of `func_003A4128` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A96D8` | frontbin | US draft of `func_003A4188` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A9740` | frontbin | US draft of `func_003A41F0` | near miss: 55 diff with the file's flags (was 56) |
| `func_003A9830` | frontbin | US draft of `func_003A42E0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A9AD0` | frontbin | US draft of `func_003A4580` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003A9C70` | frontbin | US draft of `func_003A4720` | near miss: 8 diff with the file's flags (the US draft: 11) |
| `func_003A9DB0` | frontbin | US draft of `func_003A4860` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003AA940` | frontbin | US draft of `func_003A53E0` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003AAA00` | frontbin | US draft of `func_003A54A0` | differs: did not build, or built to other bytes, in PAL |
| `func_003AB830` | frontbin | US draft of `func_003A6288` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003AB9F8` | frontbin | US draft of `func_003A6450` | flags: the US matched it with without `-mno-split-addresses` (a single-function override) |
| `func_003ABBE8` | frontbin | US draft of `func_003A6640` | differs: did not build, or built to other bytes, in PAL |
| `func_003AC1D8` | frontbin | US draft of `func_003A6C30` | near miss: 27 diff with the file's flags (was 30) |
| `func_003AC638` | frontbin | US draft of `func_003A7090` | differs: did not build, or built to other bytes, in PAL |
| `func_003AC948` | frontbin | US draft of `func_003A73A0` | near miss: 58 diff with the file's flags (was 60) |
| `func_003ACC38` | frontbin | US draft of `func_003A7690` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003AD278` | frontbin | US draft of `func_003A7CD0` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003AD428` | frontbin | US draft of `func_003A7E80` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003AEE38` | frontbin | US draft of `func_003A9890` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003AF0B8` | frontbin | US draft of `func_003A9B10` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003AF2A0` | frontbin | US draft of `func_003A9CF8` | flags: the US matched it with without `-mno-split-addresses` (a single-function override) |
| `func_003AF3A8` | frontbin | US draft of `func_003A9E00` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003AF408` | frontbin | US draft of `func_003A9E60` | flags: the US matched it with without `-fopt-stack` `-mno-split-addresses` (a single-function override) |
| `func_003AF498` | frontbin | US draft of `func_003A9EF0` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003AF628` | frontbin | US draft of `func_003AA080` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003AF660` | frontbin | US draft of `func_003AA0B8` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003AF838` | frontbin | US draft of `func_003AA290` | near miss: 2 diff with the file's flags (the US draft: 14) |
| `func_003AF890` | frontbin | US draft of `func_003AA2E8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003AFA58` | frontbin | US draft of `func_003AA4B0` | near miss: 181 diff with the file's flags (was 192) |
| `func_003AFDD0` | frontbin | US draft of `func_003AA828` | near miss: 34 diff with the file's flags (the US draft: 80) |
| `func_003AFFA8` | frontbin | US draft of `func_003AAA00` | near miss: 2 diff with the file's flags (was 37) |
| `func_003B0530` | frontbin | US draft of `func_003AAF88` | flags: the US matched it with without `-fopt-stack` (a single-function override) |
| `func_003B0950` | frontbin | US draft of `func_003AB3A8` | near miss: 107 diff with the file's flags (was 123) |
| `func_003B0BB8` | frontbin | US draft of `func_003AB610` | near miss: 71 diff with the file's flags (the US draft: 77) |
| `func_003B0FF0` | frontbin | US draft of `func_003ABA48` | near miss: 18 diff with the file's flags (was 49) |
| `func_003B1108` | frontbin | US draft of `func_003ABB60` | near miss: 12 diff with the file's flags (was 33) |
| `func_003B2648` | frontbin | US draft of `func_003AD0A0` | flags: the US matched it with `-mno-split-addresses` (a single-function override) |
| `func_003B26B0` | frontbin | US draft of `func_003AD108` | near miss: 3 diff with the file's flags (was 17) |
| `func_003B3088` | frontbin | US draft of `func_003ADAE0` | differs: did not build, or built to other bytes, in PAL |
| `func_003B3158` | frontbin | US draft of `func_003ADBB0` | near miss: 7 diff with the file's flags (was 45) |
| `func_003B3258` | frontbin | US draft of `func_003ADCB0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003B3530` | frontbin | US draft of `func_003ADF88` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003B36C8` | frontbin | US draft of `func_003AE120` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003B3E60` | frontbin | US draft of `func_003AE8A8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003B42C0` | frontbin | US draft of `func_003AED08` | near miss: 6 diff with the file's flags (was 8) |
| `func_003B4380` | frontbin | US draft of `func_003AEDC8` | near miss: 5 diff with the file's flags (the US draft: 6) |
| `func_003B4438` | frontbin | US draft of `func_003AEE80` | flags: the US matched it with `-mno-split-addresses` (a single-function override) |
| `func_003B4658` | frontbin | US draft of `func_003AF0A0` | flags: the US matched it with `-mno-split-addresses` (a single-function override) |
| `func_003B4878` | frontbin | US draft of `func_003AF2C0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003B4CD0` | frontbin | US draft of `func_003AF718` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003B5220` | frontbin | US draft of `func_003AFC68` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003B54D8` | frontbin | US draft of `func_003AFF20` | symbols: func_003B0A60 |
| `func_003B5858` | frontbin | US draft of `func_003B02A0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003B5D70` | frontbin | US draft of `func_003B07B8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003B6280` | frontbin | US draft of `func_003B0DA0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003B6588` | frontbin | US draft of `func_003B10A8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003B66F0` | frontbin | US draft of `func_003B1210` | near miss: 7 diff with the file's flags (was 27) |
| `func_003B6910` | frontbin | US draft of `func_003B1430` | near miss: 16 diff with the file's flags (was 23) |
| `func_003B6AC0` | frontbin | US draft of `func_003B15E0` | flags: the US matched it with without `-mno-split-addresses` (a single-function override) |
| `func_003B6B90` | frontbin | US draft of `func_003B16B0` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003B7288` | frontbin | US draft of `func_003B1DA8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003B77A0` | frontbin | US draft of `func_003B22C0` | near miss: 73 diff with the file's flags (was 77) |
| `func_003B78D8` | frontbin | US draft of `func_003B23F8` | near miss: 85 diff with the file's flags (was 144) |
| `func_003B7C88` | frontbin | US draft of `func_003B27A8` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003B7F80` | frontbin | US draft of `func_003B2AA0` | near miss: 6 diff with the file's flags (the US draft: 19) |
| `func_003B7FD8` | frontbin | US draft of `func_003B2AF8` | near miss: 267 diff with the file's flags (was 272) |
| `func_003B8430` | frontbin | US draft of `func_003B2F50` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003B9298` | frontbin | US draft of `func_003B3DB8` | flags: the US matched it with `@ps2as` and without `-fopt-stack` (a single-function override) |
| `func_003B98A0` | frontbin | US draft of `func_003B43C0` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003B9A90` | frontbin | US draft of `func_003B45B0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003B9EC8` | frontbin | US draft of `func_003B49E8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003BA608` | frontbin | US draft of `func_003B5128` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003BAF90` | frontbin | US draft of `func_003B5AB0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003BB1F0` | frontbin | US draft of `func_003B5D10` | near miss: 68 diff with the file's flags (the US draft: 100) |
| `func_003BB3A8` | frontbin | US draft of `func_003B5EC8` | flags: the US matched it with `-mno-split-addresses` (a single-function override) |
| `func_003BB468` | frontbin | US draft of `func_003B5F88` | near miss: 44 diff with the file's flags (was 45) |
| `func_003BB530` | frontbin | US draft of `func_003B6050` | flags: the US matched it with `-mno-split-addresses` (a single-function override) |
| `func_003BB5D0` | frontbin | US draft of `func_003B60F0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003BB848` | frontbin | US draft of `func_003B6368` | near miss: 34 diff with the file's flags (was 35) |
| `func_003BB968` | frontbin | US draft of `func_003B6488` | near miss: 30 diff with the file's flags (was 31) |
| `func_003BC408` | frontbin | US draft of `func_003B6F28` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003BC858` | frontbin | US draft of `func_003B7378` | near miss: 87 diff with the file's flags (was 91) |
| `func_003BCA48` | frontbin | US draft of `func_003B7568` | near miss: 13 diff with the file's flags (was 34) |
| `func_003BCAF8` | frontbin | US draft of `func_003B7618` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003BCDA8` | frontbin | US draft of `func_003B78C8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003BCF80` | frontbin | US draft of `func_003B7AA0` | near miss: 41 diff with the file's flags (was 43) |
| `func_003BD390` | frontbin | US draft of `func_003B7EB0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003BD4B8` | frontbin | US draft of `func_003B7FD8` | near miss: 4 diff with the file's flags (the US draft: 86) |
| `func_003BD760` | frontbin | US draft of `func_003B8280` | flags: the US matched it with `-mno-split-addresses` (a single-function override) |
| `func_003BD938` | frontbin | US draft of `func_003B8440` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003BDCB0` | frontbin | US draft of `func_003B87B8` | flags: the US matched it with `-mno-split-addresses` (a single-function override) |
| `func_003BDD38` | frontbin | US draft of `func_003B8840` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003BE010` | frontbin | US draft of `func_003B8B18` | near miss: 3 diff with the file's flags (was 13) |
| `func_003BE168` | frontbin | US draft of `func_003B8C70` | near miss: 5 diff with the file's flags (was 34) |
| `func_003BE3F0` | frontbin | US draft of `func_003B8EF8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003BE448` | frontbin | US draft of `func_003B8F50` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003BE658` | frontbin | US draft of `func_003B9160` | differs: did not build, or built to other bytes, in PAL |
| `func_003BE7B0` | frontbin | US draft of `func_003B92B8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003BEE98` | frontbin | US draft of `func_003B99A0` | flags: the US matched it with `-mno-split-addresses` (a single-function override) |
| `func_003BEF00` | frontbin | US draft of `func_003B9A08` | differs: did not build, or built to other bytes, in PAL |
| `func_003BF058` | frontbin | US draft of `func_003B9B60` | flags: the US matched it with `-mno-split-addresses` (a single-function override) |
| `func_003BF0E0` | frontbin | US draft of `func_003B9BE8` | flags: the US matched it with `-mno-split-addresses` (a single-function override) |
| `func_003BF148` | frontbin | US draft of `func_003B9C50` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003BF2A0` | frontbin | US draft of `func_003B9DA8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003BF390` | frontbin | US draft of `func_003B9E98` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003BF7A0` | frontbin | US draft of `func_003BA2A8` | near miss: 3 diff with the file's flags (was 37) |
| `func_003BFAC8` | frontbin | US draft of `func_003BA5B8` | flags: the US matched it with `@ps2as` and without `-fopt-stack` (a single-function override) |
| `func_003BFC58` | frontbin | US draft of `func_003BA748` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003BFD60` | frontbin | US draft of `func_003BA850` | near miss: 48 diff with the file's flags (was 54) |
| `func_003BFE58` | frontbin | US draft of `func_003BA948` | flags: the US matched it with `-mno-split-addresses` (a single-function override) |
| `func_003BFEB0` | frontbin | US draft of `func_003BA9A0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003C03A8` | frontbin | US draft of `func_003BAE98` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003C0AD0` | frontbin | US draft of `func_003BB5C0` | near miss: 20 diff with the file's flags (the US draft: 22) |
| `func_003C0C40` | frontbin | US draft of `func_003BB730` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003C0F60` | frontbin | US draft of `func_003BBA50` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003C1600` | frontbin | US draft of `func_003BC0F0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003C24B0` | frontbin | US draft of `func_003BCFB0` | symbols: func_003BD0D8 |
| `func_003C2948` | frontbin | US draft of `func_003BD428` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003C33C8` | frontbin | US draft of `func_003BDEA8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003C36C0` | frontbin | US draft of `func_003BE1A0` | near miss: 17 diff with the file's flags (was 38) |
| `func_003C3860` | frontbin | US draft of `func_003BE340` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003C38E0` | frontbin | US draft of `func_003BE3C0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003C3BE8` | frontbin | US draft of `func_003BE6A8` | near miss: 4 diff with the file's flags (was 19) |
| `func_003C3D30` | frontbin | US draft of `func_003BE7F0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003C3EC8` | frontbin | US draft of `func_003BE988` | flags: the US matched it with `-mno-split-addresses` `@ps2as` (a single-function override) |
| `func_003C41A0` | frontbin | US draft of `func_003BEC60` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003C4360` | frontbin | US draft of `func_003BEE20` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003C45A0` | frontbin | US draft of `func_003BF058` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003C48A8` | frontbin | US draft of `func_003BF360` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003C4E80` | frontbin | US draft of `func_003BF910` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003C5110` | frontbin | US draft of `func_003BFBA8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003C5180` | frontbin | US draft of `func_003BFC18` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003C5370` | frontbin | US draft of `func_003BFE08` | differs: did not build, or built to other bytes, in PAL |
| `func_003C56E0` | frontbin | US draft of `func_003C0188` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003C6068` | frontbin | US draft of `func_003C0B10` | flags: the US matched it with `@ps2as` and without `-fopt-stack` `-mno-split-addresses` (a single-function override) |
| `func_003C62C8` | frontbin | US draft of `func_003C0D70` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003C6368` | frontbin | US draft of `func_003C0E10` | differs: did not build, or built to other bytes, in PAL |
| `func_003C6680` | frontbin | US draft of `func_003C1130` | flags: the US matched it with `@ps2as` and without `-fopt-stack` (a single-function override) |
| `func_003C6990` | frontbin | US draft of `func_003C1440` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003CCF60` | frontbin | US draft of `func_003C79F0` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003CE098` | frontbin | US draft of `func_003C8B28` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003CE1B0` | frontbin | US draft of `func_003C8C40` | near miss: 12 diff with the file's flags (was 37) |
| `func_003CE250` | frontbin | US draft of `func_003C8CE0` | near miss: 23 diff with the file's flags (was 27) |
| `func_003CE2C0` | frontbin | US draft of `func_003C8D50` | near miss: 48 diff with the file's flags (was 68) |
| `func_003CE440` | frontbin | US draft of `func_003C8ED0` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003CE5E8` | frontbin | US draft of `func_003C9078` | near miss: 40 diff with the file's flags (the US draft: 75) |
| `func_003CEDF8` | frontbin | US draft of `func_003C9888` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003CEF40` | frontbin | US draft of `func_003C99D0` | near miss: 22 diff with the file's flags (was 66) |
| `func_003CF0F0` | frontbin | US draft of `func_003C9B80` | near miss: 10 diff with the file's flags (was 50) |
| `func_003D0B20` | frontbin | US draft of `func_003CB5B0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003D0EC8` | frontbin | US draft of `func_003CB958` | flags: the US matched it with `-mno-split-addresses` `@ps2as` (a single-function override) |
| `func_003D13B0` | frontbin | US draft of `func_003CBE40` | symbols: func_003CC950 func_003CCB40 func_003CCFB0 func_003CD250 |
| `func_003D6BC0` | frontbin | US draft of `func_003D1650` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003D6EE8` | frontbin | US draft of `func_003D1978` | flags: the US matched it with `@ps2as` and without `-fopt-stack` (a single-function override) |
| `func_003D7080` | frontbin | US draft of `func_003D1B10` | near miss: 131 diff with the file's flags (was 136) |
| `func_003D73D8` | frontbin | US draft of `func_003D1E68` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003D78E0` | frontbin | US draft of `func_003D2370` | flags: the US matched it with `@ps2as` and without `-fopt-stack` (a single-function override) |
| `func_003D7DE8` | frontbin | US draft of `func_003D2878` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003D8500` | frontbin | US draft of `func_003D2F90` | near miss: 19 diff with the file's flags (was 47) |
| `func_003D85C0` | frontbin | US draft of `func_003D3050` | near miss: 27 diff with the file's flags (was 31) |
| `func_003D86B8` | frontbin | US draft of `func_003D3148` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003D8998` | frontbin | US draft of `func_003D3428` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003D8CF0` | frontbin | US draft of `func_003D3780` | flags: the US matched it with `@ps2as` and without `-fopt-stack` (a single-function override) |
| `func_003D8FC0` | frontbin | US draft of `func_003D3A50` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003D91F0` | frontbin | US draft of `func_003D3C80` | near miss: 10 diff with the file's flags (was 15) |
| `func_003D9740` | frontbin | US draft of `func_003D41E0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003D9CF0` | frontbin | US draft of `func_003D47A0` | near miss: 6 diff with the file's flags (was 37) |
| `func_003D9DA8` | frontbin | US draft of `func_003D4858` | flags: the US matched it with `-mno-split-addresses` (a single-function override) |
| `func_003E1418` | frontbin | US draft of `func_003DBEC8` | near miss: 408 diff with the file's flags (was 743) |
| `func_003E38F8` | frontbin | US draft of `func_003DE3A8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003E3E40` | frontbin | US draft of `func_003DE8F0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003E4440` | frontbin | US draft of `func_003DEEF0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003E4508` | frontbin | US draft of `func_003DEFB8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003E4588` | frontbin | US draft of `func_003DF038` | near miss: 433 diff with the file's flags (was 442) |
| `func_003E4D70` | frontbin | US draft of `func_003DF820` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003E5520` | frontbin | US draft of `func_003DFFD0` | near miss: 28 diff with the file's flags (was 36) |
| `func_003E5CE8` | frontbin | US draft of `func_003E0798` | flags: the US matched it with `-mno-split-addresses` (a single-function override) |
| `func_003E63E0` | frontbin | US draft of `func_003E0E90` | near miss: 56 diff with the file's flags (was 71) |
| `func_003E6C08` | frontbin | US draft of `func_003E16B8` | flags: the US matched it with without `-mno-split-addresses` (a single-function override) |
| `func_003E7268` | frontbin | US draft of `func_003E1D18` | near miss: 9 diff with the file's flags (the US draft: 13) |
| `func_003E74A8` | frontbin | US draft of `func_003E1F40` | near miss: 2 diff with the file's flags (was 19) |
| `func_003E9470` | frontbin | US draft of `func_003E3F08` | near miss: 457 diff with the file's flags (was 522) |
| `func_003EB270` | frontbin | US draft of `func_003E5D08` | flags: the US matched it with without `-mno-split-addresses` (a single-function override) |
| `func_003EBAA0` | frontbin | US draft of `func_003E6538` | flags: the US matched it with without `-mno-split-addresses` (a single-function override) |
| `func_003EC4B8` | frontbin | US draft of `func_003E6F50` | flags: the US matched it with without `-mno-split-addresses` (a single-function override) |
| `func_003ECBA0` | frontbin | US draft of `func_003E7638` | flags: the US matched it with without `-mno-split-addresses` (a single-function override) |
| `func_003ED1F8` | frontbin | US draft of `func_003E7C90` | flags: the US matched it with without `-mno-split-addresses` (a single-function override) |
| `func_003ED988` | frontbin | US draft of `func_003E8420` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003EDD40` | frontbin | US draft of `func_003E87D8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003EDDA0` | frontbin | US draft of `func_003E8838` | flags: the US matched it with without `-mno-split-addresses` (a single-function override) |
| `func_003EDF58` | frontbin | US draft of `func_003E89F0` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003EE038` | frontbin | US draft of `func_003E8AD0` | near miss: 38 diff with the file's flags (was 71) |
| `func_003EE1A8` | frontbin | US draft of `func_003E8C40` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003EE760` | frontbin | US draft of `func_003E91F8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003EE800` | frontbin | US draft of `func_003E9298` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003EEE20` | frontbin | US draft of `func_003E98B8` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003EF2A0` | frontbin | US draft of `func_003E9D38` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003EF5E0` | frontbin | US draft of `func_003EA078` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003EFBB0` | frontbin | US draft of `func_003EA648` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003EFFF8` | frontbin | US draft of `func_003EAA90` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003F0708` | frontbin | US draft of `func_003EB180` | near miss: 42 diff with the file's flags (the US draft: 103) |
| `func_003F08E0` | frontbin | US draft of `func_003EB358` | near miss: 5 diff with the file's flags (was 38) |
| `func_003F0CF0` | frontbin | US draft of `func_003EB728` | flags: the US matched it with `@ps2as` and without `-mno-split-addresses` (a single-function override) |
| `func_003F1998` | frontbin | US draft of `func_003EC3D0` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003F1D60` | frontbin | US draft of `func_003EC798` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_003F1F28` | frontbin | US draft of `func_003EC960` | flags: the US matched it with `@ps2as` (a single-function override) |
| `func_L01_003BC658` | levels | Retail-derived attempt | Isolated PAL/US checks match, but the 12-byte C function occupies a 16-byte section and displaces following assembly in levels 40-53. |
| `func_L01_0040DF30` | levels | Retail-derived attempt | Internal float-load nop matches documented handwritten math and existing ASM_FUNC analogues. Both tiers stopped without compiles. |
| `func_L01_0040DF68` | levels | Retail-derived attempt | Internal float-load nop matches documented handwritten math, corroborated by adjacent accumulator operations. Both tiers stopped without compiles. |
| `func_L01_0047DAD0` | levels | Retail-derived attempt | Three distinct Low/High forms emit the same three instruction differences with existing no-split-address flags: address register and store scheduling disagree. |
| `func_L01_00494580` | levels | Retail-derived attempt | Low and High forms omit an internal nop or schedule the return differently (three differences). No evidence justifies handwritten classification. |
| `func_L01_0045A520` | levels | Retail-derived attempt | Low and High retain an absolute load instead of the GP-relative load under existing Ps2EeAs flags (four differences). |
| `func_L01_0030A130` | levels | Retail-derived attempt | Low and High retain an absolute load instead of the GP-relative load (five differences); moving the extern into the block did not help. |
| `func_L01_0030D678` | levels | Retail-derived attempt | Three Low/High forms retain the same absolute-load mismatch (five differences) under existing file flags. |
| `func_L39_00505BB8` | levels | Retail-derived attempt | PAL and US body checks match, but the current zero-padding path cannot preserve level 39's trailing nonzero fill word. Ordinary C; not classified as handwritten. |
| `func_L39_005061C8` | levels | Retail-derived attempt | PAL and US body checks match, but the current C integration path drops the trailing nonzero fill word at PAL 0x005061D4. Ordinary C; keep the assembly marker. |
| `func_L39_0050B050` | levels | Retail-derived attempt | PAL and US body checks match, but the current C integration path drops the trailing nonzero fill word at PAL 0x0050B05C. Ordinary C; keep the assembly marker. |
| `func_L39_00516228` | levels | Retail-derived attempt | PAL and US body checks match, but the current C integration path drops the trailing nonzero fill word at PAL 0x00516234. Ordinary C; keep the assembly marker. |
| `func_L10_004AFFF0` | levels | Retail-derived attempt | The 16-byte catalogue extent excludes the live return delay-slot store at 0x004B0000. Retail confirms a 20-byte function. The semantic draft includes that separately catalogued delay slot and is uncompiled. |
| `func_L11_004AFFF0` | levels | Retail-derived attempt | The 16-byte catalogue extent excludes the live return delay-slot comparison at 0x004B0000, classified separately as a remnant. The complete equality-test draft needs 20 bytes; no full match. |
| `func_L39_004C35C8` | levels | Retail-derived attempt | The 12 executable bytes match, but the 16-byte catalogue entry also includes a trailing nonzero fill word. High confirmed the object and retail bytes; the PAL checker still reports one difference. |
| `func_L39_004C47C0` | levels | Retail-derived attempt | All 12 executable bytes match in PAL and US, but both checkers report the missing trailing nonzero fill included in the 16-byte catalogue entry. Existing C padding cannot preserve it. |
| `func_L39_0068B460` | levels | Retail-derived attempt | A fixed-address draft passes PAL, but US requires 0x002415C0 instead of PAL 0x00241440. Symbolic Low and High forms retain five code-generation differences. The PAL-only draft is not integrated. |
| `func_L39_006B6C30` | levels | Retail-derived attempt | A fixed-address draft passes PAL, but US requires 0x002415C0 instead of PAL 0x00241440. The symbolic Low form has five code-generation differences. The PAL-only draft is not integrated. |
| `func_L39_006DDDE8` | levels | Retail-derived attempt | Low and High forms retain four register-allocation differences in the global load, nested pointer load and stores. Size and store order agree. Repeated equivalent code generation; ordinary C remains plausible. |
| `func_L39_0061BF50` | levels | Retail-derived attempt | Low and High forms retain two instruction-order differences: the index shift precedes address adjustment instead of following it. All other instructions agree. Stopped on repeated equivalent code generation. |
| `func_L01_0041A6BC` | levels | Retail-derived attempt | The isolated PAL body matches, but whole-file eight-byte entry alignment shifts its four-mod-eight retail address and failed level preflight. All 34 places have the same restriction; no same-code US twin. |
| `func_L01_0041A6D4` | levels | Retail-derived attempt | The isolated PAL body matches, but whole-file eight-byte entry alignment conflicts with all 34 four-mod-eight retail places. The preserved integration object confirms the shift; no separate first-error diagnostic or US twin. |
| `func_L39_004B5938` | levels | Retail-derived attempt | 5 differing instructions; correct 24-byte size; shift/mask ordering and v0/v1/a0 allocation differ. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. |
| `func_L39_0050DBB0` | levels | Retail-derived attempt | 4 differences: copy temporary v1 instead of retail v0; size, offsets, instruction order and zero return agree. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. |
| `func_L39_00518A60` | levels | Retail-derived attempt | 5 differing instructions; High best 5, Low best 4 (low/compile-02.log). Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. The retained Low draft is closer than High; an existing caller declares void(s32), so the byte-swap return prototype also needs integration review. |
| `func_L01_003EB2C0` | levels | Retail-derived attempt | 6 positional diff; 28 bytes versus 24 retail: lui/addiu replaces GP-relative addiu. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. The retained Low draft indexes from the existing scalar global declaration; the true aggregate extent is unknown. It is a semantic reference only. |
| `func_L39_004C6100` | levels | Retail-derived attempt | 12 diff; 48-byte framed jal versus retail 32-byte frame-free sibling j; early-return form emits same instructions as Low. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. |
| `func_L01_004D2470` | levels | Retail-derived attempt | At +0x10 canonical PAL body uses addiu immediate 0x4610 (34 placements); all 15 multiplayer PAL placements require 0x45E0. Canonical PAL/US MATCH inherited from Low only. All 34 story placements use member offset 0x4610; all 15 multiplayer placements use 0x45E0. Shared catalogue identity masks this field-offset difference. Keep assembly until both variants can be represented legitimately. |
| `func_L01_004D2498` | levels | Retail-derived attempt | Preserved low draft: canonical PAL/US checks MATCH. Read-only low-object derivation fails at +0x10 in all PAL multiplayer levels39-53: emitted 0x24A54610 versus retail 0x24A545E0; other34 placements derive successfully. All 34 story placements use member offset 0x4610; all 15 multiplayer placements use 0x45E0. Shared catalogue identity masks this field-offset difference. Keep assembly until both variants can be represented legitimately. |
| `func_L01_003897E8` | levels | Retail-derived attempt | 2 instruction positions: lui a0 and sd ra reversed; remaining 40-byte body agrees. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. |
| `func_L39_005E0ED8` | levels | Retail-derived attempt | 8 diff; 32-byte body versus 40-byte retail; arithmetic pi * -0.5f folds to literal-pool lwc1 instead of inline lui/ori/mtc1. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. |
| `func_L04_00362EF0` | levels | Retail-derived attempt | 5 diff: 36-byte body vs 40; sltiu writes a1 instead of v0, missing move a1,v0, branch displacement and epilogue shifted. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. |
| `func_L01_003A4910` | levels | Retail-derived attempt | 5 diff lines; 36 bytes versus retail 40: sltiu writes a1 directly, omitting v0-to-a1 copy and shortening branch displacement. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. |
| `func_L30_0034C428` | levels | Retail-derived attempt | 2 instructions in second 64-bit constant synthesis; other eight instructions match. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. |
| `func_L07_003E31F8` | levels | Retail-derived attempt | 9 diff: named float scale still emits 32-byte body plus .lit4; union alternative emits 44-byte body, 10 diff ($v0 constant, mtc1 hazard nop and schedule/register differences). Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. |
| `func_L19_00323398` | levels | Retail-derived attempt | 2 diff: sd ra and addiu completing global address a1 are swapped; all other instructions and 40-byte size agree. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. Trailing one-element members are draft layout placeholders; their actual extents remain unknown. |
| `func_L19_003D0108` | levels | Retail-derived attempt | 2 diff: sd ra and addiu a1 address-low instructions swapped. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. The High draft preserves the reviewed callee prototype; its exploratory effect[12] bound is unproven and must not be treated as a recovered object layout. |
| `func_L21_00338D38` | levels | Retail-derived attempt | 5 differing lines; sltiu targets v1 instead of v0 and retail move v1,v0 is missing; 36 versus 40 bytes. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. |
| `func_L39_004B5910` | levels | Retail-derived attempt | 2 differing instructions: initial andi/sll order swapped; High 2 and 3 reproduce Low best bytes. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. |
| `func_L39_00504460` | levels | Retail-derived attempt | 5 differing words: frame 0x10 vs 0x20, ra save/restore offset 8 vs 0x10, and s0/ra restore order. Both High probes identical to Low best; all functional body instructions agree. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. |
| `func_L39_00504488` | levels | Retail-derived attempt | 5 differing words: frame size, ra save/restore slot, and s0/ra restore order; body and 40-byte size agree. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. |
| `func_L39_005044B0` | levels | Retail-derived attempt | 5 instructions: frame 0x10 vs retail 0x20; ra slot 8 vs 0x10; restore s0/ra vs retail ra/s0. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. |
| `func_L39_005044D8` | levels | Retail-derived attempt | 5 instruction differences: frame 0x10 vs 0x20, ra slot 8 vs 0x10, restore order; body exact. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. |
| `func_L39_0068E0E8` | levels | Retail-derived attempt | 4 differing words at correct 40-byte size: global-load high-half register and prologue scheduling; identical to Low. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. |
| `func_L39_006AF7A8` | levels | Retail-derived attempt | 4 differing instruction positions at correct 40-byte size: global high-half v1 vs v0 and global load scheduled after ra save/a1 setup rather than before. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. |
| `func_L39_006B2D18` | levels | Retail-derived attempt | 4 instruction differences: global high-half v1 versus v0 and load/save/second-argument ordering; unchanged from Low. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. High confirmed the caller passes an unused object argument; the retained draft preserves that signature. |
| `func_L39_004CBF60` | levels | Retail-derived attempt | Low check.py: 1 diff; all 3 executable instructions match, missing trailing 0xCDCDCDCD at 0x004CBF6C. High independently verified retail and saved object. Low and High stopped without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is retained. |
| `func_L39_006BDCC8` | levels | Retail-derived attempt | 3 diff: global high-half register v1 versus v0, and singleton load versus ra-save scheduling; unchanged from Low. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L01_004360B8` | levels | Retail-derived attempt | Low canonical PAL/US candidate matches, but independent retail/object derive rejects all 15 multiplayer placements at nonrelocated stores +0x20/+0x24: 0x24E10/0x24E14 versus 0x24DE0/0x24DE4. All 34 story placements use +0x24E10/+0x24E14; all 15 multiplayer placements use +0x24DE0/+0x24DE4. Canonical PAL/US checks do not establish an integrated match. Shared catalogue layout variants require a legitimate representation. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_005A8CC8` | levels | Retail-derived attempt | 11 differing words; 52 bytes vs retail 48, swapped v0/v1, grouped/reversed base stores and empty return delay slot. All 15 PAL placements agree, but all 17 US placements shift the fixed globals by +0x180. The preserved absolute-address draft is PAL-only. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_005E3A10` | levels | Retail-derived attempt | 2 differing words at +0x08/+0x0c: table-low addiu and index sll are swapped. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L30_0034C460` | levels | Retail-derived attempt | 10 diff; 40-byte body vs retail 48. movz coalescing replaces retail copies and movn; remaining registers and scheduling differ. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L07_003318D8` | levels | Retail-derived attempt | 2 words: generated lui v0/addiu v1,v0 versus retail lui v1/addiu v1,v1; all other words agree. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_00508080` | levels | Retail-derived attempt | 4 differing words, same 48-byte size: object v1 versus retail a0; constant v0 versus retail v1. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_00515F90` | levels | Retail-derived attempt | Latest: 12 positional diffs, 56 versus 48 bytes. Best retained draft: 6 positional diffs, 48 bytes; input register, null branch/save/zero initialization and callback/payload load scheduling differ. Preserved High probe 4 is the best draft: six differences at the correct 48-byte size. Its null-path pointer-to-integer conversion relies on this target ABI. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_006DD3D0` | levels | Retail-derived attempt | 4 diff, 48 bytes: initial global/argument load order and condition register; all instructions after initial branch match. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L01_0041A7D0` | levels | Retail-derived attempt | 6. Six differences remain in mask/counter registers and setup order. The draft relies on existing owning-file declarations for D_001A7E18 and T_00417F60. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L09_00403E40` | levels | Retail-derived attempt | 8 diff; 56 bytes; register allocation only. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L09_00405450` | levels | Retail-derived attempt | 8 instruction words in best HIGH draft; Low remains better at 6. Size 56 bytes and tail agree. Preserved Low draft is better at six differing words; High remained at eight. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_00508470` | levels | Retail-derived attempt | 13 positional diffs; 52 vs 56 bytes. Missing entry daddu v1,a0,zero; checks a0 and loads field into v0 instead of v1. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L01_00436020` | levels | Retail-derived attempt | Last probe: 14 diff with scalar global / gp load; best retained: 4 instruction-order differences (initial lui/stack adjustment and argument copy/ra save swapped). Preserved four-difference draft uses an array declaration; the existing scalar declaration gives fourteen differences. Field offset 0x1FCA8 agrees across all 49 PAL placements. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_00509078` | levels | Retail-derived attempt | 14 diff for preserved High probe 1 (56 bytes vs 60); probe 3 reports 12 diff but emits 64 bytes and adds boolean materialization. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_005733F8` | levels | Retail-derived attempt | 4 positional instruction differences: global lui register and ra restore scheduling. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_006772B8` | levels | Retail-derived attempt | 2 instruction differences at +0x20/+0x24: second global address uses v1 instead of retail v0. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L04_00361DB8` | levels | Retail-derived attempt | 9 instruction differences; 64-byte draft retains both tests but two return sequences instead of retail common exit. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_004CC440` | levels | Retail-derived attempt | 5 diff; generated frame 0x10 vs retail 0x20, ra slot 8 vs 0x10, and reversed restore order; body agrees. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_004D9610` | levels | Retail-derived attempt | 7 positional differences; 68 vs 64 bytes; xor/select v0/v1 allocation and extra epilogue move. Final probe08 confirms restored probe01. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_00510EB0` | levels | Retail-derived attempt | Best probe 03: 12 diff, 56 vs 64 bytes; missing 16-byte frame and final-store scheduling differs. Last probe 05: 17 diff, same aggregate stack stores as Low. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_006D78B8` | levels | Retail-derived attempt | 4 differing words on PAL and US: compiler emits split lui v1 before s0/ra restores; retail restores first, then adjacent lui at/sw pair. Destination is 0x0024D760 in PAL and 0x0024D860 in US; a fixed PAL literal is not portable. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_004CC800` | levels | Retail-derived attempt | PAL and US: Low checks report 1 diff; independent raw-object audit confirms all 12 executable bytes match, but trailing 0xCDCDCDCD at +0xC is missing from the fixed 16-byte span. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_004DD240` | levels | Retail-derived attempt | 1 diff in Low compile-01.log, independently confirmed from raw ELF: all 12 executable bytes agree; missing trailing 0xCDCDCDCD at +0xC in the 16-byte catalogue span. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_004DE8E8` | levels | Retail-derived attempt | PAL and US: one missing trailing 0xCDCDCDCD word; all three executable words independently verified exact, without relocations. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_004DE908` | levels | Retail-derived attempt | Low PAL/US check.py: 1 diff, missing trailing CDCDCDCD; independent raw-byte verification confirms all three executable words match in both regions. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_004DF668` | levels | Retail-derived attempt | 1 diff (Low retained probe, independently byte-verified): executable 12 bytes equal; missing trailing 0xCDCDCDCD at 0x004DF674 in 16-byte catalogue span. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_004DF678` | levels | Retail-derived attempt | Low: 1 diff, missing trailing 0xCDCDCDCD at 0x004DF684; all 12 executable return bytes independently verified from kept object and retail ELF. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_004DF688` | levels | Retail-derived attempt | LOW probe: 1 diff, missing trailing 0xCDCDCDCD at 0x004DF694; HIGH independently verified all 12 executable bytes fully resolved equal retail and next boundary 0x004DF698. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L01_0047BB98` | levels | Retail-derived attempt | Low evidence: 12 diff; .lit4 load versus inline lui/ori/mtc1; 64 versus 72 bytes. No HIGH compiler probe. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L01_00514DD0` | levels | Retail-derived attempt | 3 diff at +0x1C/+0x20/+0x24: entry a0 versus v1; null branch destination and delay slot. Retail explicitly returns 0 or 1; the existing void caller declaration is stale. The preserved s32 draft corrects the return based on retail evidence and forwards every helper argument. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L01_00300678` | levels | Retail-derived attempt | 18 diff; generated 64 bytes versus retail 72; object stays in a0, global in v1, eliminating retail entry/argument pointer moves and changing scheduling. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L08_003BAB88` | levels | Retail-derived attempt | 7 prologue scheduling/register differences; remaining 11 instructions agree. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L21_00339148` | levels | Retail-derived attempt | 13 diff; 56-byte .text versus 72-byte retail; two .lit4 loads replace immediate lui/ori/mtc1 sequences; text identical to Low. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L33_003AF628` | levels | Retail-derived attempt | 20 differing words; 84-byte body, 0x20 frame, extra saved register and cached global address versus retail 72 bytes and 0x10 frame. The first helper consumes one argument; its existing unused second parameter is documented in the attempt evidence. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_004D1480` | levels | Retail-derived attempt | 5 instruction-order differences at +0x04,+0x08,+0x0C,+0x10,+0x18; 72 bytes; full unmasked audit confirms all remaining words and both call targets agree. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_004D1BB8` | levels | Retail-derived attempt | 5 unmasked differing words at offsets 0x04, 0x08, 0x0C, 0x10, 0x18: entry scheduling only; both resolved calls and remaining instructions agree. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_004FC158` | levels | Retail-derived attempt | Best High probe: 5 frame/save/restore words differ; remaining 13 of 18 raw words exact after resolving sole genuine jal relocation. Final alternative: 16 diff. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_00508340` | levels | Retail-derived attempt | Best High probe 02: 11 diff, 76 vs 72 bytes; prologue save/copy order, v0/v1 predicate/status allocation, store/zero scheduling and extra result move. Final probe 04: 12 diff. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_00515C28` | levels | Retail-derived attempt | 5 instruction-order differences: prologue move/save swap and three epilogue positions; independently confirmed by resolving only three genuine call relocations. The free helper exists in the actual overlay but is only partly decoded. Its return prototype remains unproven and was not changed to force allocation. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L01_0047C4A8` | levels | Retail-derived attempt | 13 diff; 92-byte candidate vs 80-byte retail; lui/addiu instead of gp object addresses; all 49 raw PAL placements fail. Preserve the simpler Low draft (21 differences). High reached 13 using an experimental .sdata declaration and placement-specific callback aliases; the section attribute is not recovered source metadata, and global addressing still fails. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L01_00389798` | levels | Retail-derived attempt | 16 diff; Low and both High probes emit identical raw .text, including literal-pool load for 0.9f instead of inline lui/ori/mtc1. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L01_004A35C0` | levels | Retail-derived attempt | 2 words: final addiu a0 and move a1 swapped at +0x34/+0x38 in all 34 PAL placements. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_0060B478` | levels | Retail-derived attempt | 2 instruction differences at +8,+12: 64-bit constant synthesis at all 15 PAL placements. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_0066C788` | levels | Retail-derived attempt | 20 diff; 72 candidate bytes vs 80 retail; identical body and relocations to Low. Preserve Low without the unsuccessful experimental .sdata attribute. Exact object extent and runtime GP evidence remain insufficient; do not invent a small global. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_004E47A8` | levels | Retail-derived attempt | Best retained draft: 5 raw word differences at 0, 8, 0x40, 0x44, 0x4C (frame, ra slot and restores); final conditional-expression probe: 14 differences, reproducing Low probes 1/2. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_004CBFC8` | levels | Retail-derived attempt | Best: 8/20 raw words, frame size, save offsets and restore order; final exploratory probe: 19 diff. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_004D76B0` | levels | Retail-derived attempt | 11/20 raw words differ: start=s0 and arg=s2 instead of start=s2 and arg=s0, plus save/restore scheduling. Preserve High's decoded helper arguments and status returns; the earlier draft passed an extra argument. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_004E5008` | levels | Retail-derived attempt | 7 literal words at offsets 0, 0x10, 0x30, 0x34, 0x40, 0x44, 0x4c: frame, ra slot, branch-likely and restore order; all three LOW/HIGH wordings have identical raw text. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_004F4F18` | levels | Retail-derived attempt | 16 diff; object 84 bytes versus retail 80; identical raw .text to Low; prologue ordering, branch-likely duplicated clear, cleanup delay-slot scheduling. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_00500198` | levels | Retail-derived attempt | 5 raw words at 0x0, 0xC, 0x3C, 0x44, 0x4C: frame size, ra slot, restore order and frame release; all body words equal. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_00505780` | levels | Retail-derived attempt | Best retained Low draft: 5 literal stack-frame word differences; all 3 HIGH forms: identical 14-diff output. Preserve the five-difference Low draft. The existing memset return declaration conflict remains documented; no prototype change is justified merely for allocation. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_00507DD0` | levels | Retail-derived attempt | func_L39_00507DD0: 14 diff; raw audit: 13 differing words within 80 bytes plus 4 extra candidate bytes. Keep the copy helper void: its zero-count path does not establish a return value. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_0050C5A8` | levels | Retail-derived attempt | 8 words in prologue/argument scheduling; raw sole-placement audit confirms; 80-byte object retained. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_0050C5F8` | levels | Retail-derived attempt | 8 words; prologue/argument setup scheduling; raw ELF audit agrees; both objects identical to Low. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_005128F8` | levels | Retail-derived attempt | Best retained draft: 16 diff, 76 bytes versus 80 retail; final probe: 17 diff, 84 bytes. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_00516498` | levels | Retail-derived attempt | Closest draft: 10 literal prologue/epilogue word differences; call/store body exact with only two genuine JAL relocations resolved. Return-reuse approach: 14 diff. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_005165D0` | levels | Retail-derived attempt | 10 differing words / 80 bytes; identical to Low best: frame/save spacing and epilogue/branch scheduling. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_0069C738` | levels | Retail-derived attempt | Low evidence independently audited: 17 diff; 72-byte object vs 80-byte retail; real .lit4 R_MIPS_LITERAL for 0.6f versus inline lui/ori/mtc1; argument scheduling differs. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_0069FD38` | levels | Retail-derived attempt | Low probe: 11 diff; 72-byte text vs 80 retail; High raw audit confirms R_MIPS_LITERAL at +0x18 and four-byte .lit4 instead of inline 0x3FD66666 synthesis. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_006A5AA0` | levels | Retail-derived attempt | 11 diff; 72-byte text versus 80-byte retail; .lit4 4 bytes, final scalar .text identical to Low. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_006C8278` | levels | Retail-derived attempt | Independent raw audit confirms Low: 11 check.py diffs; 72-byte .text versus retail 80, with .lit4 0.1f and R_MIPS_LITERAL instead of inline lui/ori/mtc1. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_006DF118` | levels | Retail-derived attempt | 4 raw words at +0x08,+0x0c,+0x10,+0x18; opening v1/v0 allocation and a1/ra-save order. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L01_00514D78` | levels | Retail-derived attempt | 6 literal words in HIGH probes01-03 (identical objects); LOW best remains 4 words. Preserve the simpler Low draft with four differences; High has six. Neither tier matched. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L03_003AEC58` | levels | Retail-derived attempt | 5 instruction differences at offsets 0x4,0x8,0xC,0x10,0x1C in all 6 PAL placements; other-level relocation values unresolved. The existing func_L03_0043F5D0 wrapper omits its consumed float argument and packed-colour return. Independent review of all seven PAL and seven US wrapper placements supports s32(s32,s32,f32), explicitly passing weight to f32 func_0038D0B0(f32) and returning s32 func_0038DBD8(s32,s32,f32). No accepted campaign function depends on this correction; it remains a prerequisite for future integration. The failed cross-placement audit leaves noncanonical relocation values unresolved. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L03_0032ED88` | levels | Retail-derived attempt | Independent retail audit confirms literal member +0x60 in level03 versus +0x50 in level07 at function+0x18; inventory.identity incorrectly masks it. No C draft is recommended. The Low draft changed an existing pointer declaration to an array; catalogue and callee identity must be reviewed first. The two placements also call different helper bodies. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L07_003328D0` | levels | Retail-derived attempt | 11/22 raw PAL words differ after resolving all six actual object relocations; address setup and counter/values register allocation. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L07_003C90F8` | levels | Retail-derived attempt | 20 positional diff; 80 vs 88 bytes. Final store order corrected; sole remaining aligned difference is R_MIPS_LITERAL load versus inline 0x3D80ADFD setup. High fixes the final store order. The shifted comparison is diagnostic only; a real literal relocation remains unresolved. Actual helper float returns conflict with an older void declaration. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L07_003D7628` | levels | Retail-derived attempt | 11 diff; text 72 vs retail 88 bytes, plus 8-byte .lit4; text identical to Low. Preserve all four callee arguments: the incoming angle in f13 is consumed transitively. The Low note claiming it is overwritten was incorrect. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_004BCDE0` | levels | Retail-derived attempt | 5 raw differing words at +00,+0C,+48,+4C,+54; body exact; frame/save/restore mismatch. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_004C23A0` | levels | Retail-derived attempt | 15 differing words; 84-byte candidate vs 88-byte retail; frame, branch layout and restore order. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_004F60D8` | levels | Retail-derived attempt | 19 diff; 92 bytes vs retail 88; exact same .text as LOW best; saved-register allocation and branch scheduling. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_004E3050` | levels | Retail-derived attempt | Low check: 1 diff, missing trailing 0xCDCDCDCD at +0xC; independent High raw audit confirms all 12 executable bytes exact at sole PAL placement after only actual HI16/LO16 relocations. Low and High stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM. |
| `func_L39_004FB5C8` | levels | Retail-derived attempt | Best retained probe 1: 18 checker and raw word differences, 88 versus 88 bytes. Final probe 3: 20 checker differences, 84 versus 88 bytes. Preserve High nonvolatile draft and exact best object; the unused 0xD6 stack store and larger frame remain unsupported. Do not preserve Low volatile workaround. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L39_005049D8` | levels | Retail-derived attempt | 9 raw differing words: frame size, saved s1/ra offsets, save/copy order; body and actual resolved jal agree. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L39_004DF698` | levels | Retail-derived attempt | Low check.py: 1 diff, absent trailing 0xCDCDCDCD at +0xC; independent raw audit confirms all 12 executable bytes equal after only actual HI16/LO16 relocations. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L39_004DF6A8` | levels | Retail-derived attempt | Low PAL and US checks each report 1 diff: exact 12-byte executable getter, missing trailing CDCDCDCD in the fixed 16-byte span; independently confirmed raw ELF/object bytes in both versions. Exact 12 executable bytes PAL/US, actual relocations only; trailing CD fill remains unsupported. Ordinary C. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L39_004E2440` | levels | Retail-derived attempt | Low check: 1 diff, absent trailing CDCDCDCD at +0xC in 16-byte span; independent raw audit confirms exact 12 executable bytes after resolving only actual HI16/LO16 relocations. Exact 12 executable PAL bytes; CD fill remains unsupported. US applicable but unchecked. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L39_004F16A0` | levels | Retail-derived attempt | Low PAL and US checks: 1 diff each; independent raw audit confirms all 12 executable bytes exact, but trailing CDCDCDCD absent from 16-byte catalogue span. Exact 12 executable PAL/US bytes, zero relocations; CD fill remains unsupported. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L39_004F16B0` | levels | Retail-derived attempt | Low check: 1 diff; exact 12-byte getter, catalogue span 16 includes trailing 0xCDCDCDCD at 004F16BC. Independent raw audit confirms zero relocations and literal offsets +4/+4. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L01_00432F38` | levels | Retail-derived attempt | Inherited isolated PAL/US MATCH only; current-gp all-placement audit: PAL 34 pass/15 fail, US 34 pass/17 fail, all failures +0x10 same-symbol HI/LO vs GPREL contradiction. Do not integrate despite canonical isolated matches. Fixed-gp direct audit passes 34 story placements per version but fails all 15 PAL/17 US multiplayer placements at +0x10. Retain INCLUDE_ASM. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L01_00432F68` | levels | Retail-derived attempt | 2 address-register differences (lui v1 vs v0; lw base v1 vs v0), independently confirmed at all 49 PAL placements. Retain Low plain unsized global view, not High diagnostic section annotation. Actual 32-bit mode access supported by resident instructions, full extent unproven. High scalar yields 5 diff; actual-section diagnostic returns to Low two register differences across49PAL. Ordinary C unresolved; US applicable unchecked. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L01_00433098` | levels | Retail-derived attempt | 3 diff: lui/load use v1 rather than v0; store is lui-relative instead of gp-relative. Preserve simple Low scalar u32 \|= 0x20 draft. High array view has 3 diff but unproven object shape; canonical codegen and multiplayer fixed-gp constraint remain unresolved. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L01_004DFE88` | levels | Retail-derived attempt | PAL 6 diff: 24-byte HI16/LO16 absolute addressing versus 20-byte GP-relative retail; raw mismatch at all 34 placements. Preserve High plain extern f32 table[5], not Low experimental section attribute. Real five-float table requires GP addressing not obtained under existing flags. High 6 diff versus Low 5. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L01_003A4708` | levels | Retail-derived attempt | Low's retained unchanged-flags probe: 3 diff; .text 12 bytes plus .lit4 4 bytes versus retail inline 20-byte float return. Independently confirmed object relocation and all ten retail bodies. Ten PAL bodies audited; ordinary return 0.7f remains blocked by literal-pool codegen with existing flags. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L01_003BE190` | levels | Retail-derived attempt | Low VM check: 3 diff; independently confirmed 12-byte .text plus 4-byte .lit4/R_MIPS_LITERAL versus retail 20-byte inline constant-return body. Seven PAL bodies audited; return 0.7f literal-pool blocker with existing flags. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L01_00356B70` | levels | Retail-derived attempt | 3 diff; 12-byte literal-pool lwc1/jr/nop versus 20-byte inline lui/ori/mtc1/jr/nop; raw .text identical to Low; .lit4 storage remains. Preserve simplest 0.45f return draft; High natural fraction emits identical 12-byte text with .lit4 versus retail 20. Ordinary C unresolved under existing flags; one High compile, US applicable unchecked. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L16_004DCA98` | levels | Retail-derived attempt | PAL 2 diff: lui uses v1 instead of v0; lw base v1 instead of v0. Raw audit confirms only word offsets +00 and +04 differ. Retain Low direct expression; High inline accessor repeats identical two register differences. Signed offset/void return evidence retained; PAL actual relocations resolve and other3words exact. US Low diagnostic masks unresolved globals, not raw verified. Ordinary C unresolved. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L39_004BB410` | levels | Retail-derived attempt | 1 diff: retail trailing sw v0,0x14(a0) at +0x10 absent; both High objects exactly match first 16 bytes, no relocations. Retain simple Low flags \|= 0xA setter. Low plus two High forms reproduce exact 16 executable bytes, missing trailing duplicate store in 20-byte span. Independent PAL/US overlay and resident direct-reference scans found only normal entry references; dynamic references not excluded. Ordinary C unresolved, not handwritten. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L39_004C4EC8` | levels | Retail-derived attempt | No compile: full 20-byte span contains reachable 12-byte setter, zero, then unreferenced store at +0x10; PAL and applicable US retail spans audited literally. Record independent frozen-span boundary evidence in notes only. Ordinary reachable prefix plus unreferenced nonzero tail; not a handwritten classification. No full-span candidate, zero High probes. Keep INCLUDE_ASM and all boundaries unchanged; semantic prefixes remain in ignored scratch. Low and High completed without an integrated match; retain INCLUDE_ASM. Boundary evidence concerns the assigned span, not a handwritten classification of its ordinary C prefix. |
| `func_L39_004CB680` | levels | Retail-derived attempt | No compile: direct PAL and US ELF audits confirm empty return followed by two unreachable nonzero stack-adjustment words within the 20-byte catalogue extent. Record independent frozen-span boundary evidence in notes only. Ordinary reachable prefix plus unreferenced nonzero tail; not a handwritten classification. No full-span candidate, zero High probes. Keep INCLUDE_ASM and all boundaries unchanged; semantic prefixes remain in ignored scratch. Low and High completed without an integrated match; retain INCLUDE_ASM. Boundary evidence concerns the assigned span, not a handwritten classification of its ordinary C prefix. |
| `func_L39_00508458` | levels | Retail-derived attempt | 0 body bytes PAL and US using retained Low objects; PAL integration loses CDCDCDCD word at 0x0050846C before next entry 0x00508470. Executable20-byte body PAL/US exact; existing PAL C integration drops external +20 CD fill. US pad copy can preserve it, but does not fix PAL. Ordinary C unresolved, zero High probes. Callback return not fully established; taking address only, document prototype caveat. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L39_006D4018` | levels | Retail-derived attempt | 3 differing full words at indices 1,2,4: pointer-load/store base registers; literal offsets 0x3C and 1 agree. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L39_004CC178` | levels | Retail-derived attempt | PAL and US: 1 diff; all five executable raw words exact, missing sixth catalogue word 0xCDCDCDCD. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L39_004DDFB0` | levels | Retail-derived attempt | No compile: retail span is a 12-byte ordinary address getter followed by zero, orphan addiu v0,v0,0x30, and CDCDCDCD fill; PAL and applicable US twin audited directly. Frozen 24-byte span contains ordinary 12-byte getter, zero alignment, orphan instruction and CD fill. Notes only; no matching attempt exists for full span. Retain INCLUDE_ASM; boundary review is not handwritten classification. Low and High completed without an integrated match; retain INCLUDE_ASM. Boundary evidence concerns the assigned span, not a handwritten classification of its ordinary C prefix. |
| `func_L39_004EABF0` | levels | Retail-derived attempt | PAL and US: 1 diff, trailing CD fill absent from 24-byte catalogue comparison; all 20 executable bytes exact, zero relocations. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L01_0032ADC0` | levels | Retail-derived attempt | 4 positional diffs; 32-byte candidate uses HI16/LO16 address pair instead of retail 28-byte GP-relative body. Preserve simple Low four-byte scalar slot draft. High function-pointer typing remains canonical-only; multiplayer initialization is not independently established. @ps2as late extern sizing still produces an absolute address pair instead of GP. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L01_003F1740` | levels | Retail-derived attempt | Canonical isolated PAL/US MATCH inherited from Low; actual relocation-resolved bodies pass 49 PAL/51 US. Level39 complete span differs at +28 (CDCDCDCD vs zero); callee symbol/prototype conflicts remain. Ordinary wrapper has four distinct callee families with incompatible return contracts and conflicting existing declarations. Canonical isolated checks pass, but PAL level39 trailing CD fill is lost by existing C layout. No uniform portable draft is recommended; retain INCLUDE_ASM. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L01_003F1760` | levels | Retail-derived attempt | 0 canonical PAL/US; exact raw 49 PAL + 51 US placements after sole actual R26 relocation; heterogeneous callee return types remain. Caller-specific alias resolves every address and raw body, but actual callees return s32 in levels03/07 and void elsewhere. Discarding the result does not establish a single faithful prototype. Notes only pending catalogue/type handling; retain INCLUDE_ASM. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L39_005A5F48` | levels | Retail-derived attempt | 5 diff: load/LUI scheduling and v0/v1/a0 allocation; raw comparison differs at word indices 1,2,3,4,6 across all 15 PAL placements. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L03_0032C870` | levels | Retail-derived attempt | 4 positional diffs; complete 16-byte struct still emits HI16/LO16 address pair; 32 candidate bytes versus 28 retail code bytes. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L28_00420020` | levels | Retail-derived attempt | Low check.py: 1 diff, final sb at 0x0042003C exceeds 28-byte catalogue range; independent High audit confirms full 32-byte object equals retail with zero relocations. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L39_004BB470` | levels | Retail-derived attempt | No compiler comparison: actual PAL/US frozen span contains 12-byte C getter followed by zero/orphan mask 7/zero/orphan mask 8. The frozen span bundles an ordinary 12-byte getter with orphan instructions. Direct PAL/US and resident reference scans found entry calls only; computed references remain possible. This is boundary review, not handwritten classification; no full-span C candidate. Low and High completed without an integrated match; retain INCLUDE_ASM. Boundary evidence concerns the assigned span, not a handwritten classification of its ordinary C prefix. |
| `func_L39_00504500` | levels | Retail-derived attempt | 5 instructions: frame 0x10 versus 0x20; ra slot 8 versus 0x10; restore order s0/ra versus ra/s0. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L39_00518A38` | levels | Retail-derived attempt | 2 instruction words: initial andi/sll order reversed; literal raw offsets 0 and 4; no relocations. Low and High completed without an integrated match; retain INCLUDE_ASM. |
| `func_L39_00515DA8` | levels | Retail-derived attempt | 20 instruction differences; the 92-byte draft exceeds retail's 88 bytes. High rewrites reproduced Low's output. The simpler Low allocation/copy draft is retained. Low and High remain unresolved; retain INCLUDE_ASM. |
| `func_L39_006CD218` | levels | Retail-derived attempt | The best Low draft differs only in the initial address-register pair. Three High probes worsened the result to 37, 15 and 22 checker differences. Low and High remain unresolved; retain INCLUDE_ASM. |
| `func_L39_006CD270` | levels | Retail-derived attempt | The best Low draft has two address-register differences; all other 20 words agree. High's builtin-copy form grew to 96 bytes versus retail's 88. Low and High remain unresolved; retain INCLUDE_ASM. |
| `func_L39_006D6868` | levels | Retail-derived attempt | 13 register-allocation differences remain in the 88-byte body. Independent High review reproduced Low's output. Low and High remain unresolved; retain INCLUDE_ASM. |
| `func_L39_006D9E10` | levels | Retail-derived attempt | 13 of 22 words differ only in register allocation. The High draft preserves the established unsized s32 global declaration. Low and High remain unresolved; retain INCLUDE_ASM. |
| `func_L39_006DA628` | levels | Retail-derived attempt | 13 of 22 words differ only in register allocation. The High draft preserves the established unsized s32 global declaration. Low and High remain unresolved; retain INCLUDE_ASM. |
| `func_L39_006DCCE0` | levels | Retail-derived attempt | The initial address-register pair differs; the other 20 words agree after resolving actual relocations. The simpler Low draft is retained. Low and High remain unresolved; retain INCLUDE_ASM. |
| `func_L01_0032BE90` | levels | Retail-derived attempt | 16 checker differences remain: the fixed assembler emits an 88-byte body with a literal pool instead of retail's inline constant. All 34 PAL placements were audited. Low and High remain unresolved; retain INCLUDE_ASM. |
| `func_L16_003E2518` | levels | Retail-derived attempt | The fixed assembler emits 80 bytes plus an eight-byte literal pool instead of retail's 96-byte inline-constant body. The checker reports 15 differences; two literal relocations remain unresolved in the raw audit. US explicitly differs. Low and High remain unresolved; retain INCLUDE_ASM. |
| `func_L30_00342030` | levels | Retail-derived attempt | Nine checker differences remain: the 88-byte draft uses a literal pool instead of retail's 96-byte inline-constant body. US explicitly differs. Low and High remain unresolved; retain INCLUDE_ASM. |
| `func_L39_00500450` | levels | Retail-derived attempt | Seven frame/save/restore words differ; the call body agrees after resolving actual relocations. The simpler Low draft is retained. Low and High remain unresolved; retain INCLUDE_ASM. |
| `func_L39_00504528` | levels | Retail-derived attempt | Five frame/save/restore words differ; all allocation, error-reporting and zeroing instructions agree. Callee arguments and pointer returns were independently audited. Low and High remain unresolved; retain INCLUDE_ASM. |
| `func_L39_00518E48` | levels | Retail-derived attempt | Ten of 24 words differ in frame layout and scheduling. The retained scalar-input draft copies the evidenced 18 bytes and forwards all four helper arguments; its natural structure extent does not prove the original allocation size. Low and High remain unresolved; retain INCLUDE_ASM. |
| `func_L39_0067F0A0` | levels | Retail-derived attempt | Both isolated 96-byte bodies match, but the shared wrapper has incompatible downstream contracts: menu s32(s32), story void(void). All 35 wrapper and 34 callback placements per version were audited. Notes only; a uniform cast or declaration does not repair the contract. Low and High remain unresolved; retain INCLUDE_ASM. |
| `func_L39_0067F1B0` | levels | Retail-derived attempt | Both isolated 96-byte bodies match. Independent review confirms the same shared-wrapper contract conflict as func_L39_0067F0A0. Notes only; Low's function-pointer cast is unsuitable for integration. Low and High remain unresolved; retain INCLUDE_ASM. |
| `func_L39_006873F0` | levels | Retail-derived attempt | Seven words differ: six allocation/prologue differences and unused retail argument setup. The High draft preserves the empty callee's established void(void) declaration; Low's six-difference draft misdeclares it. Low and High remain unresolved; retain INCLUDE_ASM. |
| `func_L39_006B78F8` | levels | Retail-derived attempt | Four scheduling/register words differ. The draft also requires an explicit three-argument forwarding correction in existing func_L39_00688340; that separate proposal remains uncompiled and unintegrated. US has no twin. Low and High remain unresolved; retain INCLUDE_ASM. |
| `func_L39_006CD1B8` | levels | Retail-derived attempt | The initial address-register pair differs; the other 22 words agree. The draft preserves the established unsized s32 global and literal 32-byte copy. Low and High remain unresolved; retain INCLUDE_ASM. |
| `func_L39_006D6808` | levels | Retail-derived attempt | 14 register-allocation words differ in the 96-byte body. The High draft preserves the established unsized s32 global and 36-byte aggregate with four-byte alignment. Low and High remain unresolved; retain INCLUDE_ASM. |
