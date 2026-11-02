/* Retail-derived draft; never linked.
 * 4 positional diffs; 32-byte candidate uses HI16/LO16 address pair instead of retail
 * 28-byte GP-relative body. Preserve simple Low four-byte scalar slot draft. High
 * function-pointer typing remains canonical-only; multiplayer initialization is not
 * independently established. @ps2as late extern sizing still produces an absolute address
 * pair instead of GP. Low and High completed without an integrated match; retain
 * INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern u32 D_L01_001DCE18;
void *func_L01_0032ADC0(void *a0, s32 a1, s32 *a2) {
    if (a1 == 0) {
        *a2 = 4;
        return &D_L01_001DCE18;
    } else {
        return 0;
    }
}
