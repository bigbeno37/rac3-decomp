#include "common.h"

LINKER_REMNANT("asm/levels", func_L01_00460270);

INCLUDE_ASM("asm/levels", func_L01_004602C0);

/* localdecomp:start func_L01_004606A8 */
extern u8 D_L01_001CD0C0[];
void func_L01_004606A8(s32 arg0)
{
    if (arg0 == 0) arg0 = (s32)D_L01_001CD0C0;
    *(s16 *)(arg0 + 0x18E) = 0;
    *(s32 *)(arg0 + 0x190) = 0;
}
/* localdecomp:end func_L01_004606A8 */

LINKER_REMNANT("asm/levels", func_L01_004606C8);

INCLUDE_ASM("asm/levels", func_L01_004606E8);

INCLUDE_ASM("asm/levels", func_L01_00460778);

LINKER_REMNANT("asm/levels", func_L01_00460810);

INCLUDE_ASM("asm/levels", func_L01_00460818);
