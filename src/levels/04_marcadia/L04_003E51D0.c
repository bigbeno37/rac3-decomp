#include "common.h"

INCLUDE_ASM("asm/levels", func_L04_003E51D0);

INCLUDE_ASM("asm/levels", func_L04_003E5250);

INCLUDE_ASM("asm/levels", func_L04_003E5788);

INCLUDE_ASM("asm/levels", func_L04_003E5898);

INCLUDE_ASM("asm/levels", func_L04_003E5940);

INCLUDE_ASM("asm/levels", func_L04_003E5D88);

INCLUDE_ASM("asm/levels", func_L04_003E5E78);

/* localdecomp:start func_L04_003E5FB8 */
typedef struct { u8 pad[0x78]; f32 value; } State_3E5FB8;
typedef struct { u8 pad[0x68]; State_3E5FB8 *state; u8 pad6C[0x84]; f32 angle; } Object_3E5FB8;
extern f32 func_0038DB00(f32, f32);
extern f32 func_0038DAB8(f32, f32);
extern f32 D_L04_001DF294;
extern f32 D_L04_001DF298;
void func_L04_003E5FB8(Object_3E5FB8 *self, f32 angle) {
    State_3E5FB8 *state = self->state;
    f32 delta = func_0038DB00(angle, self->angle);
    state->value += delta * D_L04_001DF294 + state->value * D_L04_001DF298;
    self->angle = func_0038DAB8(self->angle, state->value);
}
/* localdecomp:end func_L04_003E5FB8 */
