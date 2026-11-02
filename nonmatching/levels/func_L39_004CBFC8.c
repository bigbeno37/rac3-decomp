/* Retail-derived draft; never linked.
 * Best: 8/20 raw words, frame size, save offsets and restore order; final exploratory
 * probe: 19 diff. Low and High stopped without an integrated match. Ordinary C remains
 * plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern s32 func_L39_004C4F30(long mask);
extern s32 func_L39_004E0F28(s32 *arg0, s32 *arg1);
s32 func_L39_004CBFC8(s32 *arg0, s32 *arg1) {
    s32 result;
    if (func_L39_004C4F30(2)) {
        result = func_L39_004E0F28(arg0, arg1);
    } else {
        result = 0;
    }
    return result;
}
