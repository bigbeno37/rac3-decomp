#include "common.h"

INCLUDE_ASM("asm/levels", func_L39_00518FE0);

INCLUDE_ASM("asm/levels", func_L39_00519018);

LINKER_REMNANT("asm/levels", func_L39_00519050);

INCLUDE_ASM("asm/levels", func_L39_00519058);

INCLUDE_ASM("asm/levels", func_L39_005190C8);

INCLUDE_ASM("asm/levels", func_L39_005190E8);

INCLUDE_ASM("asm/levels", func_L39_005192A8);

INCLUDE_ASM("asm/levels", func_L39_005192F8);

INCLUDE_ASM("asm/levels", func_L39_00519340);

INCLUDE_ASM("asm/levels", func_L39_00519388);

INCLUDE_ASM("asm/levels", func_L39_005193C0);

INCLUDE_ASM("asm/levels", func_L39_00519408);

/* localdecomp:start func_L39_00519438 */
extern void func_L39_00518A60(s32);

s32 func_L39_00519438(s32 arg0) {
    s32 result;
    if (arg0 == 0) {
        result = -1;
    } else {
        result = ((s32 (*)(s32))func_L39_00518A60)(arg0 & 0xFFFF);
    }
    return result;
}
/* localdecomp:end func_L39_00519438 */
