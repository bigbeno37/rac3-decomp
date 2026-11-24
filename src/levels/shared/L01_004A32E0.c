#include "common.h"

typedef struct {
    u8 pad0[0x34];
    u16 f34;
    u8 pad36[0xB2 - 0x36];
    s16 fB2;
    u8 padB4[0x100 - 0xB4];
} Type_004A3A90;

typedef struct {
    u8 pad0[0x4954];
    s32 f4954;
    u8 pad1[0x4B90 - 0x4958];
    u8 f4B90[1];
    u8 pad2[0x6D28 - 0x4B91];
    u8 fX[1];
} S_func_0049A930;
typedef struct O_49A988 O_49A988;
typedef struct { u8 p0[0xC]; void (*fn)(O_49A988 *); } VT_49A988;
struct O_49A988 { s32 w0; VT_49A988 *vt; };
typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 pad[3];
} Ent_0049AB20;
typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
    u8 f14;
    u8 pad[3];
} S_2EC7A8;
typedef struct { u8 b[16]; } V16_48DCD8;
typedef struct {
    s32 v[12][3];
} S_236B80;
typedef struct {
    s32 x0;
    s32 x4;
    s32 x8;
    s32 xC;
    s32 x10;
    u8 x14;
    u8 pad[3];
} E_49E5B8;
typedef struct {
    s32 offset;
    s32 data;
    u16 size;
    s16 kind;
    s16 arg1;
    s16 arg0;
} Entry_4A0270;
typedef struct {
    s32 count;
    Entry_4A0270 entries[1];
} Table_4A0270;

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    u8 fC;
    u8 pad[11];
} S_2EC760_0049E648;

/* localdecomp:start func_L01_004A32E0 */
extern s32 func_00381FF0(s32);
extern f32 D_L01_001DC0E8_004A32E0;
__asm__(".extern D_L01_001DC0E8_004A32E0, 16");
extern void *func_0011A264(void *, s32, s32);
extern s32 func_0011B868(u8 *);
extern s32 func_0038E548(u8 *, s32, f32);

void func_L01_004A32E0(s32 id, u8 *buf, f32 scale, f32 maxw) {
    u8 idx[0x40];
    u8 *s;
    s32 n;
    s32 len;
    s32 i;
    s32 j;
    f32 w;

    func_0011A264(idx, 0, 0x40);
    n = 0;
    s = (u8 *)func_00381FF0(id);
    len = func_0011B868(s);
    if (len > 0x3F) len = 0x3F;
    for (i = 0; i <= len; i++) {
        buf[i] = s[i];
        if (i > 0 && buf[i] == 0x20 && (buf[i - 1] & 0x80) == 0) {
            idx[n++] = i;
        }
    }
    j = n - 1;
    if (j < 0) j = 0;
    while (j > 0 && idx[j] >= 0x3C) j--;
    w = (f32)func_0038E548(buf, -1, scale) / D_L01_001DC0E8_004A32E0;
    while (j >= 0 && maxw < w) {
        buf[idx[j] + 1] = 0x2E;
        buf[idx[j] + 2] = 0x2E;
        buf[idx[j] + 3] = 0x2E;
        buf[idx[j] + 4] = 0;
        j--;
        w = (f32)func_0038E548(buf, -1, scale) / D_L01_001DC0E8_004A32E0;
    }
}
/* localdecomp:end func_L01_004A32E0 */

/* localdecomp:start func_L01_004A34A8 */
typedef struct {
    u8 pad0[0x34];
    u16 f34;
    u8 pad36[0x100 - 0x36];
} Ent_004A34A8;
extern s32 D_L01_001D9730_004A34A8;
extern s32 D_L01_001D9734_004A34A8;
extern s32 D_L01_001DF988_004A34A8;
__asm__(".extern D_L01_001DF988_004A34A8, 16");
extern Ent_004A34A8 *D_L01_001E001C_004A34A8;
__asm__(".extern D_L01_001E001C_004A34A8, 16");
extern Ent_004A34A8 *D_L01_001E0024_004A34A8;
__asm__(".extern D_L01_001E0024_004A34A8, 16");
extern void func_003A0EC0(s32, s32, s32, s32, s32);
extern s32 func_00392260(s32, s32, s32);

