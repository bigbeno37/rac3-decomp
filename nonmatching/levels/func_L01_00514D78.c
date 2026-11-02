/* Retail-derived draft; never linked.
 * 6 literal words in HIGH probes01-03 (identical objects); LOW best remains 4 words.
 * Preserve the simpler Low draft with four differences; High has six. Neither tier
 * matched. Low and High stopped without an integrated match. Ordinary C remains plausible;
 * retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern s32 func_003EDAF8(void *, s32);
s32 func_L01_00514D78(s32 *self, u32 index, u8 *out) {
    s32 p;
    if (index >= 35) return 0;
    self = (s32 *)*self;
    index *= 4;
    p = *(s32 *)(index + (s32)self + 0x50);
    if (!p) return 0;
    *out = func_003EDAF8((void *)p, 1);
    return 1;
}
