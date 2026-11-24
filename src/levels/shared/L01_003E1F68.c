#include "common.h"

/* localdecomp:start func_L01_003E1F68 */
extern f32 D_L01_001DF590_003E1F68;
__asm__(".extern D_L01_001DF590_003E1F68, 4");
extern f32 D_L01_001DF594_003E1F68;
__asm__(".extern D_L01_001DF594_003E1F68, 4");
extern f32 D_L01_001DF598_003E1F68;
__asm__(".extern D_L01_001DF598_003E1F68, 4");
extern f32 D_L01_001DF59C_003E1F68;
__asm__(".extern D_L01_001DF59C_003E1F68, 4");
extern f32 D_L01_001DF5A0_003E1F68;
__asm__(".extern D_L01_001DF5A0_003E1F68, 4");
typedef struct M_003E1F68 {
    u8 p0[0x20];
    u8 state;
    u8 p21[2];
    u8 alpha;
    u8 p24[0x31 - 0x24];
    u8 x31;
    u8 p32[2];
    u16 flags;
    u8 p36[0x68 - 0x36];
    struct V_003E1F68 *vars;
    u8 p6C[0xB8 - 0x6C];
    struct M_003E1F68 *parent;
} M_003E1F68;
typedef struct V_003E1F68 {
    u8 p0[8];
    f32 t;
    s32 count;
    u8 p10[0x10];
    M_003E1F68 *children[4];
} V_003E1F68;
extern void func_L01_003E2418_003E1F68(M_003E1F68 *, V_003E1F68 *);
extern void func_L01_003E2BD8(u8 *, u8 *);
extern void func_L01_004450F0_003E1F68(M_003E1F68 *, s32, s32);
extern void func_L01_003E2DB8(u8 *);
extern void func_L01_004048D0(void (*)(u8 *), u8 *);
extern void func_003C2880_003E1F68(M_003E1F68 *);
void func_L01_003E1F68(M_003E1F68 *m)
{
    V_003E1F68 *v = m->vars;
    s32 i, alpha;
    switch (m->state) {
    case 1:
        v->t += D_L01_001DF590_003E1F68;
        if (v->t >= 1.0f) {
            v->t = 0.0f;
            func_L01_004450F0_003E1F68(m, 2, -1);
        } else {
            func_L01_003E2418_003E1F68(m, v);
            func_L01_004048D0(func_L01_003E2DB8, (u8 *)m);
            break;
        }
    case 2:
        v->t += D_L01_001DF594_003E1F68;
        if (v->t >= 1.0f) {
            m->parent->alpha = 128;
            for (i = 0; i < v->count; i++) {
                v->children[i]->alpha = 128;
            }
            v->t = 0.0f;
            func_L01_004450F0_003E1F68(m, 3, -1);
        } else {
            func_L01_003E2BD8((u8 *)m, (u8 *)v);
            if (v->t <= D_L01_001DF59C_003E1F68) alpha = 0;
            else if (v->t >= D_L01_001DF5A0_003E1F68) alpha = 128;
            else alpha = (v->t - D_L01_001DF59C_003E1F68) / (D_L01_001DF5A0_003E1F68 - D_L01_001DF59C_003E1F68) * 128.0f;
            if (alpha >= 2) {
                m->parent->flags &= ~1;
                m->parent->x31 = 1;
                m->parent->alpha = alpha;
                for (i = 0; i < v->count; i++) {
                    v->children[i]->flags &= ~1;
                    v->children[i]->x31 = 1;
                    v->children[i]->alpha = alpha;
                }
            }
            func_L01_004048D0(func_L01_003E2DB8, (u8 *)m);
            break;
        }
    case 3:
        v->t += D_L01_001DF598_003E1F68;
        if (v->t >= 1.0f) func_003C2880_003E1F68(m);
        else func_L01_003E2BD8((u8 *)m, (u8 *)v);
        break;
    }
}
/* localdecomp:end func_L01_003E1F68 */
