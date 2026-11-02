#include "common.h"

LINKER_REMNANT("asm/levels", func_L39_005D62A8);

INCLUDE_ASM("asm/levels", func_L39_005D62B8);

LINKER_REMNANT("asm/levels", func_L39_005D63C0);

/* localdecomp:start func_L39_005D6408 */
extern s32 D_001D5C98;
extern s32 D_001A5810[];
void func_L39_005D6408(void) {
    if (!*(u8 *)0x002429AE) {
        s32 old = D_001D5C98;
        D_001D5C98 = old + 1;
        if ((old + 1) % 50 == 0 && D_001A5810[0]) {
            *(s32 *)0x002413A8 = old + 11;
        }
    }
}
/* localdecomp:end func_L39_005D6408 */
