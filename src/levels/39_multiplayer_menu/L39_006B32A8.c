#include "common.h"

INCLUDE_ASM("asm/levels", func_L39_006B32A8);

LINKER_REMNANT("asm/levels", func_L39_006B3300);

INCLUDE_ASM("asm/levels", func_L39_006B3308);

LINKER_REMNANT("asm/levels", func_L39_006B41E0);

/* localdecomp:start func_L39_006B41E8 */
extern u8 D_L39_0047E438[];
extern void func_L39_00688400(void *, s32);

void func_L39_006B41E8(void *arg0, s32 arg1) {
    *(void **)((u8 *)arg0 + 0x60) = D_L39_0047E438;
    func_L39_00688400(arg0, arg1);
}
/* localdecomp:end func_L39_006B41E8 */

INCLUDE_ASM("asm/levels", func_L39_006B4210);

/* localdecomp:start func_L39_006B4898 */
extern void func_L39_0068ADC8(void *);
extern void func_L39_006B4898(void *);

extern void func_L39_0067F168();
void func_L39_006B4898(void *p) {
    func_L39_0067F168(p);
    func_L39_0068ADC8(p);
}
/* localdecomp:end func_L39_006B4898 */

INCLUDE_ASM("asm/levels", func_L39_006B48C8);
