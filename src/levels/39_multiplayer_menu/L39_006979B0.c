#include "common.h"

INCLUDE_ASM("asm/levels", func_L39_006979B0);

INCLUDE_ASM("asm/levels", func_L39_00697B28);

INCLUDE_ASM("asm/levels", func_L39_00697B80);

INCLUDE_ASM("asm/levels", func_L39_00697E10);

INCLUDE_ASM("asm/levels", func_L39_006980F8);

INCLUDE_ASM("asm/levels", func_L39_006983B8);

LINKER_REMNANT("asm/levels", func_L39_00698C18);

INCLUDE_ASM("asm/levels", func_L39_00698C28);

LINKER_REMNANT("asm/levels", func_L39_00698F48);

/* localdecomp:start func_L39_00698F50 */
extern u8 D_L39_0047CEB0[];
extern void func_L39_00688400(void *, s32);
void func_L39_00698F50(void *arg0, s32 arg1) {
    *(void **)((u8 *)arg0 + 0x60) = D_L39_0047CEB0;
    func_L39_00688400(arg0, arg1);
}
/* localdecomp:end func_L39_00698F50 */

INCLUDE_ASM("asm/levels", func_L39_00698F78);

INCLUDE_ASM("asm/levels", func_L39_006990C0);

INCLUDE_ASM("asm/levels", func_L39_00699298);

INCLUDE_ASM("asm/levels", func_L39_006992D8);
