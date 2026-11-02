/* Retail-derived draft; never linked.
 * 5 differing instructions; High best 5, Low best 4 (low/compile-02.log). Low and High
 * stopped without a complete integrated match; ordinary C remains plausible and
 * INCLUDE_ASM is retained. The retained Low draft is closer than High; an existing caller
 * declares void(s32), so the byte-swap return prototype also needs integration review.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
u32 func_L39_00518A60(u32 value) {
    return ((value >> 8) & 0xFF) | ((value << 8) & 0xFF00);
}
