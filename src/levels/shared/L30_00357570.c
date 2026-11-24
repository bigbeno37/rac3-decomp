#include "common.h"

/* localdecomp:start func_L30_00357570 */
/* log (checked with --as ps2as, and a div.s row "func_L30_00357570 2" in a private copy of
 * config/levels/divs_nops.txt):
 * v1 switch draft, case bodies in source order 1,2,0,4..8: 239 diff (most of it the 2 missing nops)
 * struct views of D_00142660 / D_001426E0 / D_001A4BE0 (base-register addressing), index t+0x2C kept
 * in a variable, byte stores 0x55,0x56,0x57: 13 diff
 * D_L30_001E1440 in .sdata (retail reaches it through Ps2EeAs macros: la for the sq, lui $at for
 * the .y store): 4 diff
 * one function-level temporary shared by case 5 (D_L30_001DDAD4) and the case 6 compare chain, so
 * it is globally allocated as in retail ($v1): MATCH in levels 30, 31, 32, 34, 35
 * levels 33 and 36: only jal targets of the 8-byte stub functions differ (catalogue naming)
 */
typedef struct {
    u8 pad0[0xD0];
    f32 xD0;
    s32 xD4;
    s32 xD8;
    s32 xDC;
    u8 pad1[4];
    s32 xE4;
    u8 pad2[0x138 - 0xE8];
    s32 x138;
    s32 x13C;
} V_00357570;

typedef struct {
    f32 x, y, z, w;
} __attribute__((aligned(16))) V4_00357570;

__asm__(".extern D_L30_001DDAB8, 4");
__asm__(".extern D_L30_001DDAD4, 4");
__asm__(".extern D_L30_001DDADC, 4");
extern s32 D_001D545C;
extern s32 D_L30_001DDAB8;
extern s32 D_L30_001DDAD4;
extern s32 D_L30_001DDADC;
extern s32 D_001A66D8[];
extern u8 D_001A71D2[];
extern s32 D_L30_001E1428;
extern V4_00357570 D_L30_001E1440 __attribute__((section(".sdata")));
extern V4_00357570 D_L30_001E2240;
typedef struct {
    u8 pad0[0x84];
    f32 x84;
    u8 pad1[0x1B14 - 0x88];
    s32 x1B14;
    s32 x1B18;
    s32 x1B1C;
} S_1A4BE0_00357570;
extern S_1A4BE0_00357570 D_001A4BE0;
extern s32 D_L30_002E47F4[];
typedef struct {
    u8 pad0[0x60];
    s32 x60;
    s32 x64;
    s32 x68;
    s32 x6C;
    u16 x70;
    u16 x72;
    u8 x74;
    u8 x75;
    u8 x76;
} S_00357570;
extern S_00357570 D_00142660;
typedef struct {
    u8 pad0[0xB];
    u8 x0B;
    u8 pad1[0x3E];
    u8 x4A[6];
    u8 pad2[3];
    u8 x53;
    u8 x54;
    u8 x55;
    u8 x56;
    u8 x57;
} S_1426E0_00357570;
extern S_1426E0_00357570 D_001426E0;

