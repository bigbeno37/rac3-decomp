#include "common.h"
#include "vu0.h"


/* localdecomp:start func_L01_0032F800 */
typedef int s128_0032F800 __attribute__((mode(TI)));
typedef struct {
    u8 pad0[0x48];
    s32 w48;
} S_32F800m;
typedef struct {
    u8 pad0[0x68];
    S_32F800m *p68;
} S_32F800;
extern u8 *func_L01_004C80D0(s32 a0);
extern void func_0038CE90(void *, void *, void *);
extern void func_0038CF68(void *, void *, f32);
extern void func_0038D000(void *, void *, void *);
extern void func_003C47E8(void *, void *);
extern void func_003C2F58(void *, s32, void *);

void func_L01_0032F800(S_32F800 *a0, s128_0032F800 *a1) {
    struct { s128_0032F800 a, b, c, d, e, f, g; } L;
    u8 *r;

    r = func_L01_004C80D0(a0->p68->w48);
    L.a = L.d = *a1;
    L.e = 0;
    ((f32 *)&L.e)[2] = 1.0f;
    func_0038CE90(&L.b, &L.a, &L.e);
    func_0038CF68(&L.b, &L.b, 1.0f);
    func_0038CE90(&L.c, &L.b, &L.a);
    func_003C47E8(r + 0x10, &L.a);
    func_003C2F58(a0, 0, &L.f);
    func_0038D000(&L.d, a1, (u8 *)a0 + 0xC0);
    vec_add_ab(&L.g, &L.d, &L.f);
}
/* localdecomp:end func_L01_0032F800 */

/* localdecomp:start func_L01_0032F8E8 */
typedef int s128_0032F8E8 __attribute__((mode(TI)));
typedef union { s128_0032F8E8 q; f32 f[4]; } Q_0032F8E8;
typedef struct {
    s128_0032F8E8 vel;
    Q_0032F8E8 q10;
    s128_0032F8E8 q20;
    s128_0032F8E8 q30;
    s32 w40;
    s32 w44;
    s32 w48;
    s16 h4C;
    s8 b4E;
    s8 b4F;
    s32 w50;
    u8 pad54[4];
    f32 f58;
    u8 pad5C[4];
    s32 w60;
    s32 w64;
    u8 *owner;
    u8 pad6C[4];
    s32 w70;
    u8 pad74[0x1E];
    s16 h92;
} V_0032F8E8;
extern u8 *D_001A71A0[];
extern s32 D_L01_001DCEC8;
__asm__(".extern D_L01_001DCEC8, 4");
extern u8 *func_003C24B0(s32, s32);
extern void func_0038D308(void *, void *);
extern void func_L01_004C7D98(void *, void *);
extern f32 func_0038CE68(void *, void *);
extern f32 func_0038D0B0(f32);
extern void func_0038CE20(void *, void *, f32);
extern f32 func_0038D098(f32);
extern void func_0038D810(void *, void *);
extern void func_0038D5F0(void *, void *, void *);
extern s32 func_L01_004C80F8(void *, s32);
extern void func_003C2880(void *);
extern s32 func_L01_004C85C8(void *, s32, f32, f32, f32);
extern void func_003C7C38(void *);

u8 *func_L01_0032F8E8(u8 *owner, s128_0032F8E8 *pos, s128_0032F8E8 *vel) {
    f32 tmp[4];
    f32 a[4];
    f32 c[4];
    f32 b[4];
    f32 d[12];
    s32 cnt;
    f32 h;
    V_0032F8E8 *v;
    u8 *p;
    u8 *m = func_003C24B0(0x1367, 0xC0);
    if (m != 0) {
        m[0x30] = *(s16 *)(m + 0x32) = 0xFF;
        *(u16 *)(m + 0x34) |= 0x100;
        m[0x20] = 0;
        p = m + 0x10;
        v = *(V_0032F8E8 **)(m + 0x68);
        *(s128_0032F8E8 *)(m + 0x10) = *pos;
        v->vel = *vel;
        func_0038D308(m + 0xC0, D_001A71A0[0] + 0xF0);
        func_L01_004C7D98(p, tmp);
        func_0038CF68(a, m + 0xE0, 1.0f);
        func_0038CE90(b, a, tmp);
        h = func_0038CE68(a, tmp) * 0.5f;
        func_0038CE20(c, b, func_0038D0B0(h));
        c[3] = func_0038D098(h);
        func_0038D810(c, d);
        func_0038D5F0(m + 0xC0, d, m + 0xC0);
        cnt = (D_L01_001DCEC8 * 5 + 2) / 6;
        qzero(&v->q10);
        v->q10.f[0] = 1.0f;
        v->owner = owner;
        v->w60 = 0xD;
        v->h4C = 1;
        v->w64 = 0;
        v->w50 = 0;
        v->w44 = 0;
        v->h92 = 0;
        v->q30 = v->q10.q;
        v->q20 = v->q10.q;
        v->f58 = 0.031415928f;
        v->w40 = cnt;
        v->w48 = func_L01_004C80F8(m, 0);
        if (v->w48 == -1) {
            func_003C2880(m);
            return 0;
        }
        v->b4F = func_L01_004C85C8(m, 0, 1.0f, 1.0f, 1.0f);
        v->b4E = -1;
        v->w70 = 0;
        func_003C7C38(m);
    }
    return m;
}
/* localdecomp:end func_L01_0032F8E8 */

/* localdecomp:start func_L01_0032FB18 */
extern s32 D_L01_00278990[];

void func_L01_0032FB18(void)
{
    int i;
    D_L01_00278990[138] = 5;
    D_L01_00278990[137] = 0;
    D_L01_00278990[136] = 0;
    for (i = 0; i < 64; ++i) {
        D_L01_00278990[i] = 0;
        D_L01_00278990[i + 64] = 0;
    }
    for (i = 7; i >= 0; --i)
        D_L01_00278990[i + 128] = 0;
}
/* localdecomp:end func_L01_0032FB18 */
