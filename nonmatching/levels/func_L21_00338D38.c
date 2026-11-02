/* Retail-derived draft; never linked.
 * 5 differing lines; sltiu targets v1 instead of v0 and retail move v1,v0 is missing; 36
 * versus 40 bytes. Low and High stopped without a complete integrated match; ordinary C
 * remains plausible and INCLUDE_ASM is retained.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern u8 *D_L21_001A73E8[];
s32 func_L21_00338D38(void) {
    u8 result = 0;
    if (D_L21_001A73E8[0] != 0) {
        result = (u32)(*(u16 *)(D_L21_001A73E8[0] + 0xAA) - 0x1C6B) < 3;
    }
    return result;
}
