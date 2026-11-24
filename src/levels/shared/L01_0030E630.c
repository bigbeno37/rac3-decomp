#include "common.h"

typedef int s128 __attribute__((mode(TI)));
typedef struct {
    u8 pad0[0x28];
    s32 w28;
} S_311A18m;
typedef struct {
    u8 pad0[0x10];
    s128 q10;
    u8 b20;
    u8 pad21[0x68 - 0x21];
    S_311A18m *p68;
    u8 pad6C[0xAA - 0x6C];
    s16 hAA;
} S_311A18;

INCLUDE_ASM("asm/levels", func_L01_0030E630);

INCLUDE_ASM("asm/levels", func_L01_0030EAE8);

/* localdecomp:start func_L01_0030F0B0 */
#include "vu0.h"
typedef struct {
    u8 pad0[0x80];
    f32 pos[4];
    u8 pad90[0x25F3 - 0x90];
    u8 pickup_instant;
    u8 pad25F4[0x2824 - 0x25F4];
    f32 pickup_radius;
    f32 pickup_height;
    u8 pad282C[0x2850 - 0x282C];
    s32 health;
} Hero_0030F0B0;
typedef struct {
    u8 pad0[0x5C];
    u8 b5C;
    u8 pad5D[0x68 - 0x5D];
    s32 w68;
    u8 pad6C[0x74 - 0x6C];
    f32 f74;
    u8 b78;
} Vars_0030F0B0;
typedef struct {
    u8 pad0[0x10];
    f32 pos[4];
    u8 pad20[0x68 - 0x20];
    Vars_0030F0B0 *vars;
} Moby_0030F0B0;
typedef struct {
    u8 pad0[0x8A];
    u16 h8A;
    u8 pad8C[0xF0 - 0x8C];
} Lvl_0030F0B0;

extern Hero_0030F0B0 D_001A4BE0;
extern s32 D_L01_001D673C;

extern u8 D_001425C0[];
extern s32 D_001427F0[];
extern Lvl_0030F0B0 D_L01_002C5600[];
extern f32 func_L01_00451580(void *);
extern s32 func_L01_0040E020(void *);
extern f32 func_L01_0040E570(void *, void *);

s32 func_L01_0030F0B0(Moby_0030F0B0 *m, s32 a1) {
    Vars_0030F0B0 *vars = m->vars;
    Hero_0030F0B0 *hero = &D_001A4BE0;
    s32 idx;
    s32 n;
    Lvl_0030F0B0 *e;
    f32 d;

    if (hero->health == 0) {
        return 0;
    }
    if (D_L01_001D673C ? func_L01_00451580(m->pos) < vars->f74 - 2.0f : m->pos[2] < vars->f74 - 2.0f) {
        return 1;
    }
    if (hero->pickup_instant) {
        return 1;
    }
    idx = vars->w68;
    n = D_001427F0[idx];
    e = &D_L01_002C5600[D_001425C0[idx]];
    if (n >= e->h8A) {
        return 0;
    }
    if (vars->b5C != 0 || a1 != 0) {
        if (func_L01_0040E020(&vars->b78) != 0) {
            Hero_0030F0B0 *h = &D_001A4BE0;

            if (h->pickup_height < fabs_asm(m->pos[2] - h->pos[2])) {
                return 0;
            }
            d = func_L01_0040E570(m->pos, h->pos);
            if (h->pickup_radius * h->pickup_radius < d) {
                return 0;
            }
        }
    } else {
        Hero_0030F0B0 *h = &D_001A4BE0;

        if (fabs_asm(m->pos[2] - h->pos[2]) < h->pickup_height
            && func_L01_0040E570(m->pos, h->pos) < h->pickup_radius * h->pickup_radius) {
            vars->b78 = 3;
        }
        return 0;
    }
    return 1;
}
/* localdecomp:end func_L01_0030F0B0 */

