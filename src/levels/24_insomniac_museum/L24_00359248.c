#include "common.h"

INCLUDE_ASM("asm/levels", func_L24_00359248);

INCLUDE_ASM("asm/levels", func_L24_00359528);

INCLUDE_ASM("asm/levels", func_L24_00359650);

INCLUDE_ASM("asm/levels", func_L24_00359E30);

INCLUDE_ASM("asm/levels", func_L24_00359FE0);

INCLUDE_ASM("asm/levels", func_L24_0035A248);

INCLUDE_ASM("asm/levels", func_L24_0035A300);

/* localdecomp:start func_L24_0035A438 */
typedef struct {
    u8 pad[0x220];
    u16 value;
    u16 copy222;
    u16 copy224;
} State_L24_0035A438;
typedef struct {
    u8 pad[0x68];
    State_L24_0035A438 *state;
} Object_L24_0035A438;
void func_L24_0035A438(Object_L24_0035A438 *object) {
    State_L24_0035A438 *state = object->state;
    state->copy222 = state->value;
    state->copy224 = state->value;
}
/* localdecomp:end func_L24_0035A438 */
