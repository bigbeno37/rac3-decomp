#include "common.h"

INCLUDE_ASM("asm/levels", func_L39_006A4510);

INCLUDE_ASM("asm/levels", func_L39_006A4CB8);

INCLUDE_ASM("asm/levels", func_L39_006A50F8);

INCLUDE_ASM("asm/levels", func_L39_006A55B0);

LINKER_REMNANT("asm/levels", func_L39_006A57A0);

INCLUDE_ASM("asm/levels", func_L39_006A57B0);

LINKER_REMNANT("asm/levels", func_L39_006A5A70);

/* localdecomp:start func_L39_006A5A78 */
extern u8 D_L39_0047D978[];
extern void func_L39_00688400(void *, s32);
void func_L39_006A5A78(void *arg0, s32 arg1) {
    *(void **)((u8 *)arg0 + 0x60) = D_L39_0047D978;
    func_L39_00688400(arg0, arg1);
}
/* localdecomp:end func_L39_006A5A78 */

INCLUDE_ASM("asm/levels", func_L39_006A5AA0);

INCLUDE_ASM("asm/levels", func_L39_006A5AF0);

/* localdecomp:start func_L39_006A5CB0 */
extern void func_L39_0068ADC8(void *);
extern void func_L39_006A5CB0(void *);

extern void func_L39_0067F168();
void func_L39_006A5CB0(void *p) {
    func_L39_0067F168(p);
    func_L39_0068ADC8(p);
}
/* localdecomp:end func_L39_006A5CB0 */

INCLUDE_ASM("asm/levels", func_L39_006A5CE0);
