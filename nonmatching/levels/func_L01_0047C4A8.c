/* Retail-derived draft; never linked.
 * 13 diff; 92-byte candidate vs 80-byte retail; lui/addiu instead of gp object addresses;
 * all 49 raw PAL placements fail. Preserve the simpler Low draft (21 differences). High
 * reached 13 using an experimental .sdata declaration and placement-specific callback
 * aliases; the section attribute is not recovered source metadata, and global addressing
 * still fails. Low and High stopped without an integrated match. Ordinary C remains
 * plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"

extern s32 D_L01_001E0530;
extern s32 D_L01_001E0518[6];
extern void func_L01_0047C4F8(void);
extern void func_L01_0047C518(void);
extern void func_L01_0047C538(void);
extern s32 func_003E6FA0(s32 *, s32, s32, s32, s32, s32);
s32 func_L01_0047C4A8(s32 unused) {
    if (D_L01_001E0530 == 0) {
        func_003E6FA0(D_L01_001E0518, (s32)func_L01_0047C4F8,
            (s32)func_L01_0047C518, (s32)func_L01_0047C538, 0, 0);
        D_L01_001E0530 = 1;
    }
    return (s32)D_L01_001E0518;
}
