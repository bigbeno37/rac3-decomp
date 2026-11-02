/* Retail-derived draft; never linked.
 * Best probe 03: 12 diff, 56 vs 64 bytes; missing 16-byte frame and final-store scheduling
 * differs. Last probe 05: 17 diff, same aggregate stack stores as Low. Low and High
 * stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct { s32 f0, f4, f8; } S_00510EB0;
s32 func_L39_00510EB0(S_00510EB0 *a, S_00510EB0 *b) {
    s32 t0, t4, t8;
    t0 = a->f0;
    t4 = a->f4;
    t8 = a->f8;
    a->f8 = b->f8;
    a->f0 = b->f0;
    a->f4 = b->f4;
    b->f4 = t4;
    b->f8 = t8;
    b->f0 = t0;
    return 0;
}
