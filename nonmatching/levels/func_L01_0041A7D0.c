/* Retail-derived draft; never linked.
 * 6. Six differences remain in mask/counter registers and setup order. The draft relies on
 * existing owning-file declarations for D_001A7E18 and T_00417F60. Low and High stopped
 * without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"

void func_L01_0041A7D0(void) {
    s32 i;
    u32 address = (u32)D_001A7E18;
    u32 *p = (u32 *)(address + 8);
    for (i = 355; i >= 0; i--, p += 3) {
        *p &= 0x7FFFFFFF;
    }
}
