#include "common.h"

INCLUDE_ASM("asm/levels", func_L35_003BC4B8);

INCLUDE_ASM("asm/levels", func_L35_003BC828);

INCLUDE_ASM("asm/levels", func_L35_003BC958);

/* localdecomp:start func_L35_003BC9F0 */
typedef struct {
    u8 pad[0x60];
    s32 f60, f64, f68, f6C, f70, f74, f78, f7C, f80, f84;
} State_003BC9F0;
typedef struct {
    u8 pad[0x30];
    u8 f30;
    u8 pad31[0x37];
    State_003BC9F0 *state;
} Object_003BC9F0;
void func_L35_003BC9F0(Object_003BC9F0 *object)
{
    State_003BC9F0 *state = object->state;
    object->f30 = 0xFF;
    state->f60 = 0;
    state->f64 = 0;
    state->f68 = 0;
    state->f6C = 0;
    state->f70 = 0;
    state->f74 = 0;
    state->f78 = 0;
    state->f7C = 0;
    state->f80 = 0;
    state->f84 = 0;
}
/* localdecomp:end func_L35_003BC9F0 */

INCLUDE_ASM("asm/levels", func_L35_003BCA28);

INCLUDE_ASM("asm/levels", func_L35_003BCAB8);
