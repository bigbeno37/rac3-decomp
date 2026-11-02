#include "common.h"

INCLUDE_ASM("asm/levels", func_L39_006AF7A8);

INCLUDE_ASM("asm/levels", func_L39_006AF7D0);

LINKER_REMNANT("asm/levels", func_L39_006AF808);

INCLUDE_ASM("asm/levels", func_L39_006AF810);

LINKER_REMNANT("asm/levels", func_L39_006AFF40);

/* localdecomp:start func_L39_006AFF48 */
extern void func_L39_00688400(void *, s32);
extern u8 D_L39_0047DFA0[];

void func_L39_006AFF48(void *arg0, s32 arg1) {
    *(void **)((u8 *)arg0 + 0x60) = D_L39_0047DFA0;
    func_L39_00688400(arg0, arg1);
}
/* localdecomp:end func_L39_006AFF48 */

INCLUDE_ASM("asm/levels", func_L39_006AFF70);

/* localdecomp:start func_L39_006B03B8 */
extern void func_L39_0068ADC8(void *);
extern void func_L39_006B03B8(void *);

extern void func_L39_0067F168();
void func_L39_006B03B8(void *p) {
    func_L39_0067F168(p);
    func_L39_0068ADC8(p);
}
/* localdecomp:end func_L39_006B03B8 */

INCLUDE_ASM("asm/levels", func_L39_006B03E8);
