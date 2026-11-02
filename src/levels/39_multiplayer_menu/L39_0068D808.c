#include "common.h"

INCLUDE_ASM("asm/levels", func_L39_0068D808);

LINKER_REMNANT("asm/levels", func_L39_0068D9A8);

/* localdecomp:start func_L39_0068D9B0 */
extern unsigned char D_L39_0047C620[];
extern void func_L39_00688400(void *, s32);

void func_L39_0068D9B0(void *arg0, s32 arg1) {
    *(void **)((u8 *)arg0 + 0x60) = D_L39_0047C620;
    func_L39_00688400(arg0, arg1);
}
/* localdecomp:end func_L39_0068D9B0 */

INCLUDE_ASM("asm/levels", func_L39_0068D9D8);
