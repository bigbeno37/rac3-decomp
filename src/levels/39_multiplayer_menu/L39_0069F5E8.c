#include "common.h"

INCLUDE_ASM("asm/levels", func_L39_0069F5E8);

INCLUDE_ASM("asm/levels", func_L39_0069F618);

LINKER_REMNANT("asm/levels", func_L39_0069F648);

INCLUDE_ASM("asm/levels", func_L39_0069F650);

LINKER_REMNANT("asm/levels", func_L39_0069FD08);

/* localdecomp:start func_L39_0069FD10 */
extern u8 D_L39_0047D510[];
extern void func_L39_00688400(void *, s32);
void func_L39_0069FD10(void *arg0, s32 arg1) {
    *(void **)((u8 *)arg0 + 0x60) = D_L39_0047D510;
    func_L39_00688400(arg0, arg1);
}
/* localdecomp:end func_L39_0069FD10 */

INCLUDE_ASM("asm/levels", func_L39_0069FD38);

INCLUDE_ASM("asm/levels", func_L39_0069FD88);

/* localdecomp:start func_L39_006A0380 */
extern void func_L39_0068ADC8(void *);
extern void func_L39_006A0380(void *);

extern void func_L39_0067F168();
void func_L39_006A0380(void *p) {
    func_L39_0067F168(p);
    func_L39_0068ADC8(p);
}
/* localdecomp:end func_L39_006A0380 */

INCLUDE_ASM("asm/levels", func_L39_006A03B0);
