/* Retail-derived draft; never linked.
 * 5 diff: 36-byte body vs 40; sltiu writes a1 instead of v0, missing move a1,v0, branch
 * displacement and epilogue shifted. Low and High stopped without a complete integrated
 * match; ordinary C remains plausible and INCLUDE_ASM is retained.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"

s32 func_L04_00362EF0(u8 *arg0) {
    u8 result = 0;
    if (arg0[0x95] == 7) {
        result = arg0[0x20] == 0x1A;
    }
    return result;
}
