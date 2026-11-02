#include "common.h"

/* localdecomp:start func_L39_006A04F8 */
typedef struct {
    u8 pad[0x2A8];
    s32 f2A8, f2AC, f2B0;
    u8 f2B4;
    u8 pad2B5[3];
    s32 f2B8, f2BC, f2C0;
    u8 f2C4, f2C5, f2C6, f2C7, f2C8;
} S_6A04F8;
void func_L39_006A04F8(S_6A04F8 *p, s32 a1, s32 a2, s32 a3, u8 a4, s32 a5, s32 a6, s32 a7, u8 a8, u8 a9, u8 a10, u8 a11, u8 a12) {
    p->f2C4 = a12;
    p->f2A8 = a2;
    p->f2AC = a7;
    p->f2B0 = a1;
    p->f2B4 = a4;
    p->f2B8 = a3;
    p->f2BC = a5;
    p->f2C0 = a6;
    p->f2C7 = a8;
    p->f2C5 = a9;
    p->f2C6 = a10;
    p->f2C8 = a11;
}
/* localdecomp:end func_L39_006A04F8 */

INCLUDE_ASM("asm/levels", func_L39_006A0540);

LINKER_REMNANT("asm/levels", func_L39_006A05F0);

INCLUDE_ASM("asm/levels", func_L39_006A05F8);

LINKER_REMNANT("asm/levels", func_L39_006A0948);

/* localdecomp:start func_L39_006A0950 */
extern u8 D_L39_0047D628[];
extern void func_L39_00688400(void *, s32);
void func_L39_006A0950(void *arg0, s32 arg1) {
    *(void **)((u8 *)arg0 + 0x60) = D_L39_0047D628;
    *(s32 *)((u8 *)arg0 + 0x2B0) = -1;
    *(s32 *)((u8 *)arg0 + 0x2B4) = -1;
    *(s32 *)((u8 *)arg0 + 0x2B8) = -1;
    *(s32 *)((u8 *)arg0 + 0x2BC) = -1;
    *(s32 *)((u8 *)arg0 + 0x2C4) = -1;
    *(s32 *)((u8 *)arg0 + 0x2C8) = -1;
    *(s32 *)((u8 *)arg0 + 0x2C0) = -1;
    func_L39_00688400(arg0, arg1);
}
/* localdecomp:end func_L39_006A0950 */

INCLUDE_ASM("asm/levels", func_L39_006A0998);

INCLUDE_ASM("asm/levels", func_L39_006A0AC0);

/* localdecomp:start func_L39_006A0BC8 */
extern void func_L39_0068ADC8(void *);
extern void func_L39_006A0BC8(void *);

extern void func_L39_0067F168();
void func_L39_006A0BC8(void *p) {
    func_L39_0067F168(p);
    func_L39_0068ADC8(p);
}
/* localdecomp:end func_L39_006A0BC8 */

INCLUDE_ASM("asm/levels", func_L39_006A0BF8);
