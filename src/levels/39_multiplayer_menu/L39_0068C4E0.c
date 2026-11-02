#include "common.h"

INCLUDE_ASM("asm/levels", func_L39_0068C4E0);

LINKER_REMNANT("asm/levels", func_L39_0068C708);

INCLUDE_ASM("asm/levels", func_L39_0068C718);

INCLUDE_ASM("asm/levels", func_L39_0068C918);

INCLUDE_ASM("asm/levels", func_L39_0068CBE8);

INCLUDE_ASM("asm/levels", func_L39_0068CD28);

INCLUDE_ASM("asm/levels", func_L39_0068CDA8);

LINKER_REMNANT("asm/levels", func_L39_0068D1C0);

/* localdecomp:start func_L39_0068D1C8 */
extern u8 D_L39_0047C520[];
extern void func_L39_00688400(void *, s32);
void func_L39_0068D1C8(void *arg0, s32 arg1) {
    *(void **)((u8 *)arg0 + 0x60) = D_L39_0047C520;
    func_L39_00688400(arg0, arg1);
}
/* localdecomp:end func_L39_0068D1C8 */

INCLUDE_ASM("asm/levels", func_L39_0068D1F0);

INCLUDE_ASM("asm/levels", func_L39_0068D230);
