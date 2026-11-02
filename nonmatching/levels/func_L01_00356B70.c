/* Retail-derived draft; never linked.
 * 3 diff; 12-byte literal-pool lwc1/jr/nop versus 20-byte inline lui/ori/mtc1/jr/nop; raw
 * .text identical to Low; .lit4 storage remains. Preserve simplest 0.45f return draft;
 * High natural fraction emits identical 12-byte text with .lit4 versus retail 20. Ordinary
 * C unresolved under existing flags; one High compile, US applicable unchecked. Low and
 * High completed without an integrated match; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"

f32 func_L01_00356B70(void) {
    return 0.45f;
}
