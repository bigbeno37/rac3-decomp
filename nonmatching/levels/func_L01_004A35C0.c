/* Retail-derived draft; never linked.
 * 2 words: final addiu a0 and move a1 swapped at +0x34/+0x38 in all 34 PAL placements. Low
 * and High stopped without an integrated match. Ordinary C remains plausible; retain
 * INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"

extern void func_0038CB78(void *, s32, s32);
extern u8 D_L01_00236B90[];
extern u8 D_L01_00237800[];
extern u8 D_L01_001E0D30[];
void func_L01_004A35C0(void) {
    func_0038CB78(D_L01_00236B90, 0, 0xC70);
    func_0038CB78(D_L01_00237800, 0, 0xC70);
    func_0038CB78(D_L01_001E0D30, 0, 0x40);
}
