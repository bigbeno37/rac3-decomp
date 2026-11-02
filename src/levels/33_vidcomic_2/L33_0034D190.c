#include "common.h"

INCLUDE_ASM("asm/levels", func_L33_0034D190);

INCLUDE_ASM("asm/levels", func_L33_0034D838);

INCLUDE_ASM("asm/levels", func_L33_0034E8C0);

INCLUDE_ASM("asm/levels", func_L33_0034EA80);

INCLUDE_ASM("asm/levels", func_L33_0034EC28);

INCLUDE_ASM("asm/levels", func_L33_0034EE00);

INCLUDE_ASM("asm/levels", func_L33_0034F250);

INCLUDE_ASM("asm/levels", func_L33_0034F530);

/* localdecomp:start func_L33_0034F910 */
void func_L33_0034F998(void *);
void func_L33_00350378(void *);
void func_L33_00350470(void *);
void func_L33_003505D8(void *);

void func_L33_0034F910(void *arg0) {
    u8 temp_v1;

    temp_v1 = *(u8 *)((u8 *)arg0 + 0x20);
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_L33_00350378(arg0);
        break;
    case 1:
        func_L33_00350470(arg0);
        break;
    case 2:
        func_L33_003505D8(arg0);
        break;
    }
    func_L33_0034F998(arg0);
}
/* localdecomp:end func_L33_0034F910 */

INCLUDE_ASM("asm/levels", func_L33_0034F998);

/* localdecomp:start func_L33_0034F9D8 */
typedef struct {
    u8 pad[0x2C];
    f32 x, y;
    s32 a, b, c;
    f32 d, e, f;
} State_34F9D8;
typedef struct {
    u8 pad[0x68];
    State_34F9D8 *state;
} Object_34F9D8;
void func_L33_0034F9D8(Object_34F9D8 *self, f32 x, f32 y, s32 b, s32 a, s32 c, f32 d, f32 e, f32 f) {
    State_34F9D8 *state = self->state;
    state->x = x;
    state->y = y;
    state->a = a;
    state->b = b;
    state->c = c;
    state->d = d;
    state->e = e;
    state->f = f;
}
/* localdecomp:end func_L33_0034F9D8 */
