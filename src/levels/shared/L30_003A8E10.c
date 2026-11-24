#include "common.h"
#include "vu0.h"

/* declared by functions of L30_003A8D68.c, which this file was cut from */
extern s32 D_L30_001DEAB0;
extern s32 D_L30_001DEAB4;
extern vu0_q D_L30_002A2560[];

/* localdecomp:start func_L30_003A8E10 */
typedef struct {
    s32 id;
    u8 pad[0x18];
    f32 w;
} E_003A8E10;

typedef struct {
    u8 pad0[0x10];
    vu0_v4 pos;
    f32 vel[3];
    f32 total;
    E_003A8E10 ent[32];
} S_003A8E10;

__asm__(".extern D_L30_001DEAB0, 4");
__asm__(".extern D_L30_001DEAB4, 4");
__asm__(".extern D_L30_001DEAB8, 4");
__asm__(".extern D_L30_001DEABC, 4");
__asm__(".extern D_L30_001DEAC0, 4");
__asm__(".extern D_L30_001DEAC4, 4");
__asm__(".extern D_L30_001DEAC8, 4");
__asm__(".extern D_L30_001DEACC, 4");
__asm__(".extern D_L30_001DEAD8, 4");
__asm__(".extern D_L30_001DF2C0, 4");
extern f32 D_L30_001DEAB8;
extern f32 D_L30_001DEABC;
extern f32 D_L30_001DEAC0;
extern f32 D_L30_001DEAC4;
extern f32 D_L30_001DEAC8;
extern f32 D_L30_001DEACC;
extern f32 D_L30_001DEAD8;
extern s32 D_L30_001DF2C0;
extern f32 D_L30_001E1BC0;
extern f32 D_L30_001E1BC4;
extern f32 D_L30_001E1BC8;
extern f32 D_L30_001E1BCC;
extern u8 D_001A4BE0[];
extern u8 D_001A4C60[];
extern s32 func_L01_00456500(void *, s32);
extern void func_L30_003A9508(void *, void *, void *);
extern f32 func_L30_003A9928(s32, void *);
extern void func_0038CE20(void *, void *, f32);
extern s32 func_L30_0034D8D8(u8 *, f32);
extern void func_L01_004482A0(f32 *, f32 *, f32, f32, f32, f32);
extern void func_L30_0034CDC0(f32, f32 *, f32 *, f32 *, f32 *);
extern f32 func_L30_0034DA70(s32, f32, f32, f32);

