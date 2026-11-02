/* Retail-derived draft; never linked.
 * 9 raw differing words: frame size, saved s1/ra offsets, save/copy order; body and actual
 * resolved jal agree. Low and High completed without an integrated match; retain
 * INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct {
    u8 pad0[0x88];
    s32 values[16];
    s32 other[16];
    u8 pad108[0x80];
    s32 index;
    s32 field18C;
} State_005049D8;
extern State_005049D8 *func_L39_004BC8B0(void);
void func_L39_005049D8(s32 a, s32 b) {
    State_005049D8 *p = func_L39_004BC8B0();
    s32 index = p->index;
    if (index == 0) index = 15;
    p->values[index] = a;
    p->other[p->index] = b;
}
