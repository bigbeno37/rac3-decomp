#include "common.h"

INCLUDE_ASM("asm/levels", func_L39_00695328);

INCLUDE_ASM("asm/levels", func_L39_00695368);

LINKER_REMNANT("asm/levels", func_L39_00695520);

INCLUDE_ASM("asm/levels", func_L39_00695530);

/* localdecomp:start func_L39_00695798 */
extern u8 D_L39_0047CC68[];
extern void func_L39_00688400(void *, s32);
void func_L39_00695798(void *arg0, s32 arg1) {
    *(void **)((u8 *)arg0 + 0x60) = D_L39_0047CC68;
    func_L39_00688400(arg0, arg1);
}
/* localdecomp:end func_L39_00695798 */

INCLUDE_ASM("asm/levels", func_L39_006957C0);

INCLUDE_ASM("asm/levels", func_L39_00695AE0);

INCLUDE_ASM("asm/levels", func_L39_00695B28);

INCLUDE_ASM("asm/levels", func_L39_00695BA0);
