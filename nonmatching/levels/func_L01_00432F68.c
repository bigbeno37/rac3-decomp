/* Retail-derived draft; never linked.
 * 2 address-register differences (lui v1 vs v0; lw base v1 vs v0), independently confirmed
 * at all 49 PAL placements. Retain Low plain unsized global view, not High diagnostic
 * section annotation. Actual 32-bit mode access supported by resident instructions, full
 * extent unproven. High scalar yields 5 diff; actual-section diagnostic returns to Low two
 * register differences across49PAL. Ordinary C unresolved; US applicable unchecked. Low
 * and High completed without an integrated match; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern s32 D_001D4CE8[];
s32 func_L01_00432F68(void) {
    return D_001D4CE8[0] == 3;
}
