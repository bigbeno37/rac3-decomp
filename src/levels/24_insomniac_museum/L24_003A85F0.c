#include "common.h"

INCLUDE_ASM("asm/levels", func_L24_003A85F0);

INCLUDE_ASM("asm/levels", func_L24_003A8668);

/* localdecomp:start func_L24_003A8898 */
extern s32 func_L01_00452FB0(void *, void *, s32, s32, s32);
s32 func_L24_003A8898(u8 *object)
{
    if ((u32)(object[0x20] - 10) >= 2) {
        func_L01_00452FB0(object, *(u8 **)(object + 0x68) + 0x160, 0, 0, 0);
    } else {
        object[0xA8] = 0xFF;
    }
    return 0;
}
/* localdecomp:end func_L24_003A8898 */

INCLUDE_ASM("asm/levels", func_L24_003A88E8);

INCLUDE_ASM("asm/levels", func_L24_003A8998);
