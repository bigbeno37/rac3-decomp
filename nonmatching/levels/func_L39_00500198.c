/* Retail-derived draft; never linked.
 * 5 raw words at 0x0, 0xC, 0x3C, 0x44, 0x4C: frame size, ra slot, restore order and frame
 * release; all body words equal. Low and High stopped without an integrated match.
 * Ordinary C remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern u32 func_0011C000(void *, u32, u32, s32);
s32 func_L39_00500198(void *arg0, void *arg1, s32 arg2) {
    s32 result = 0;
    if (*(s32 *)((u8 *)arg0 + 0xC) && arg1) {
        u32 count = func_0011C000(arg1, arg2, 1, *(s32 *)((u8 *)arg0 + 0x20));
        if (count != 0)
            result = arg2;
    }
    return result;
}
