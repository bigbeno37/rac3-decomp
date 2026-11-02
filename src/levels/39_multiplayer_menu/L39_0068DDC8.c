#include "common.h"

INCLUDE_ASM("asm/levels", func_L39_0068DDC8);

INCLUDE_ASM("asm/levels", func_L39_0068E0E8);

INCLUDE_ASM("asm/levels", func_L39_0068E110);

LINKER_REMNANT("asm/levels", func_L39_0068E148);

INCLUDE_ASM("asm/levels", func_L39_0068E160);

LINKER_REMNANT("asm/levels", func_L39_0068E9E8);

/* localdecomp:start func_L39_0068E9F0 */
extern void func_L39_00688400(void *, s32);
extern u8 D_L39_0047C720[];

void func_L39_0068E9F0(void *arg0, s32 arg1) {
    *(void **)((u8 *)arg0 + 0x60) = D_L39_0047C720;
    func_L39_00688400(arg0, arg1);
}
/* localdecomp:end func_L39_0068E9F0 */

INCLUDE_ASM("asm/levels", func_L39_0068EA18);
