#include "common.h"

INCLUDE_ASM("asm/levels", func_L32_003C3E50);

/* localdecomp:start func_L32_003C3EE8 */
typedef struct {
    u8 pad[0x20];
    s32 f20, f24, f28, f2C, f30, f34;
} State_L32_003C3EE8;
typedef struct {
    u8 pad0[0x30];
    u8 f30;
    u8 pad31[0x37];
    State_L32_003C3EE8 *f68;
} Object_L32_003C3EE8;
void func_L32_003C3EE8(Object_L32_003C3EE8 *obj) {
    State_L32_003C3EE8 *state = obj->f68;
    obj->f30 = 0xFF;
    state->f20 = 0;
    state->f24 = 0;
    state->f28 = 0;
    state->f2C = 0;
    state->f30 = 0;
    state->f34 = 0;
}
/* localdecomp:end func_L32_003C3EE8 */

INCLUDE_ASM("asm/levels", func_L32_003C3F10);

INCLUDE_ASM("asm/levels", func_L32_003C3F98);

INCLUDE_ASM("asm/levels", func_L32_003C4000);
