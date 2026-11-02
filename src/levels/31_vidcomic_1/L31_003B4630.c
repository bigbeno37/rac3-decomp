#include "common.h"

INCLUDE_ASM("asm/levels", func_L31_003B4630);

/* localdecomp:start func_L31_003B46C8 */
typedef struct {
    u8 pad00[0x10];
    s32 field10;
    u8 pad14[4];
    s32 field18;
} State_3B46C8;

typedef struct {
    u8 pad00[0x30];
    u8 field30;
    u8 pad31[0x37];
    State_3B46C8 *state;
} Object_3B46C8;

void func_L31_003B46C8(Object_3B46C8 *object) {
    State_3B46C8 *state = object->state;
    object->field30 = 0xFF;
    state->field18 = 0;
    state->field10 = 0;
}
/* localdecomp:end func_L31_003B46C8 */

INCLUDE_ASM("asm/levels", func_L31_003B46E0);

INCLUDE_ASM("asm/levels", func_L31_003B4768);
