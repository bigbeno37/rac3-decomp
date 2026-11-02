/* Retail-derived draft; never linked.
 * 2 instruction differences at +0x20/+0x24: second global address uses v1 instead of
 * retail v0. Low and High stopped without an integrated match. Ordinary C remains
 * plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern u8 *D_L39_00241640[];
extern s32 D_L39_002412DC[];
s32 func_L39_006772B8(s32 a0, s32 a1) {
    s32 result = 0;
    u8 *p = D_L39_00241640[0];
    u32 state;
    if (p && *(s32 *)(p + 0x180) == 2) goto yes;
    state = D_L39_002412DC[0];
    state -= 46;
    if (state >= 4) goto done;
yes:
    result = 1;
done:
    return result;
}
