/* Retail-derived draft; never linked.
 * 7 prologue scheduling/register differences; remaining 11 instructions agree. Low and
 * High stopped without an integrated match. Ordinary C remains plausible; retain
 * INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern s32 D_001D545C[];
extern u32 D_00142C34[];
extern void func_003C2880(s32 p);

void func_L08_003BAB88(s32 p) {
    if (D_001D545C[0] == 8) {
        if (D_00142C34[0] & 0x200000) {
            func_003C2880(p);
        }
    }
}