extern s32 func_L01_004561B8(void *);
extern void func_L30_0035B758(void *);
extern void func_L30_00358258(u8 *);
extern s32 func_0038CAD0(void *);
extern void func_L30_00358210(u8 *);
extern void func_L01_003EA9B8_00357570(void *);
extern void func_L01_003EDD80_00357570(void *);
extern void func_L01_003EE640_00357570(void *);
extern void func_L01_003F19B0_00357570(void *);
extern void func_L30_00359A08(void *);
extern void func_L30_0034D088(s32, s32, s32);
extern void func_L30_00358380(u8 *);
extern void func_L01_003609D0(void *);
extern void func_L01_003DF8B8_00357570(void *);
extern void func_L30_003593A0(void *);
extern void func_L30_003595C0(void *);
extern void func_L30_003596E8(void *);
extern void func_L30_00359808(void *);
extern void func_L30_00359980(void *);
extern void func_L30_00359E20(void *);
extern void func_L01_004450F0(void *, s32, s32);
extern void func_0038A238(s32);
extern u16 func_L30_00358360(void);
extern void func_L30_00357B88(void);
extern void func_L30_004CF4B0(s32, s32);
extern void func_003A1C28(void);
extern void func_003A1930(s32, s32, s32);
extern void func_L01_00404A10(void *, void *);
extern void func_L30_00358A18(void *);
extern void func_L30_00358DA8(void *);
extern s32 func_L30_00357C78(s32);
extern void func_L22_0041FCC8(s32, s32);
extern void func_L30_003586A8(void *);
extern void func_L30_0035B780(void *);
extern void func_L30_00358618(void *);
extern void func_L01_003B84E8_00357570(void *);
extern void func_L01_003D4C00_00357570(void *);
extern void func_L01_003E32E8_00357570(void *);
extern void func_L30_00359058(void *);
extern void func_L01_003E32F0_00357570(void *);
extern void func_L30_00359418(void *);
extern void func_L01_003EBF38_00357570(void *);
extern void func_L30_00359648(void *);
extern void func_L01_003EE638_00357570(void *);
extern void func_L30_00359760(void *);
extern void func_L01_003EE648_00357570(void *);
extern void func_L30_00359878(void *);
extern void func_L01_003F1F08_00357570(void *);
extern void func_L30_00359D78(void *);
extern s32 func_L01_004BA800(void);

