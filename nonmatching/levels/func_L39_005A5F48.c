/* Retail-derived draft; never linked.
 * 5 diff: load/LUI scheduling and v0/v1/a0 allocation; raw comparison differs at word
 * indices 1,2,3,4,6 across all 15 PAL placements. Low and High completed without an
 * integrated match; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern u32 D_L39_002403FC[];
extern u32 D_001A4528[];
extern s32 D_001D4CEC;
void func_L39_005A5F48(void) {
    D_001D4CEC = D_L39_002403FC[0] | 0x800;
    D_001A4528[0] = 0;
}