void func_L30_003A8E10(u8 *a0, u8 *a1, u8 *a2, u8 *a3) {
    u8 *s = *(u8 **)(a0 + 0x68);
    u8 *g = D_001A4BE0;
    vu0_v4 orig;
    vu0_v4 v;
    vu0_v4 d;
    f32 b0[4];
    f32 b1[4];
    E_003A8E10 *e;
    s32 i;
    s32 mode;

    *(vu0_q *)a1 = *(vu0_q *)a2;
    *(s32 *)(s + 0x2C) = 0;
    *(vu0_q *)&orig = *(vu0_q *)a2;
    mode = *(s32 *)(g + 0x25C4);
    if (mode == 0x9F || mode == 0xA1 || mode == 0xA0) {
        return;
    }
    e = (E_003A8E10 *)(s + 0x30);
    for (i = 0; i < 32; i++) {
        if (e[i].id != -1 && func_L01_00456500(D_001A4C60, e[i].id) && 0.0f < ((S_003A8E10 *)s)->ent[i].w) {
            f32 w, t;
            func_L30_003A9508(&((S_003A8E10 *)s)->ent[i], &v, &D_L30_002A2560[i]);
            w = ((S_003A8E10 *)s)->ent[i].w * func_L30_003A9928(e[i].id, D_001A4C60);
            t = w / (w + *(f32 *)(s + 0x2C));
            func_0038CE20(&v, &v, t);
            func_0038CE20(s + 0x10, s + 0x10, 1.0f - t);
            vec_add_ab(s + 0x10, s + 0x10, &v);
            *(f32 *)(s + 0x2C) = *(f32 *)(s + 0x2C) + w;
        }
    }
    for (i = 0; i < 32; i++) {
        if (e[i].id != -1 && func_L01_00456500(D_001A4C60, e[i].id) == 0) {
            D_L30_002A2560[i] = *(vu0_q *)(s + 0x10);
        }
    }
    if (func_L30_0034D8D8(D_001A4C60, D_L30_001DEAD8) == 0 || D_L30_001DF2C0 < 20) {
        *(vu0_q *)a1 = *(vu0_q *)(s + 0x10);
        *(f32 *)(s + 0x20) = 0;
        *(f32 *)(s + 0x24) = 0;
        *(f32 *)(s + 0x28) = 0;
    } else {
        func_L01_004482A0((f32 *)a1, (f32 *)(s + 0x20), *(f32 *)(s + 0x10), D_L30_001DEAC8, D_L30_001DEAC4, D_L30_001DEACC);
        func_L01_004482A0((f32 *)(a1 + 4), (f32 *)(s + 0x24), *(f32 *)(s + 0x14), D_L30_001DEAC8, D_L30_001DEAC4, D_L30_001DEACC);
        func_L01_004482A0((f32 *)(a1 + 8), (f32 *)(s + 0x28), *(f32 *)(s + 0x18), D_L30_001DEAC8, D_L30_001DEAC4, D_L30_001DEACC);
    }
    if (D_L30_001DEAB0 != 0 && D_L30_001DF2C0 > 20) {
        f32 cx, cz, dx, dz, f;
        s32 j;
        u8 *c = D_001A4BE0;
        func_L30_0034CDC0(D_L30_001DEAB8, &b0[0], &b0[1], &b0[2], &b0[3]);
        func_L30_0034CDC0(D_L30_001DEABC, &b1[0], &b1[1], &b1[2], &b1[3]);
        cx = (b1[0] + b1[1]) * 0.5f;
        cz = (b1[2] + b1[3]) * 0.5f;
        dx = *(f32 *)(a1 + 0) - cx;
        dz = *(f32 *)(a1 + 8) - cz;
        *(vu0_q *)&v = *(vu0_q *)a1;
        b0[0] += dx;
        b0[1] += dx;
        b0[2] += dz;
        b0[3] += dz;
        b1[0] += dx;
        b1[1] += dx;
        b1[2] += dz;
        b1[3] += dz;
        if (*(f32 *)(c + 0x80) < b0[0]) {
            f = (D_L30_001DEAC0 - 1.0f) * func_L30_0034DA70(0, *(f32 *)(c + 0x80), b1[0], b0[0]) + 1.0f;
            func_L01_004482A0((f32 *)a1, (f32 *)(s + 0x20), *(f32 *)(a1 + 0) - (b0[0] - *(f32 *)(c + 0x80)), f * D_L30_001DEAC8, D_L30_001DEAC4, f * D_L30_001DEACC);
        }
        if (*(f32 *)(c + 0x88) < b0[2] && 2.0f < *(f32 *)(c + 0x2F8) && *(s32 *)(c + 0x25C4) != 0xA1) {
            f = (D_L30_001DEAC0 - 1.0f) * func_L30_0034DA70(0, *(f32 *)(c + 0x88), b1[2], b0[2]) + 1.0f;
            func_L01_004482A0((f32 *)(a1 + 8), (f32 *)(s + 0x28), *(f32 *)(a1 + 8) - (b0[2] - *(f32 *)(c + 0x88)), f * D_L30_001DEAC8, D_L30_001DEAC4, f * D_L30_001DEACC);
        }
        {
            u8 *c2 = D_001A4BE0;
            if (b0[1] < *(f32 *)(c2 + 0x80)) {
                f = (D_L30_001DEAC0 - 1.0f) * func_L30_0034DA70(1, *(f32 *)(c2 + 0x80), b0[1], b1[1]) + 1.0f;
                func_L01_004482A0((f32 *)a1, (f32 *)(s + 0x20), *(f32 *)(a1 + 0) + (*(f32 *)(c2 + 0x80) - b0[1]), f * D_L30_001DEAC8, D_L30_001DEAC4, f * D_L30_001DEACC);
            }
            if (*(f32 *)(c2 + 0x88) > b0[3]) {
                f = (D_L30_001DEAC0 - 1.0f) * func_L30_0034DA70(1, *(f32 *)(c2 + 0x88), b0[3], b1[3]) + 1.0f;
                func_L01_004482A0((f32 *)(a1 + 8), (f32 *)(s + 0x28), *(f32 *)(a1 + 8) + (*(f32 *)(c2 + 0x88) - b0[3]), f * D_L30_001DEAC8, D_L30_001DEAC4, f * D_L30_001DEACC);
            }
        }
        vec_sub_ba(&d, a1, &v);
        for (j = 0; j < 32; j++) {
            if (e[j].id != -1 && func_L01_00456500(D_001A4C60, e[j].id)) {
                vec_add_ab(&D_L30_002A2560[j], &D_L30_002A2560[j], &d);
            }
        }
    }
    if (D_L30_001DEAB4 != 0 && a3 != 0) {
        u8 *m = *(u8 **)(a3 + 0x68);
        if (m != 0) {
            *(vu0_q *)a1 = *(vu0_q *)(m + 0xC0);
            *(f32 *)(s + 0x20) = 0;
            *(f32 *)(s + 0x24) = 0;
            *(f32 *)(s + 0x28) = 0;
        }
    }
    if (0.0f < D_L30_001E1BC4) {
        if (*(f32 *)(a1 + 0) < D_L30_001E1BC4) {
            *(f32 *)(a1 + 0) = D_L30_001E1BC4;
        }
        D_L30_001E1BC4 = 0.0f;
    }
    if (0.0f < D_L30_001E1BC0) {
        if (D_L30_001E1BC0 < *(f32 *)(a1 + 0)) {
            *(f32 *)(a1 + 0) = D_L30_001E1BC0;
        }
        D_L30_001E1BC0 = 0.0f;
    }
    if (0.0f < D_L30_001E1BCC) {
        if (*(f32 *)(a1 + 8) < D_L30_001E1BCC) {
            *(f32 *)(a1 + 8) = D_L30_001E1BCC;
        }
        D_L30_001E1BCC = 0.0f;
    }
    if (0.0f < D_L30_001E1BC8) {
        if (D_L30_001E1BC8 < *(f32 *)(a1 + 8)) {
            *(f32 *)(a1 + 8) = D_L30_001E1BC8;
        }
        D_L30_001E1BC8 = 0.0f;
    }
    *(vu0_q *)a2 = *(vu0_q *)a1;
    *(vu0_q *)s = *(vu0_q *)D_001A4C60;
}
/* localdecomp:end func_L30_003A8E10 */
