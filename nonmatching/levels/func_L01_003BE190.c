/* Retail-derived draft; never linked.
 * Low VM check: 3 diff; independently confirmed 12-byte .text plus 4-byte
 * .lit4/R_MIPS_LITERAL versus retail 20-byte inline constant-return body. Seven PAL bodies
 * audited; return 0.7f literal-pool blocker with existing flags. Low and High completed
 * without an integrated match; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"

f32 func_L01_003BE190(void) {
    return 0.7f;
}