void func_L01_004A34A8(s32 a0, s32 a1) {
    Ent_004A34A8 *p;
    func_003A0EC0(7, 1, 0, 0, 0);
    D_L01_001D9734_004A34A8 = a1;
    D_L01_001D9730_004A34A8 = a0;
    D_L01_001DF988_004A34A8 = 0;
    func_00392260(0, 0, 0);
    for (p = D_L01_001E001C_004A34A8; p < D_L01_001E0024_004A34A8; p++) {
        p->f34 |= 0x80;
    }
}
/* localdecomp:end func_L01_004A34A8 */

/* localdecomp:start func_L01_004A3548 */
typedef struct {
    u8 pad0[0x25C];
    s32 w25C;
    s32 w260;
    s32 w264;
} S_4A3548;
extern S_4A3548 D_L01_001E7580;
extern Type_004A3A90 *D_L01_001E001C;
extern Type_004A3A90 *D_L01_001E0024;
__asm__(".extern D_L01_001E001C, 16");
__asm__(".extern D_L01_001E0024, 16");
extern s32 func_003A0F98(s32, s32);
extern s32 func_00392260(s32, s32, s32);

void func_L01_004A3548(void) {
    Type_004A3A90 *p;

    func_003A0F98(0, 0);
    func_00392260(D_L01_001E7580.w25C, D_L01_001E7580.w260, D_L01_001E7580.w264);
    for (p = D_L01_001E001C; p < D_L01_001E0024; p++) {
        p->f34 &= 0xFF7F;
    }
}
/* localdecomp:end func_L01_004A3548 */

/* localdecomp:start func_L01_004A35C0 */
extern void func_0038CB78(unsigned int *dst, unsigned int val, int size);
extern char D_L01_00236B90[];
extern char D_L01_00237800[];
extern char D_L01_001E0D30[] __attribute__((section(".sdata")));

/* from rac2-decomp's func_L00_003588A8, renamed */
void func_L01_004A35C0(void)
{
    func_0038CB78((unsigned int *)D_L01_00236B90, 0, 0xC70);
    func_0038CB78((unsigned int *)D_L01_00237800, 0, 0xC70);
    func_0038CB78((unsigned int *)D_L01_001E0D30, 0, 0x40);
}
/* localdecomp:end func_L01_004A35C0 */

/* localdecomp:start func_L01_004A3610 */
typedef int u128_004A3610 __attribute__((mode(TI)));
typedef struct {
    u8 pad[0x38];
    s32 a, b;
} Obj_004A3610;
typedef struct {
    u8 pad0[0x25C0];
    Obj_004A3610 *object; /* 0x25C0 */
    u8 pad1[0x20];
    u8 mode;              /* 0x25E4 */
    u8 pad2[0x287A - 0x25E5];
    s16 count;            /* 0x287A */
} Hero_004A3610;
typedef struct {
    s32 active;
    u8 pad[12];
    f32 a[4];             /* 0x10 */
    f32 b[4];             /* 0x20 */
    s32 obj_a, obj_b, word; /* 0x30 */
    u8 bytes[6];          /* 0x3C */
    u8 pad2[2];
    f32 values[4];        /* 0x44 */
    s32 mode;             /* 0x54 */
    Obj_004A3610 *object; /* 0x58 */
    s32 count;            /* 0x5C */
    u8 data[0x404];       /* 0x60 */
    u8 map[0x7FF];        /* 0x464 */
    u8 pad3;
    s32 other_count, other_word; /* 0xC64 */
} Snap_004A3610;
typedef struct {
    u8 pad[0x40];
    u8 bytes[3];
    u8 pad2[0xB4 - 0x43];
    s32 word;
} S1A30B0_004A3610;
typedef struct {
    u8 pad[0x48];
    s16 count;
} S1CCFD0_004A3610;
extern Hero_004A3610 D_001A4BE0_004A3610;
__asm__(".extern D_001A4BE0_004A3610, 16");
extern Snap_004A3610 D_L01_00237800_004A3610;
extern Snap_004A3610 D_L01_00236B90_004A3610;
extern s32 D_001D545C;
__asm__(".extern D_001D545C, 16");
extern u8 D_001BBC40[][16];
extern u8 D_001BBE90[];
extern S1A30B0_004A3610 D_001A30B0_004A3610;
extern S1CCFD0_004A3610 D_001CCFD0_004A3610;
extern s32 D_L01_001F3F40[];
extern u8 D_L01_001DF9E4, D_L01_001DF9E5, D_L01_001DF9E6;
__asm__(".extern D_L01_001DF9E4, 16");
__asm__(".extern D_L01_001DF9E5, 16");
__asm__(".extern D_L01_001DF9E6, 16");
extern f32 D_L01_001DF9E8, D_L01_001DF9EC, D_L01_001DF9F0, D_L01_001DF9F4;
__asm__(".extern D_L01_001DF9E8, 16");
__asm__(".extern D_L01_001DF9EC, 16");
__asm__(".extern D_L01_001DF9F0, 16");
__asm__(".extern D_L01_001DF9F4, 16");
extern void func_0038CC88(void *, void *, s32);
extern void func_0039EC28(s32, s32);

