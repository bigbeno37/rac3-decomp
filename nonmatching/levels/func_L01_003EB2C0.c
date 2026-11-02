/* Retail-derived draft; never linked.
 * 6 positional diff; 28 bytes versus 24 retail: lui/addiu replaces GP-relative addiu. Low
 * and High stopped without a complete integrated match; ordinary C remains plausible and
 * INCLUDE_ASM is retained. The retained Low draft indexes from the existing scalar global
 * declaration; the true aggregate extent is unknown. It is a semantic reference only.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern s32 D_L01_001DF700;
void func_L01_003EB2C0(s32 index) {
    (&D_L01_001DF700)[index] = 1;
}
