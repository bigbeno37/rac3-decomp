#include "common.h"

INCLUDE_ASM("asm/levels", func_L39_0069C138);

LINKER_REMNANT("asm/levels", func_L39_0069C708);

/* localdecomp:start func_L39_0069C710 */
extern unsigned char D_L39_0047D110[];
extern void func_L39_00688400(void *, s32);
void func_L39_0069C710(void *arg0, s32 arg1) {
    *(void **)((u8 *)arg0 + 0x60) = D_L39_0047D110;
    func_L39_00688400(arg0, arg1);
}
/* localdecomp:end func_L39_0069C710 */

INCLUDE_ASM("asm/levels", func_L39_0069C738);

INCLUDE_ASM("asm/levels", func_L39_0069C788);

/* localdecomp:start func_L39_0069CE20 */
extern void func_L39_0068ADC8(void *);
extern void func_L39_0069CE20(void *);

extern void func_L39_0067F168();
void func_L39_0069CE20(void *p) {
    func_L39_0067F168(p);
    func_L39_0068ADC8(p);
}
/* localdecomp:end func_L39_0069CE20 */

INCLUDE_ASM("asm/levels", func_L39_0069CE50);
