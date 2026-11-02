#include "common.h"

/* localdecomp:start func_L39_006CC0E8 */
typedef struct {
    u8 pad[0x2A8];
    s32 a, b, c, d;
    u8 e, f, g;
} S_6CC0E8;

void func_L39_006CC0E8(S_6CC0E8 *self, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g) {
    self->a = a;
    self->b = b;
    self->c = c;
    self->d = d;
    self->e = e;
    self->f = f;
    self->g = g;
}
/* localdecomp:end func_L39_006CC0E8 */

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
