#include "common.h"

INCLUDE_ASM("asm/levels", func_L19_003C6708);

/* localdecomp:start func_L19_003C6F18 */
typedef struct {
    u8 pad[0x40];
    s32 field40;
    s16 field44;
    s16 field46;
} State_L19_003C6F18;
typedef struct {
    u8 pad[0x68];
    State_L19_003C6F18 *state;
} Object_L19_003C6F18;
void func_L19_003C6F18(Object_L19_003C6F18 *object) {
    State_L19_003C6F18 *state = object->state;
    state->field40 = 0;
    state->field44 = 0;
    state->field46 = 0;
}
/* localdecomp:end func_L19_003C6F18 */

INCLUDE_ASM("asm/levels", func_L19_003C6F30);

INCLUDE_ASM("asm/levels", func_L19_003C7058);

INCLUDE_ASM("asm/levels", func_L19_003C70C0);
