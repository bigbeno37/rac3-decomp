#include "common.h"

INCLUDE_ASM("asm/levels", func_L39_006CC1C0);

INCLUDE_ASM("asm/levels", func_L39_006CC238);

INCLUDE_ASM("asm/levels", func_L39_006CC268);

INCLUDE_ASM("asm/levels", func_L39_006CC2A8);

INCLUDE_ASM("asm/levels", func_L39_006CC2E8);

/* localdecomp:start func_L39_006CC340 */
void func_L39_006CC340(s32 *values, s32 index, s32 value)
{
    *(s32 *)((s32)values + (index << 2)) = value;
}
/* localdecomp:end func_L39_006CC340 */

/* localdecomp:start func_L39_006CC350 */
s32 func_L39_006CC350(s32 *values, s32 index)
{
    values += index;
    return *values;
}
/* localdecomp:end func_L39_006CC350 */

INCLUDE_ASM("asm/levels", func_L39_006CC360);

INCLUDE_ASM("asm/levels", func_L39_006CC458);

INCLUDE_ASM("asm/levels", func_L39_006CC4F8);

INCLUDE_ASM("asm/levels", func_L39_006CC648);

INCLUDE_ASM("asm/levels", func_L39_006CC798);