void func_L30_00357570(u8 *a0) {
    V_00357570 *v = *(V_00357570 **)(a0 + 0x68);
    u8 *p;
    s32 t;
    u32 r;

    switch (a0[0x20]) {
    case 1:
        func_L01_004561B8(a0);
        func_L30_0035B758(a0);
        func_L30_00358258(a0);
        if (func_0038CAD0(&v->xDC)) {
            func_L30_00358210(a0);
        }
        if (D_001D545C == 0x20) {
            func_L01_003EA9B8_00357570(a0);
        }
        if (D_001D545C == 0x21) {
            func_L01_003EDD80_00357570(a0);
        }
        if (D_001D545C == 0x22) {
            func_L01_003EE640_00357570(a0);
        }
        if (D_001D545C == 0x23) {
            func_L01_003F19B0_00357570(a0);
        }
        if (D_001D545C == 0x24) {
            func_L30_00359A08(a0);
        }
        break;
    case 2:
        D_001A66D8[0] = 1;
        func_L30_0034D088(0, v->xE4, 0x8CA0);
        break;
    case 0:
        func_L30_00358380(a0);
        if (a0[0x94] != 6) {
            func_L01_003609D0(a0);
        }
        if (D_001D545C == 0x1E) {
            func_L01_003DF8B8_00357570(a0);
        }
        if (D_001D545C == 0x1F) {
            func_L30_003593A0(a0);
        }
        if (D_001D545C == 0x20) {
            func_L30_003595C0(a0);
        }
        if (D_001D545C == 0x21) {
            func_L30_003596E8(a0);
        }
        if (D_001D545C == 0x22) {
            func_L30_00359808(a0);
        }
        if (D_001D545C == 0x23) {
            func_L30_00359980(a0);
        }
        if (D_001D545C == 0x24) {
            func_L30_00359E20(a0);
        }
        if (v->xD4 != 0) {
            func_L01_004450F0(a0, 7, -1);
        } else {
            func_L01_004450F0(a0, 6, -1);
        }
        break;
    case 4:
        {
            s32 i = D_001D545C + 0x2C;
            if ((u32)(i - 0x4A) < 6) {
                p = &((u8 *)&D_001426E0)[i];
                if (*p < v->xE4) {
                    *p = *(u8 *)&v->xE4;
                }
            }
        }
        D_00142660.x74 = 0;
        D_00142660.x75 = 0;
        D_00142660.x76 = 0;
        D_00142660.x6C = 0;
        D_00142660.x68 = 0;
        D_00142660.x64 = 0;
        D_00142660.x60 = 0;
        D_00142660.x70 = 0;
        D_00142660.x72 = 0;
        func_0038A238(0xD);
        D_001A71D2[0] = 1;
        break;
    case 5:
        if (func_L01_004561B8(a0)) {
            D_L30_001E1428 = ((u16 (*)(u8 *))func_L30_00358360)(a0);
            ((void (*)(u8 *))func_L30_00357B88)(a0);
            func_L30_004CF4B0(0x74, 1);
            t = D_L30_001DDAD4;
            v->xDC = t;
            v->xD8 = D_L30_001DDAB8;
            func_003A1C28();
            func_003A1930(v->x138, 0, 0x400);
        }
        D_L30_001E1440 = D_L30_001E2240;
        D_L30_001E1440.y = D_001A4BE0.x84;
        func_0038CAD0(&v->xDC);
        func_0038CAD0(&v->xD8);
        v->xD0 = 1.0f - (f32)v->xD8 / (f32)D_L30_001DDAB8;
        func_L01_00404A10(func_L30_00358A18, a0);
        if (*(long *)(&v->xD8) != 0) {
            break;
        }
        if (D_001D545C == 0x1F) {
            D_001426E0.x0B = 1;
        }
        D_001426E0.x54 |= 1 << (D_001D545C - 0x1E);
        D_001A4BE0.x1B18 = ((u16 (*)(u8 *))func_L30_00358360)(a0);
        D_001A4BE0.x1B14 = v->xE4;
        D_001A4BE0.x1B1C = func_L30_00357C78(v->xE4);
        r = func_L30_00357C78(D_001A4BE0.x1B14);
        D_001426E0.x55 = r;
        D_001426E0.x56 = r >> 8;
        D_001426E0.x57 = r >> 16;
        if (D_001A4BE0.x1B14 >= 100) {
            D_001426E0.x53 |= 1 << (D_001D545C - 0x1E);
        }
        func_L01_004450F0(a0, 8, -1);
        break;
    case 6:
        func_L01_004561B8(a0);
        if (D_L30_002E47F4[0] == 0) {
            func_L22_0041FCC8(D_L30_001DDADC, 0x341);
        }
        if (func_0038CAD0(&v->x13C) == 0) {
            func_L01_00404A10(func_L30_00358DA8, a0);
        }
        {
            s32 n = D_00142660.x70 + 1;
            if (n > 0x8C9F) {
                n = 0x8C9F;
            }
            D_00142660.x70 = n;
        }
        func_L30_003586A8(a0);
        func_L30_0035B780(a0);
        func_L30_00358618(a0);
        t = D_001D545C;
        if (t == 0x1E) {
            func_L01_003B84E8_00357570(a0);
            func_L01_003D4C00_00357570(a0);
        } else if (t == 0x1F) {
            func_L01_003E32E8_00357570(a0);
            func_L30_00359058(a0);
        } else if (t == 0x20) {
            func_L01_003E32F0_00357570(a0);
            func_L30_00359418(a0);
        } else if (t == 0x21) {
            func_L01_003EBF38_00357570(a0);
            func_L30_00359648(a0);
        } else if (t == 0x22) {
            func_L01_003EE638_00357570(a0);
            func_L30_00359760(a0);
        } else if (t == 0x23) {
            func_L01_003EE648_00357570(a0);
            func_L30_00359878(a0);
        } else if (t == 0x24) {
            func_L01_003F1F08_00357570(a0);
            func_L30_00359D78(a0);
        }
        D_00142660.x72 = ((u16 (*)(u8 *))func_L30_00358360)(a0);
        break;
    case 7:
        if (func_L01_004BA800() != 0) {
            break;
        }
        v->xD4 = 0;
        func_L01_004450F0(a0, 6, -1);
        break;
    case 8:
        func_L30_0034D088(1, v->xE4, ((u16 (*)(u8 *))func_L30_00358360)(a0));
        break;
    }
}
/* localdecomp:end func_L30_00357570 */
