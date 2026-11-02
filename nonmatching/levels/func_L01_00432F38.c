/* Retail-derived draft; never linked.
 * Inherited isolated PAL/US MATCH only; current-gp all-placement audit: PAL 34 pass/15
 * fail, US 34 pass/17 fail, all failures +0x10 same-symbol HI/LO vs GPREL contradiction.
 * Do not integrate despite canonical isolated matches. Fixed-gp direct audit passes 34
 * story placements per version but fails all 15 PAL/17 US multiplayer placements at +0x10.
 * Retain INCLUDE_ASM. Low and High completed without an integrated match; retain
 * INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern s32 D_L01_001D4CEC;
void func_L01_00432F38(void) {
    D_L01_001D4CEC |= 0x2000;
}
