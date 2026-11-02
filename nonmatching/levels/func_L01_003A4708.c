/* Retail-derived draft; never linked.
 * Low's retained unchanged-flags probe: 3 diff; .text 12 bytes plus .lit4 4 bytes versus
 * retail inline 20-byte float return. Independently confirmed object relocation and all
 * ten retail bodies. Ten PAL bodies audited; ordinary return 0.7f remains blocked by
 * literal-pool codegen with existing flags. Low and High completed without an integrated
 * match; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
f32 func_L01_003A4708(void) {
    return 0.7f;
}
