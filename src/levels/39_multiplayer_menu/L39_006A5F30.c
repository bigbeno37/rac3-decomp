#include "common.h"

INCLUDE_ASM("asm/levels", func_L39_006A5F30);

INCLUDE_ASM("asm/levels", func_L39_006A5FE0);

INCLUDE_ASM("asm/levels", func_L39_006A6078);

INCLUDE_ASM("asm/levels", func_L39_006A6108);

INCLUDE_ASM("asm/levels", func_L39_006A61A0);

INCLUDE_ASM("asm/levels", func_L39_006A6290);

INCLUDE_ASM("asm/levels", func_L39_006A6470);

INCLUDE_ASM("asm/levels", func_L39_006A65B8);

INCLUDE_ASM("asm/levels", func_L39_006A6778);

INCLUDE_ASM("asm/levels", func_L39_006A6938);

LINKER_REMNANT("asm/levels", func_L39_006A69A0);

INCLUDE_ASM("asm/levels", func_L39_006A69C0);

LINKER_REMNANT("asm/levels", func_L39_006A6F98);

/* localdecomp:start func_L39_006A6FA0 */
extern u8 D_L39_0047DA80[];
extern void func_L39_00688400(void *, s32);
void func_L39_006A6FA0(void *arg0, s32 arg1) {
    *(void **)((u8 *)arg0 + 0x60) = D_L39_0047DA80;
    func_L39_00688400(arg0, arg1);
}
/* localdecomp:end func_L39_006A6FA0 */

INCLUDE_ASM("asm/levels", func_L39_006A6FC8);

INCLUDE_ASM("asm/levels", func_L39_006A7178);

INCLUDE_ASM("asm/levels", func_L39_006A72B0);

INCLUDE_ASM("asm/levels", func_L39_006A74B8);

INCLUDE_ASM("asm/levels", func_L39_006A74F8);
