/* Retail-derived draft; never linked.
 * 5 diff; generated frame 0x10 vs retail 0x20, ra slot 8 vs 0x10, and reversed restore
 * order; body agrees. Low and High stopped without an integrated match. Ordinary C remains
 * plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern void func_0011D534(s32, s32, s32);
void func_L39_004CC440(s32 *arg0) {
    if (arg0 != 0 && arg0[0] > 0) {
        func_0011D534(arg0[1], 0, arg0[0] * 4);
        arg0[0] = 0;
    }
}
