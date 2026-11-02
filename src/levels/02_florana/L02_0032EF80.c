#include "common.h"

INCLUDE_ASM("asm/levels", func_L02_0032EF80);

/* localdecomp:start func_L02_0032F1C8 */
typedef struct {
    u8 pad0[0x20];
    u8 active;
    u8 pad21[0xF];
    u8 value;
    u8 pad31[0x37];
    s32 *state;
} S_0032F1C8;
void func_L02_0032F1C8(S_0032F1C8 *self) {
    if (!self->active) {
        self->state[1] = -1;
        self->value = 0xFF;
        self->active = 1;
    }
}
/* localdecomp:end func_L02_0032F1C8 */
