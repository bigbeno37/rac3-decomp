/* Retail-derived draft; never linked.
 * Last probe: 14 diff with scalar global / gp load; best retained: 4 instruction-order
 * differences (initial lui/stack adjustment and argument copy/ra save swapped). Preserved
 * four-difference draft uses an array declaration; the existing scalar declaration gives
 * fourteen differences. Field offset 0x1FCA8 agrees across all 49 PAL placements. Low and
 * High stopped without an integrated match. Ordinary C remains plausible; retain
 * INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"

extern char *D_L01_001D67C8[];
extern void func_003AC638(s32, s32, s32, f32, f32, f32, f32);

void func_L01_00436020(s32 a0, s32 a1, f32 f0, f32 f1, f32 f2, f32 f3) {
    char *p = D_L01_001D67C8[0];
    if (p != 0) {
        func_003AC638((s32)(p + 0x1FCA8), a0, a1, f0, f1, f2, f3);
    }
}
