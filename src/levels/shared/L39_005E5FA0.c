#include "common.h"

INCLUDE_ASM("asm/levels", func_L39_005E5FA0);

INCLUDE_ASM("asm/levels", func_L39_005E5FE8);

INCLUDE_ASM("asm/levels", func_L39_005E6060);

/* localdecomp:start func_L39_005E60D8 */
extern s32 func_L39_005F3548();
extern u8 D_L39_001A5810[];
void func_L39_005E60D8(s32 buttons) {
    if (buttons & 0xA040) {
        func_L39_005F3548(4, 0, 0);
        D_L39_001A5810[5] = !D_L39_001A5810[5];
    }
}
/* localdecomp:end func_L39_005E60D8 */

INCLUDE_ASM("asm/levels", func_L39_005E6118);
