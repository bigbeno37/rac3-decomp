#include "common.h"

INCLUDE_ASM("asm/levels", func_L39_006CC0E8);

/* localdecomp:start func_L39_006CC108 */
typedef struct {
    u8 pad[0x2BC];
    f32 x;
    f32 y;
} S_6CC108;

void func_L39_006CC108(S_6CC108 *self, f32 x, f32 y) {
    self->x = x;
    self->y = y;
}
/* localdecomp:end func_L39_006CC108 */

LINKER_REMNANT("asm/levels", func_L39_006CC118);

INCLUDE_ASM("asm/levels", func_L39_006CC120);

INCLUDE_ASM("asm/levels", func_L39_006CC158);

INCLUDE_ASM("asm/levels", func_L39_006CC188);
