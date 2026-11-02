/* Retail-derived draft; never linked.
 * Best retained Low draft: 5 literal stack-frame word differences; all 3 HIGH forms:
 * identical 14-diff output. Preserve the five-difference Low draft. The existing memset
 * return declaration conflict remains documented; no prototype change is justified merely
 * for allocation. Low and High stopped without an integrated match. Ordinary C remains
 * plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern void *func_L39_004BEED8(s32 size);
extern void *func_0011D534(void *dest, s32 value, s32 size);
void *func_L39_00505780(void) {
    s32 *p = func_L39_004BEED8(0x18);
    if (p != 0) {
        func_0011D534(p, 0, 0x18);
        p[5] = 1;
    } else {
        return 0;
    }
    return p;
}