/* localdecomp:start func_L01_0030F288 */
typedef int s128_0030F288 __attribute__((mode(TI)));
typedef struct { u8 pad0[0x25C0]; void *p25C0; } Hero_0030F288;
typedef struct { u8 pad0[0x88]; u16 w88; u8 pad8A[0xF0 - 0x8A]; } Row_0030F288;
typedef struct {
    u8 pad0[0x60];
    s32 w60;
    u8 pad64[0x68 - 0x64];
    s32 w68;
    f32 f6C;
    u8 pad70[0x74 - 0x70];
    f32 f74;
} Vars_0030F288;
typedef struct {
    u8 pad0[0x10];
    f32 pos[4];
    u8 b20;
    u8 pad21[0x64 - 0x21];
    void (*update)(void);
    Vars_0030F288 *vars;
} Moby_0030F288;
extern s32 func_L01_00511950(s32);
extern f32 func_00382538(void);
extern void func_003C5180(void *, void *, s32);
extern f32 func_0038CED8(void *);
extern f32 func_0038D160(f32, f32);
extern void func_L01_00443B88(void *, f32, f32);
extern f32 func_003824E0(f32, f32);
extern void func_L01_004510A8(void *, void *, void *, s32, f32);
extern Moby_0030F288 *func_L01_003F79D8(void *, s32, s32, s32, void *, void *, void *, s32, f32, f32, s32, s32, s32);
extern f32 func_L01_00451580(void *);
extern void func_003C7C38(void *);
extern void func_L01_0044A7D0(void *);
extern void func_L01_0030EAE8(void);

u8 *func_L01_0030F288(void *a0, s32 a1, s32 a2, s32 a3) {
    f32 rot[4];
    f32 pos[4];
    f32 f20;
    Moby_0030F288 *m;
    Vars_0030F288 *vars;
    s32 max;
    s32 mp;

    max = ((Row_0030F288 *)D_L01_002C5600)[D_001425C0[func_L01_00511950(a1)]].w88;
    *(s128_0030F288 *)pos = 0;
    pos[2] = func_00382538();
    *(s128_0030F288 *)rot = *(s128_0030F288 *)pos;
    if (D_L01_001D673C != 0) {
        func_003C5180(a0, pos, 1);
        rot[1] = func_0038D160(pos[2], func_0038CED8(pos));
        rot[2] = func_0038D160(pos[0], pos[1]);
    }
    func_L01_00443B88(pos, 0.040000003f, 0.080000006f);
    func_L01_004510A8(((Hero_0030F288 *)&D_001A4BE0)->p25C0, pos, pos, 0, func_003824E0(4.0f, 8.0f) * 0.020000001f);
    f20 = func_003824E0(180.0f, 360.0f);
    m = func_L01_003F79D8(((Hero_0030F288 *)&D_001A4BE0)->p25C0, 2, 0xCDB, 0, a0, rot, pos, 0xFF, f20,
                          func_003824E0(10.0f, 15.0f), 0xB4, 0, 0x80);
    if (m != 0) {
        m->b20 = 1;
        m->update = func_L01_0030EAE8;
        vars = m->vars;
        if (a2 == -1) {
            vars->w60 = ((Row_0030F288 *)D_L01_002C5600)[D_001425C0[func_L01_00511950(a1)]].w88;
        } else {
            vars->w60 = a2;
        }
        mp = D_L01_001D673C;
        vars->w68 = a1;
        vars->f6C = (f32)a3;
        if (mp != 0) {
            vars->f74 = func_L01_00451580(m->pos);
        } else {
            vars->f74 = m->pos[2];
        }
        func_003C7C38(m);
        func_L01_0044A7D0(m);
    }
    return (u8 *)m;
}
/* localdecomp:end func_L01_0030F288 */

LINKER_REMNANT("asm/levels", func_L01_0030F4E0);

INCLUDE_ASM("asm/levels", func_L01_0030F4E8);

INCLUDE_ASM("asm/levels", func_L01_0030F6C0);

LINKER_REMNANT("asm/levels", func_L01_003104A0);
