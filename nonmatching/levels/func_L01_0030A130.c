/* Retail-derived semantic draft; never linked.
 * Low and High retain an absolute load instead of the GP-relative load (five differences); moving the extern into the block did not help.
 * See docs/matching-campaign.md. Existing file flags were preserved.
 */
#include "common.h"
extern s32 D_L01_001DC630;

s32 func_L01_0030A130(void) {
    return D_L01_001DC630 == 2;
}
