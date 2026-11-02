/* Retail-derived draft; never linked.
 * Low check.py: 1 diff; all 3 executable instructions match, missing trailing 0xCDCDCDCD
 * at 0x004CBF6C. High independently verified retail and saved object. Low and High stopped
 * without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is
 * retained.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern u8 D_L39_00465708[];

void *func_L39_004CBF60(void) {
    return D_L39_00465708;
}
