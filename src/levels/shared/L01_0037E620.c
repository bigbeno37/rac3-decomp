#include "common.h"
#include "vu0.h"

/* localdecomp:start func_L01_0037E620 */
extern f32 func_0038DAB8(f32, f32);
extern u8 D_L01_001E1D70[8];
extern u8 D_L01_002B3AC0[];
extern void func_L01_0040B858(void *beam, void *numbers);

void func_L01_0037E620(u8 *a0) {
    u8 *s = *(u8 **)(a0 + 0x68);

    *(f32 *)(s + 0x30) = func_0038DAB8(*(f32 *)(s + 0x30), 0.017453292f);
    func_L01_0040B858(D_L01_001E1D70, D_L01_002B3AC0);
}
/* localdecomp:end func_L01_0037E620 */

/* localdecomp:start func_L01_0037E670 */
typedef struct { u8 b0; u8 b1; u8 pad2[0xEE]; } Rec_0037E670;
extern u8 D_001425C0[];
extern Rec_0037E670 D_L01_002C5600[];
extern u8 *D_L01_00221098[];
extern u8 D_L01_001D66B0;
extern u8 D_L01_001E1D70_0037E670;
extern u8 D_L01_001E1D80;
__asm__(".extern D_L01_001D66B0, 16");
__asm__(".extern D_L01_001E1D70_0037E670, 16");
__asm__(".extern D_L01_001E1D80, 16");
extern f32 func_003824E0(f32, f32);
extern s32 func_00382498(s32, s32);
extern void func_0038CDF8(void *, void *, void *, f32);
extern u8 *func_L01_004713C8(void *, void *, s32, u32, s32, s32, s32, f32, f32, f32, s32);
void func_L01_0037E670(void) {
    vu0_v4 pos;
    u32 c;
    s32 i;
    c = 0x40FF20;
    if ((D_L01_002C5600 + D_001425C0[0x6F])->b1 == 1) c = 0x404040;
    if ((D_L01_002C5600 + D_001425C0[0x6F])->b1 == 2) c = 0x4080FF;
    if ((D_L01_002C5600 + D_001425C0[0x6F])->b1 == 3) c = 0x404040;
    if ((D_L01_002C5600 + D_001425C0[0x6F])->b1 >= 4) c = 0x808080;
    for (i = 0; i < 40; i++) {
        s32 n, a;
        f32 s;
        u8 *r;
        func_0038CDF8(&pos, &D_L01_001E1D70_0037E670, &D_L01_001E1D80, func_003824E0(0.0f, 0.75f));
        n = (func_00382498(10, 15) * 5 + 2) / 6;
        a = func_00382498(-5, 5);
        s = func_003824E0(0.125f, 0.5f) * 210000.0f;
        r = func_L01_004713C8(&pos, &D_L01_001D66B0, n, c, a, 0x2F, 0, s, func_003824E0(0.35f, 0.75f) * 210000.0f, 0.0f, 0);
        if (r != 0) {
            r[2] = *D_L01_00221098[0x160 / 4];
            if ((D_L01_002C5600 + D_001425C0[0x6F])->b1 == 1) r[2] = D_L01_00221098[0x16C / 4][1];
            if ((D_L01_002C5600 + D_001425C0[0x6F])->b1 == 2) r[2] = D_L01_00221098[0x160 / 4][0];
            if ((D_L01_002C5600 + D_001425C0[0x6F])->b1 == 3) r[2] = D_L01_00221098[0x16C / 4][3];
            if ((D_L01_002C5600 + D_001425C0[0x6F])->b1 >= 4) r[2] = D_L01_00221098[0x16C / 4][3];
        }
    }
}
/* localdecomp:end func_L01_0037E670 */
