#include "common.h"

INCLUDE_ASM("asm/levels", func_L39_006AE3D8);

INCLUDE_ASM("asm/levels", func_L39_006AE8F8);

INCLUDE_ASM("asm/levels", func_L39_006AED18);

INCLUDE_ASM("asm/levels", func_L39_006AEF20);

INCLUDE_ASM("asm/levels", func_L39_006AEF70);

INCLUDE_ASM("asm/levels", func_L39_006AF070);

LINKER_REMNANT("asm/levels", func_L39_006AF160);

INCLUDE_ASM("asm/levels", func_L39_006AF168);

LINKER_REMNANT("asm/levels", func_L39_006AF2E8);

/* localdecomp:start func_L39_006AF2F0 */
extern void func_L39_00688400(void *, s32);
extern u8 D_L39_0047DEA0[];

void func_L39_006AF2F0(void *arg0, s32 arg1) {
    *(void **)((u8 *)arg0 + 0x60) = D_L39_0047DEA0;
    func_L39_00688400(arg0, arg1);
}
/* localdecomp:end func_L39_006AF2F0 */

INCLUDE_ASM("asm/levels", func_L39_006AF318);

INCLUDE_ASM("asm/levels", func_L39_006AF570);

INCLUDE_ASM("asm/levels", func_L39_006AF5D8);
