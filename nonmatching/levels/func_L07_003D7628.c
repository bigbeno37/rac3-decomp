/* Retail-derived draft; never linked.
 * 11 diff; text 72 vs retail 88 bytes, plus 8-byte .lit4; text identical to Low. Preserve
 * all four callee arguments: the incoming angle in f13 is consumed transitively. The Low
 * note claiming it is overwritten was incorrect. Low and High stopped without an
 * integrated match. Ordinary C remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern void func_L07_003D7680(void *object, s32 count, f32 radius, f32 angle);

static __inline__ void draw_ring(void *object, s32 count, f32 radius, f32 angle)
{
    func_L07_003D7680(object, count, radius, angle);
}

void func_L07_003D7628(void *object)
{
    draw_ring(object, 8, 2.5f, 0.0f);
    draw_ring(object, 6, 1.2f, 0.5235987901687622f);
}
