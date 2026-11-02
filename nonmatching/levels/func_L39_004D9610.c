/* Retail-derived draft; never linked.
 * 7 positional differences; 68 vs 64 bytes; xor/select v0/v1 allocation and extra epilogue
 * move. Final probe08 confirms restored probe01. Low and High stopped without an
 * integrated match. Ordinary C remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern s32 func_L39_004B5748(s32 arg0, s32 arg1);
s32 func_L39_004D9610(s32 arg0, s32 expected, s32 arg2) {
    s32 result = func_L39_004B5748(arg0, arg2);
    s32 value = result;
    if (value < 0) goto done;
    result = -106;
    if (expected == value) result = value;
done:
    return result;
}
