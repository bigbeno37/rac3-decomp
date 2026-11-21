#include "common.h"


/* localdecomp:start func_L01_0032FBA0 */
extern s32 func_0038CAD0(u8 *);
extern void func_L01_0032FF68(void *);

void func_L01_0032FBA0(u8 *a) {
    if (((s32 (*)(s32))func_0038CAD0)(*(s32 *)(a + 104) + 68) == 0) {
        func_L01_0032FF68(a);
    }
}
/* localdecomp:end func_L01_0032FBA0 */

/* localdecomp:start func_L01_0032FBE0 */
void func_L01_0032FBE0(char *p)
{
    *(long *)(p + 112) = 0L;
    *(int *)(p + 80) = 0;
    *(int *)(p + 84) = 0;
    *(float *)(p + 88) = 1.0f;
    *(int *)(p + 92) = 0;
    *(int *)(p + 96) = 0;
    *(float *)(p + 100) = 1.0f;
    *(float *)(p + 104) = 1.0f;
    *(float *)(p + 108) = 1.0f;
    *(float *)(p + 8) = -2.0f;
    *(float *)(p + 24) = 2.0f;
    *(float *)(p + 40) = -2.0f;
    *(float *)(p + 56) = 2.0f;
    *(float *)(p + 4) = -2.0f;
    *(float *)(p + 36) = 2.0f;
    *(int *)(p + 0) = 0;
    *(int *)(p + 16) = 0;
    *(int *)(p + 32) = 0;
    *(int *)(p + 48) = 0;
    *(float *)(p + 12) = 1.0f;
    *(float *)(p + 28) = 1.0f;
    *(float *)(p + 44) = 1.0f;
    *(long *)(p + 128) = 0x0000FF9000000260L;
    *(float *)(p + 20) = -2.0f;
    *(float *)(p + 52) = 2.0f;
    *(float *)(p + 60) = 1.0f;
}
/* localdecomp:end func_L01_0032FBE0 */

INCLUDE_ASM("asm/levels", func_L01_0032FC70);

INCLUDE_ASM("asm/levels", func_L01_0032FF68);

/* localdecomp:start func_L01_00330390 */
void func_L01_00330390(void *arg0) {
    if ((u8) (*(u8 *)((u8 *)arg0 + 0x20)) < 8U) {
        *(u8 *)((u8 *)arg0 + 0x20) = 8U;
    }
}
/* localdecomp:end func_L01_00330390 */

LINKER_REMNANT("asm/levels", func_L01_003303B0);

INCLUDE_ASM("asm/levels", func_L01_003303B8);

INCLUDE_ASM("asm/levels", func_L01_00330820);

INCLUDE_ASM("asm/levels", func_L01_00331230);

/* localdecomp:start func_L01_00331D28 */
typedef struct { f32 x, y, z, w; } __attribute__((aligned(16))) V4_00331D28;
typedef struct {
    V4_00331D28 v;
    void *owner;
    s32 flags;
    u8 f18;
    u8 f19;
    u16 f1A;
    f32 f1C;
    s32 one;
} S_00331D28;
typedef struct {
    u8 pad_0[0x64];
    s32 f64;
    f32 f68;
} P_00331D28;
typedef struct {
    u8 pad_0[0x10];
    V4_00331D28 pos;
    u8 pad_20[0x68 - 0x20];
    P_00331D28 *vars;
    u8 pad_6C[0xAA - 0x6C];
    u16 oclass;
} M_00331D28;
extern V4_00331D28 D_L01_001D66B0 __attribute__((section(".sdata")));
extern void func_0038CF68(void *, void *, f32);
extern void func_003D4D00(void *, s32, s32, S_00331D28 *, f32);

void func_L01_00331D28(M_00331D28 *m, f32 f) {
    P_00331D28 *v = m->vars;
    S_00331D28 s;
    u8 mode;

    s.owner = m;
    s.flags = v->f64;
    s.f1C = f;
    s.one = 1;
    s.v = D_L01_001D66B0;
    func_0038CF68(&s, &s, 1.0f);
    s.v.w = 5627.925f;
    mode = 2;
    s.f18 = 3;
    s.f19 = mode;
    s.f1A = m->oclass;
    func_003D4D00(&m->pos, 0, 0, &s, v->f68);
}
/* localdecomp:end func_L01_00331D28 */

INCLUDE_ASM("asm/levels", func_L01_00331DD0);

INCLUDE_ASM("asm/levels", func_L01_00332160);
