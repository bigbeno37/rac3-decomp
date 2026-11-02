/* Retail-derived draft; never linked.
 * 3 diff: lui/load use v1 rather than v0; store is lui-relative instead of gp-relative.
 * Preserve simple Low scalar u32 |= 0x20 draft. High array view has 3 diff but unproven
 * object shape; canonical codegen and multiplayer fixed-gp constraint remain unresolved.
 * Low and High completed without an integrated match; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern u32 D_L01_001D4CEC;
void func_L01_00433098(void) {
    D_L01_001D4CEC |= 0x20;
}
