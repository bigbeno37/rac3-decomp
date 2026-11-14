#include "common.h"

/* localdecomp:start func_L39_0064C7E0 */
typedef int u128_t __attribute__((mode(TI)));
extern u8 D_L40_003BFE20[];
extern s32 D_L40_0025FA00[];
extern s32 func_L39_00632C48(u8 *, f32);
extern void func_L39_0063A030(void *, s32, s32);
extern void func_L39_00632D78(void *, s32, f32);
extern void func_L39_00633308(u8 *, s32, f32, f32, f32);
extern s32 func_L01_004606E8(s32, s32, s32, s32);
extern s32 func_L39_006212E8(void *);
extern void func_L39_00633670(u8 *, f32);
extern void func_L39_00633620(u8 *, f32, f32);
extern void func_L39_0062D0C8(u8 *, f32);
extern void func_L31_004F3CA0_0064C7E0(u8 *, f32, f32);
extern void func_L39_00632888(u8 *, f32, void *, void *);
extern void func_L39_00632988(u8 *, f32, void *, void *);
extern s32 func_003D3CB0(void *, void *, s32, void *, s32);
extern void func_L39_0062EF58(u8 *);
extern f32 func_L39_00632678(u8 *, f32 *);
extern void func_L39_00633CF8(u8 *);
extern void func_L01_0044E468(s32, s32);
extern s32 func_L39_00632180(u8 *, f32 *, s32, f32, f32, f32);
extern s32 func_003D4D00(void *, s32, f32, void *, s32);
extern void func_0038CE20(void *, void *, f32);
extern s32 func_L39_005B8928(s32);
extern void func_L01_00446A70(s32, s32, s32, s32, s32, f32);
extern void func_L39_0062E930(u8 *);
extern void func_L30_004F0170_0064C7E0(u8 *);

