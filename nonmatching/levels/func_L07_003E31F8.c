/* Retail-derived draft; never linked.
 * 9 diff: named float scale still emits 32-byte body plus .lit4; union alternative emits
 * 44-byte body, 10 diff ($v0 constant, mtc1 hazard nop and schedule/register differences).
 * Low and High stopped without a complete integrated match; ordinary C remains plausible
 * and INCLUDE_ASM is retained.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"

typedef struct {
    u8 pad[0xF0];
    f32 x;
    f32 y;
} S_L07_003E31F8;

void func_L07_003E31F8(S_L07_003E31F8 *p) {
    p->x *= 0.9640000462532043f;
    p->y *= 0.9640000462532043f;
}
