#include "common.h"

typedef struct {
    f32 f0;
    f32 f4;
    f32 f8;
    f32 fC;
    f32 f10;
    f32 f14;
    f32 f18;
    f32 f1C;
    f32 f20;
    f32 f24;
} Vec_00349D18;
typedef struct {
    u8 pad[0x68];
    Vec_00349D18 *w68;
} Obj_00349D18;

extern f32 D_L31_001DD018;
extern float D_L31_001DD09C;
extern float D_L31_001DD0A0;
extern u8 D_L31_001D66B0[8];
extern void func_L30_0034CB68(s32, u8 *, s32, s32, s32, s32, float, float);

/* declared by functions of L31_0034B688.c, which this file was cut from */
extern float D_L31_001E12B4;

/* localdecomp:start func_L31_0034B850 */
#include "vu0.h"
typedef int u128_0034B850 __attribute__((mode(TI)));
typedef struct {
    s32 count;
} Curve_0034B850;
typedef struct {
    u8 pad0[0x80];
    s32 x80[18];
    s32 xC8;
} Vars_0034B850;
typedef struct {
    u8 pad0[0x68];
    Vars_0034B850 *vars;
} Moby_0034B850;

extern void *D_L31_0021D740[];
extern void func_L01_00445208(void *, void *, void *, void *, void *, f32);

void func_L31_0034B850(void *arg0, void *arg1, f32 t) {
    Moby_0034B850 *m = arg0;
    u128_0034B850 *out = arg1;
    Vars_0034B850 *v = m->vars;
    Curve_0034B850 *c = D_L31_0021D740[v->x80[v->xC8]];
    u128_0034B850 *q;
    u128_0034B850 p0 __attribute__((aligned(16)));
    u128_0034B850 p3 __attribute__((aligned(16)));
    s32 n;
    s32 i;
    f32 f;

    qzero(out);
    if (c == 0) {
        return;
    }
    q = (u128_0034B850 *)c;
    n = c->count;
    if (n <= 0) {
        return;
    }
    if (n == 1) {
        *out = q[1];
        return;
    }
    if (t > 1.0f) {
        t = 1.0f;
    } else if (t < 0.0f) {
        t = 0.0f;
    }
    i = t * (f32)(n - 1);
    if (i > n - 2) {
        *out = q[n];
        return;
    }
    if (i == 0) {
        vu0_q a, b, x;
        __asm__("lqc2 %0, %1" : "=j"(b) : "m"(*(vu0_v4 *)&q[2]));
        __asm__("lqc2 %0, %1" : "=j"(a) : "m"(*(vu0_v4 *)&q[1]));
        __asm__("vsub.xyz %0, %1, %2" : "=j"(a) : "j"(a), "j"(b));
        __asm__("sqc2 %1, %0" : "=m"(*(vu0_v4 *)&p0) : "j"(a));
        __asm__("lqc2 %0, %1" : "=j"(x) : "m"(*(vu0_v4 *)&p0));
        __asm__("lqc2 %0, %1" : "=j"(a) : "m"(*(vu0_v4 *)&q[1]));
        __asm__("vadd.xyz %0, %1, %2" : "=j"(x) : "j"(x), "j"(a));
        __asm__("sqc2 %1, %0" : "=m"(*(vu0_v4 *)&p0) : "j"(x));
    } else {
        p0 = q[i];
    }
    if (i == c->count - 2) {
        vec_sub_ba(&p3, &q[c->count], &q[c->count - 1]);
        vec_add_ab(&p3, &p3, &q[c->count]);
    } else {
        p3 = q[i + 3];
    }
    f = t * (f32)(c->count - 1);
    func_L01_00445208(out, &q[i + 1], &q[i + 2], &p0, &p3, f - cvtsw_asm(cvtws_asm(f)));
}
/* localdecomp:end func_L31_0034B850 */

INCLUDE_ASM("asm/levels", func_L31_0034BA10);