void func_L39_0064C7E0(u8 *g) {
    f32 fb4;
    s32 n;
    s32 i;
    u32 x;

    {
        u8 *q = g + 0x19E4;
        if (*q == 0) {
            x = 0;
        } else {
            u32 buf[4];
            u8 *b;
            s32 i;
            s32 n = *q;
            s32 m = n + 1;
            s32 k = ((s32)q - n) & 7;
            b = (u8 *)buf;
            for (i = 0; i < 40; i += 5) {
                *b++ = D_L40_003BFE20[m + ((k + i) & 7) * 255];
            }
            buf[0] ^= (u32)q;
            buf[1] ^= buf[0];
            x = buf[1];
        }
    }
    if ((x ^ 0x1B) == 0 && *(s16 *)(g + 0x2480) == 0 && *(s32 *)(g + 0x568) == 3) {
        if (func_L39_00632C48(g, 10.0f) != 0) {
            func_L39_0063A030(g, 4, 0);
        }
    }
    if (*(s16 *)(g + 0x1538) != 0 && g[0x372] != 0) {
        *(f32 *)(g + 0xFB0) = *(f32 *)(g + 0xFB4);
    } else {
        if (g[0x14AC] != 0) {
            func_L39_00632D78(g, 0, 0.14500001f);
        }
        func_L39_00632D78(g, 0, *(f32 *)(g + 0x14B4));
    }
    if (*(s32 *)(g + 0x2F0) == *(s16 *)(g + 0x14BC)) {
        *(u128_t *)(g + 0x1470) = *(u128_t *)(g + 0xA0);
    }
    if (g[0x14AC] != 0) {
        goto main;
    }
    if (*(s16 *)(g + 0x14BC) <= *(s32 *)(g + 0x2F0)) {
        goto other;
    }
    {
        u8 *q = g + 0x19E4;
        if (*q == 0) {
            x = 0;
        } else {
            u32 buf[4];
            u8 *b;
            s32 i;
            s32 n = *q;
            s32 m = n + 1;
            s32 k = ((s32)q - n) & 7;
            b = (u8 *)buf;
            for (i = 0; i < 40; i += 5) {
                *b++ = D_L40_003BFE20[m + ((k + i) & 7) * 255];
            }
            buf[0] ^= (u32)q;
            buf[1] ^= buf[0];
            x = buf[1];
        }
    }
    if ((x ^ 0xB) == 0) {
        goto other;
    }
    {
        u8 *q = g + 0x19E4;
        if (*q == 0) {
            x = 0;
        } else {
            u32 buf[4];
            u8 *b;
            s32 i;
            s32 n = *q;
            s32 m = n + 1;
            s32 k = ((s32)q - n) & 7;
            b = (u8 *)buf;
            for (i = 0; i < 40; i += 5) {
                *b++ = D_L40_003BFE20[m + ((k + i) & 7) * 255];
            }
            buf[0] ^= (u32)q;
            buf[1] ^= buf[0];
            x = buf[1];
        }
    }
    if ((x ^ 0x10) == 0) {
        goto other;
    }
    {
        u8 *q = g + 0x19E4;
        if (*q == 0) {
            x = 0;
        } else {
            u32 buf[4];
            u8 *b;
            s32 i;
            s32 n = *q;
            s32 m = n + 1;
            s32 k = ((s32)q - n) & 7;
            b = (u8 *)buf;
            for (i = 0; i < 40; i += 5) {
                *b++ = D_L40_003BFE20[m + ((k + i) & 7) * 255];
            }
            buf[0] ^= (u32)q;
            buf[1] ^= buf[0];
            x = buf[1];
        }
    }
    if ((x ^ 0xC) == 0) {
        goto other;
    }
    {
        u8 *q = g + 0x19E4;
        if (*q == 0) {
            x = 0;
        } else {
            u32 buf[4];
            u8 *b;
            s32 i;
            s32 n = *q;
            s32 m = n + 1;
            s32 k = ((s32)q - n) & 7;
            b = (u8 *)buf;
            for (i = 0; i < 40; i += 5) {
                *b++ = D_L40_003BFE20[m + ((k + i) & 7) * 255];
            }
            buf[0] ^= (u32)q;
            buf[1] ^= buf[0];
            x = buf[1];
        }
    }
    if ((x ^ 0x11) == 0) {
        goto other;
    }
    {
        u8 *q = g + 0x19E4;
        if (*q == 0) {
            x = 0;
        } else {
            u32 buf[4];
            u8 *b;
            s32 i;
            s32 n = *q;
            s32 m = n + 1;
            s32 k = ((s32)q - n) & 7;
            b = (u8 *)buf;
            for (i = 0; i < 40; i += 5) {
                *b++ = D_L40_003BFE20[m + ((k + i) & 7) * 255];
            }
            buf[0] ^= (u32)q;
            buf[1] ^= buf[0];
            x = buf[1];
        }
    }
    if ((x ^ 0x1B) == 0) {
        goto other;
    }
    {
main:
        func_L39_00633308(g, 0, 0.0216f, 0.28800002f, 0.30019665f);
        fb4 = *(f32 *)(g + 0xFB4);
        if (g[0x14AC] >= 2) {
            *(f32 *)(g + 0xFB4) = fb4 * 0.4f;
        }
        if ((*(s16 *)(g + 0x3E4) != 0 ||
             (*(s32 *)(g + 0x1310) == 1 && func_L01_004606E8(0x28, 2, 0, *(s32 *)(g + 0x2534)) != 0 &&
              func_L39_006212E8(g) != 10))) {
            {
        u8 *q = g + 0x19E4;
        if (*q == 0) {
            x = 0;
        } else {
            u32 buf[4];
            u8 *b;
            s32 i;
            s32 n = *q;
            s32 m = n + 1;
            s32 k = ((s32)q - n) & 7;
            b = (u8 *)buf;
            for (i = 0; i < 40; i += 5) {
                *b++ = D_L40_003BFE20[m + ((k + i) & 7) * 255];
            }
            buf[0] ^= (u32)q;
            buf[1] ^= buf[0];
            x = buf[1];
        }
    }
            if ((x ^ 0x10) != 0) {
                func_L39_00633670(g, *(f32 *)(g + 0x3E8));
                goto f20;
            }
        }
        func_L39_00633670(g, 99999.0f);
    f20:
        *(f32 *)(g + 0xFB4) = fb4;
        if (g[0x14AC] != 1) {
            func_L39_00633620(g, *(f32 *)(g + 0x1510), *(f32 *)(g + 0x1514));
        }
        if (g[0x14AC] != 0) {
            if (*(s32 *)(*(u8 **)(g + 0x2534) + 0x1D4) != 0 && *(s16 *)(g + 0x2DA) != 0) {
                *(f32 *)(g + 0xFB4) = 0.0f;
            }
            if (g[0x14AC] != 0) {
                func_L39_0062D0C8(g, *(f32 *)(g + 0x1514));
            }
        }
        func_L31_004F3CA0_0064C7E0(g, 0.5f, 0.040000003f);
        {
        u8 *q = g + 0x19E4;
        if (*q == 0) {
            x = 0;
        } else {
            u32 buf[4];
            u8 *b;
            s32 i;
            s32 n = *q;
            s32 m = n + 1;
            s32 k = ((s32)q - n) & 7;
            b = (u8 *)buf;
            for (i = 0; i < 40; i += 5) {
                *b++ = D_L40_003BFE20[m + ((k + i) & 7) * 255];
            }
            buf[0] ^= (u32)q;
            buf[1] ^= buf[0];
            x = buf[1];
        }
    }
        if ((x ^ 9) == 0 && *(s32 *)(g + 0x2F0) < *(s16 *)(g + 0x14BC) + 3) {
            func_L39_00632888(g, (f32)*(s32 *)(g + 0x2F0) * 0.0064000003f, g + 0x120, g + 0x120);
        }
        {
        u8 *q = g + 0x19E4;
        if (*q == 0) {
            x = 0;
        } else {
            u32 buf[4];
            u8 *b;
            s32 i;
            s32 n = *q;
            s32 m = n + 1;
            s32 k = ((s32)q - n) & 7;
            b = (u8 *)buf;
            for (i = 0; i < 40; i += 5) {
                *b++ = D_L40_003BFE20[m + ((k + i) & 7) * 255];
            }
            buf[0] ^= (u32)q;
            buf[1] ^= buf[0];
            x = buf[1];
        }
    }
        if ((x ^ 0xA) == 0 && *(s32 *)(g + 0x2F0) < 0x1C) {
            func_L39_00632888(g, (f32)*(s32 *)(g + 0x2F0) * 0.021200001f, g + 0x120, g + 0x120);
        }
        if (*(s32 *)(g + 0x2F0) < 8 && *(f32 *)(g + 0x2468) > 0.2f) {
            u128_t va[1];
            u128_t vb[1];
            va[0] = *(u128_t *)(g + 0xA0);
            func_L39_00632988(g, 0.5f, va, va);
            func_L39_00632888(g, 0.95f, vb, va);
            if (func_003D3CB0(va, vb, 4, *(void **)(g + 0x2524), 0) != 0) {
                *(s16 *)(g + 0x1534) = 1;
            }
        }
        goto done;
    }
other:
    func_L39_0062EF58(g);
done:
    if (*(f32 *)(g + 0x2A8) > *(f32 *)(g + 0x14A0)) {
        *(f32 *)(g + 0x14A0) += 0.120000005f;
        if (*(f32 *)(g + 0x14A0) > *(f32 *)(g + 0x2A8)) {
            *(f32 *)(g + 0x14A0) = *(f32 *)(g + 0x2A8);
        }
    }
    if (*(f32 *)(g + 0xA8) < *(f32 *)(g + 0x14A0)) {
        *(f32 *)(g + 0x14A0) = *(f32 *)(g + 0xA8);
    }
    if (*(s16 *)(g + 0x14BC) < *(s32 *)(g + 0x2F0) && func_L39_00632678(g, (f32 *)(g + 0x120)) < 0.001f) {
        if (g[0x14AD] == 0 || *(s32 *)(g + 0x2F0) > *(s32 *)(g + 0x1444)) {
            {
        u8 *q = g + 0x19E4;
        if (*q == 0) {
            x = 0;
        } else {
            u32 buf[4];
            u8 *b;
            s32 i;
            s32 n = *q;
            s32 m = n + 1;
            s32 k = ((s32)q - n) & 7;
            b = (u8 *)buf;
            for (i = 0; i < 40; i += 5) {
                *b++ = D_L40_003BFE20[m + ((k + i) & 7) * 255];
            }
            buf[0] ^= (u32)q;
            buf[1] ^= buf[0];
            x = buf[1];
        }
    }
            if ((x ^ 0xE) != 0 || *(s32 *)(g + 0x2F0) >= 0xF) {
                g[0x14AE] = 1;
                if (*(f32 *)(g + 0x1468) != 0.0f) {
                    *(f32 *)(g + 0x1530) = *(f32 *)(g + 0x1468);
                }
            }
        }
    }
    func_L39_00633CF8(g);
    if (g[0x1A14] == 0 || *(s32 *)(g + 0x1310) != 2) {
        {
        u8 *q = g + 0x19E4;
        if (*q == 0) {
            x = 0;
        } else {
            u32 buf[4];
            u8 *b;
            s32 i;
            s32 n = *q;
            s32 m = n + 1;
            s32 k = ((s32)q - n) & 7;
            b = (u8 *)buf;
            for (i = 0; i < 40; i += 5) {
                *b++ = D_L40_003BFE20[m + ((k + i) & 7) * 255];
            }
            buf[0] ^= (u32)q;
            buf[1] ^= buf[0];
            x = buf[1];
        }
    }
        if ((x ^ 0x10) != 0) {
            {
        u8 *q = g + 0x19E4;
        if (*q == 0) {
            x = 0;
        } else {
            u32 buf[4];
            u8 *b;
            s32 i;
            s32 n = *q;
            s32 m = n + 1;
            s32 k = ((s32)q - n) & 7;
            b = (u8 *)buf;
            for (i = 0; i < 40; i += 5) {
                *b++ = D_L40_003BFE20[m + ((k + i) & 7) * 255];
            }
            buf[0] ^= (u32)q;
            buf[1] ^= buf[0];
            x = buf[1];
        }
    }
            if ((x ^ 0xD) != 0) {
                goto d83;
            }
        }
        func_L01_0044E468((s32)(g + 0x1630), *(s32 *)(g + 0x2F0) < 0xB ? 0 : 2);
    d83:;
    }
    if (g[0x1A14] == 0 || *(s32 *)(g + 0x1310) != 2) {
        {
        u8 *q = g + 0x19E4;
        if (*q == 0) {
            x = 0;
        } else {
            u32 buf[4];
            u8 *b;
            s32 i;
            s32 n = *q;
            s32 m = n + 1;
            s32 k = ((s32)q - n) & 7;
            b = (u8 *)buf;
            for (i = 0; i < 40; i += 5) {
                *b++ = D_L40_003BFE20[m + ((k + i) & 7) * 255];
            }
            buf[0] ^= (u32)q;
            buf[1] ^= buf[0];
            x = buf[1];
        }
    }
        if ((x ^ 0x83) == 0) {
            func_L01_0044E468((s32)(g + 0x1630), *(s32 *)(g + 0x2F0) < 0xC ? 0 : 2);
        }
    }
    {
        u8 *q = g + 0x19E4;
        if (*q == 0) {
            x = 0;
        } else {
            u32 buf[4];
            u8 *b;
            s32 i;
            s32 n = *q;
            s32 m = n + 1;
            s32 k = ((s32)q - n) & 7;
            b = (u8 *)buf;
            for (i = 0; i < 40; i += 5) {
                *b++ = D_L40_003BFE20[m + ((k + i) & 7) * 255];
            }
            buf[0] ^= (u32)q;
            buf[1] ^= buf[0];
            x = buf[1];
        }
    }
    if ((x ^ 0x10) == 0 && *(s32 *)(g + 0x2F0) >= 8 && *(f32 *)(g + 0x628) < 28.0f) {
        u128_t va[1];
        u128_t vb[1];
        func_L39_00632180(g, (f32 *)va, 1, 0.8f, 0.0f, 0.3f);
        n = func_003D4D00(va, 0, 0.9f, *(void **)(g + 0x2524), 0);
        if (n != 0) {
            func_0038CE20(vb, g + 0x140, 7.0f);
            for (i = 0; i < n; i++) {
                if (func_L39_005B8928(D_L40_0025FA00[i]) != 0) {
                    func_L01_00446A70(D_L40_0025FA00[i], *(s32 *)(g + 0x2524), 0x10000, (s32)(g + 0xA0), (s32)vb, 1.0f);
                }
            }
        }
    }
    func_L39_0062E930(g);
    func_L30_004F0170_0064C7E0(g);
}
/* localdecomp:end func_L39_0064C7E0 */
