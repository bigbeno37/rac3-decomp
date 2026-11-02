/* Retail-derived draft; never linked.
 * 13 of 22 words differ only in register allocation. The High draft preserves the
 * established unsized s32 global declaration. Low and High remain unresolved; retain
 * INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct { u8 bytes[32]; } Copy32_006DA628;
typedef struct { u8 before_C0[0xC0]; u8 flag; u8 before_C4[3]; Copy32_006DA628 value; } State_006DA628;
typedef struct { u8 before_4C[0x4C]; State_006DA628 *state; } Root_006DA628;
extern s32 D_L39_0024D760[];
void func_L39_006DA628(Copy32_006DA628 *value) {
    State_006DA628 *state = ((Root_006DA628 *)D_L39_0024D760[0])->state;
    state->flag = 0;
    state->value = *value;
}