/* from rac2-decomp's func_002DF3F8 */
void func_L01_004A3610(void *a, void *b) {
    u8 *src;
    s32 i;
    s32 level;
    if (D_001A4BE0_004A3610.mode == 4)
        return;
    func_0038CC88(D_L01_00237800_004A3610.data, D_L01_00236B90_004A3610.data, 0x404);
    level = D_001D545C;
    src = D_L01_00236B90_004A3610.map;
    for (i = 0; i < 0x7FF; i++, src++) {
        u32 v = *src;
        u8 id = v;
        if (id != 0 && (id == 1 || (D_001BBC40[level][id - 2] & 0x80))) {
            u8 *p;
            D_L01_00237800_004A3610.map[i] = v;
            if (i & 1) {
                p = &D_001BBE90[(i >> 1) + level * 1024];
                if (((*p >> 4) & 7) != 7)
                    *p += 16;
            } else {
                p = &D_001BBE90[(i >> 1) + level * 1024];
                if ((*p & 7) != 7)
                    *p += 1;
            }
        }
    }
    D_L01_00237800_004A3610.active = 1;
    *(u128_004A3610 *)D_L01_00237800_004A3610.a = *(u128_004A3610 *)a;
    *(u128_004A3610 *)D_L01_00237800_004A3610.b = *(u128_004A3610 *)b;
    {
        Obj_004A3610 *obj = D_001A4BE0_004A3610.object;
        D_L01_00237800_004A3610.obj_a = obj->a;
        D_L01_00237800_004A3610.obj_b = obj->b;
        D_L01_00237800_004A3610.mode = D_001A4BE0_004A3610.mode;
        D_L01_00237800_004A3610.object = obj;
        D_L01_00237800_004A3610.count = D_001A4BE0_004A3610.count;
        D_L01_00237800_004A3610.word = D_001A30B0_004A3610.word;
        D_L01_00237800_004A3610.bytes[0] = D_001A30B0_004A3610.bytes[0];
        D_L01_00237800_004A3610.bytes[1] = D_001A30B0_004A3610.bytes[1];
        D_L01_00237800_004A3610.bytes[2] = D_001A30B0_004A3610.bytes[2];
        D_L01_00237800_004A3610.other_count = D_001CCFD0_004A3610.count;
        D_L01_00237800_004A3610.other_word = D_L01_001F3F40[0];
        D_L01_00237800_004A3610.bytes[3] = D_L01_001DF9E4;
        D_L01_00237800_004A3610.bytes[4] = D_L01_001DF9E5;
        D_L01_00237800_004A3610.bytes[5] = D_L01_001DF9E6;
        D_L01_00237800_004A3610.values[0] = D_L01_001DF9E8;
        D_L01_00237800_004A3610.values[1] = D_L01_001DF9EC;
        D_L01_00237800_004A3610.values[2] = D_L01_001DF9F0;
        D_L01_00237800_004A3610.values[3] = D_L01_001DF9F4;
    }
    func_0039EC28(0, -1);
}
/* localdecomp:end func_L01_004A3610 */
