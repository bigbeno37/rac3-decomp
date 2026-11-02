/* Retail-derived semantic draft; never linked.
 * Low and High retain an absolute load instead of the GP-relative load under existing Ps2EeAs flags (four differences).
 * See docs/matching-campaign.md. Existing file flags were preserved.
 */
#include "common.h"

extern s32 D_L01_001D7DB8;

s32 func_L01_0045A520(void)
{
    return D_L01_001D7DB8 > 0;
}
