/* Retail-derived draft; never linked.
 * 9 instruction differences; 64-byte draft retains both tests but two return sequences
 * instead of retail common exit. Low and High stopped without an integrated match.
 * Ordinary C remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct {
    u8 pad0[0x20];
    u8 state;
    u8 pad21[0x95 - 0x21];
    u8 kind;
} S_L04_00361DB8;
s32 func_L04_00361DB8(S_L04_00361DB8 *p) {
    s32 result;
    if ((u32)(p->state - 0x12) < 7) result = 0;
    else {
        if (p->kind == 5 || p->kind == 8 || p->kind == 7) return 0;
        result = 0;
    }
    return result;
}
