/* Retail-derived draft; never linked.
 * 4 differing words on PAL and US: compiler emits split lui v1 before s0/ra restores;
 * retail restores first, then adjacent lui at/sw pair. Destination is 0x0024D760 in PAL
 * and 0x0024D860 in US; a fixed PAL literal is not portable. Low and High stopped without
 * an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern s32 func_L01_00521C90(s32, s32);
extern s32 func_L39_006D7930(s32, s32);
extern s32 D_L39_0024D760[];
void func_L39_006D78B8(s32 arg0, s32 arg1) {
    D_L39_0024D760[0] = func_L39_006D7930(func_L01_00521C90(0x88, arg0), arg1);
}
