#include "common.h"
#include "vu0.h"

/* declared by functions of L31_00347868.c, which this file was cut from */
extern void func_L31_00347938(void *, void *, s32, vu0_v4 *, f32, f32, f32, f32, f32, f32, f32, s32);

/* localdecomp:start func_L31_00347938 */
extern f32 func_0038CE68(void *, void *);
extern void func_0038CE20(void *, void *, f32);
extern f32 func_0038CEA8(void *);
extern void func_0038CF68(void *, void *, f32);
extern f32 func_0038CF00(void *, void *);
extern s32 func_L01_003FB640(void *, s32, u8 *, f32);
extern s32 func_L30_003445B8(u8 *);
extern s32 func_L30_00343830(u8 *, void *, void *, f32);
extern s32 func_L31_00346838(void *, void *, vu0_v4 *, s32, f32, f32);
extern u8 *D_L31_001E9198 __attribute__((section(".data")));
typedef struct { f32 x, y, z, w; } V_00347938;
extern V_00347938 D_L31_001E91A0;
extern f32 D_L31_001DCFCC;
__asm__(".extern D_L31_001DCFCC, 4");

void func_L31_00347938(void *a0, void *a1, s32 a2, vu0_v4 *a3, f32 e, f32 f, f32 g, f32 h, f32 i, f32 j, f32 k, s32 a4) {
    vu0_v4 s0;
    vu0_v4 s10;
    vu0_v4 s20;
    vu0_v4 s30;
    vu0_v4 s40;
    vu0_v4 s50;
    vu0_v4 s60;
    vu0_v4 *p;
    f32 lim;
    u8 *m;
    u8 *t;
    s32 hit;

    p = (vu0_v4 *)a2;
    func_0038CE20(&s30, a3, func_0038CE68(a3, p) / func_0038CE68(a3, a3));
    vec_sub_ba(&s40, p, &s30);
    if (func_L31_00346838(a0, a1, a3, a4, e, k) == 0 || func_0038CE68(a3, &s30) < 0.0f) {
        vec_add_ba(&s30, &s30, a3);
        lim = g;
    } else {
        lim = f;
        qzero(&s30);
    }
    if (lim < func_0038CEA8(&s40)) {
        func_0038CE20(&s40, &s40, 1.0f - i);
        func_0038CF68(&s60, &s40, j);
        vec_sub_ab(&s40, &s40, &s60);
    }
    if (h < func_0038CEA8(&s30)) {
        func_0038CE20(&s30, &s30, 1.0f - i);
        func_0038CF68(&s60, &s30, j);
        vec_sub_ab(&s30, &s30, &s60);
    }
    vec_add_ba(p, &s30, &s40);
    s10 = *(vu0_v4 *)a1;
    s10.z += k;
    vec_add_ba(&s0, &s10, p);
    if (func_L01_003FB640(&s0, 2, a0, e + D_L31_001DCFCC) != 0) {
        hit = 0;
        m = D_L31_001E9198;
        if (m != 0) {
            t = 0;
            if (func_L30_003445B8(m) == 0) {
                return;
            }
            if (func_L30_00343830(m, &s60, &s10, e + D_L31_001DCFCC) == 0) {
                return;
            }
            if (*(u16 *)(m + 0x34) & 0x20) {
                t = *(u8 **)(*(u8 **)(m + 0x68) + 8);
            }
            if (t != 0 && func_0038CEA8(t + 0x10) > 0.0f) {
                vec_add_ba(&s0, &s0, t + 0x10);
                hit = 1;
            }
        }
        if (func_0038CF00(&D_L31_001E91A0, &s0) <= e || hit) {
            vu0_q qa, qb, qr, qc, qd;

            __asm__("lqc2 %0, %1" : "=j"(qa) : "m"(s0));
            __asm__("lqc2 %0, %1" : "=j"(qb) : "m"(D_L31_001E91A0));
            __asm__("vsub.xyz %0, %1, %2" : "=j"(qa) : "j"(qa), "j"(qb));
            __asm__("sqc2 %1, %0" : "=m"(s50) : "j"(qa));
            func_0038CF68(&s50, &s50, 1.0f);
            func_0038CF68(&s50, &s50, e);
            __asm__("lqc2 %0, %1" : "=j"(qr) : "m"(s50));
            __asm__("lqc2 %0, %1" : "=j"(qc) : "m"(D_L31_001E91A0));
            __asm__("vadd.xyz %0, %1, %2" : "=j"(qd) : "j"(qr), "j"(qc));
            __asm__("sqc2 %1, %0" : "=m"(s0) : "j"(qd));
        }
    }
    vec_sub_ba(&s20, &s0, &s10);
    vec_add_ba(a1, &s20, a1);
    s10 = s0;
}
/* localdecomp:end func_L31_00347938 */
