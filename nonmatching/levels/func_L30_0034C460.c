/* Retail-derived draft; never linked.
 * 10 diff; 40-byte body vs retail 48. movz coalescing replaces retail copies and movn;
 * remaining registers and scheduling differ. Low and High stopped without an integrated
 * match. Ordinary C remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
void func_L30_0034C460(void *obj, s32 a, s32 b, s32 c, s32 d) {
    s32 limit = -1;
    *(s32 *)((u8 *)obj + 0x40) = a;
    *(s32 *)((u8 *)obj + 0x44) = limit < b ? b : a;
    *(s32 *)((u8 *)obj + 0x48) = limit < b ? c : a;
    *(s32 *)((u8 *)obj + 0x4C) = limit < b ? d : a;
}
