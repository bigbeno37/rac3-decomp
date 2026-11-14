#include "common.h"

INCLUDE_ASM("asm/levels", func_L40_00423528);

/* localdecomp:start func_L40_00423BD8 */
#include "vu0.h"

typedef struct G_00423BD8 {
    u8 pad0[0x18];
    s32 w18;
    u8 pad1C[0x20 - 0x1C];
    vu0_q q20;
} G_00423BD8;

extern G_00423BD8 D_L40_0025B980;
extern s32 func_L40_00422550(u8 *);
extern void func_0038CF68(void *, void *, f32);
extern s32 func_003D3CB0(void *, void *, s32, s32, s32);
extern s32 func_L40_00422AE8(s32);

void func_L40_00423BD8(u8 *a0) {
    u8 *v = *(u8 **)(a0 + 0x68);
    vu0_v4 a;
    vu0_v4 b;

    if (func_L40_00422550(a0) == 0) {
        func_0038CF68(&a, a0 + 0xE0, 0.5f);
        vec_add_ba(&a, &a, a0 + 0x10);
        func_0038CF68(&b, a0 + 0xE0, -20.0f);
        vec_add_ab(&b, &b, a0 + 0x10);
        if (func_003D3CB0(&a, &b, 0x22, 0, 0) != 0 && D_L40_0025B980.w18 == 0) {
            *(vu0_q *)(a0 + 0x10) = D_L40_0025B980.q20;
        }
    }
    *(s32 *)(v + 0x7C) = func_L40_00422AE8(*(s16 *)(a0 + 0xAA));
}
/* localdecomp:end func_L40_00423BD8 */
