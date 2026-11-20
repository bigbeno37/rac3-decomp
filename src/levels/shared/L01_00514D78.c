#include "common.h"

/* localdecomp:start func_L01_00514D78 */
extern s32 func_003EDAF8(void *p, s32 mask);

INCLUDE_ASM("asm/levels", func_L01_00514DD0);
s32 func_L01_00514D78(void *o, s32 i, u8 *out) {
    if ((u32)i < 0x23) {
        if (*(s32 *)(i * 4 + *(s32 *)o + 0x50) != 0) {
            s32 y = i * 4 + 0x50;
            *out = func_003EDAF8(*(void **)(y + *(s32 *)o), 1);
            return 1;
        }
    }
    return 0;
}
/* localdecomp:end func_L01_00514D78 */


LINKER_REMNANT("asm/levels", func_L01_00515308);
