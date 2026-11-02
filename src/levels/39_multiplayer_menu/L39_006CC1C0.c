#include "common.h"

INCLUDE_ASM("asm/levels", func_L39_006CC1C0);

/* localdecomp:start func_L39_006CC238 */
extern s32 func_L01_004DFE80(s32 arg0);
extern s32 func_L39_006CC268(s32 arg0, s32 arg1);

s32 func_L39_006CC238(s32 arg0, s32 arg1)
{
    return func_L39_006CC268(func_L01_004DFE80(arg0), arg1);
}
/* localdecomp:end func_L39_006CC238 */

INCLUDE_ASM("asm/levels", func_L39_006CC268);

/* localdecomp:start func_L39_006CC2A8 */
extern s32 func_L01_004DFE80(s32 arg0);
extern void func_L39_006CC2E8(s32 arg0, s32 *values, s32 value);

void func_L39_006CC2A8(s32 arg0, s32 *values, s32 value)
{
    func_L39_006CC2E8(func_L01_004DFE80(arg0), values, value);
}
/* localdecomp:end func_L39_006CC2A8 */

/* localdecomp:start func_L39_006CC2E8 */
extern void func_L39_006CC1C0(s32 index, s32 *mask, s32 *shift);
void func_L39_006CC2E8(s32 index, s32 *values, s32 value)
{
    s32 mask;
    s32 shift;
    func_L39_006CC1C0(index, &mask, &shift);
    *values = (*values & ~mask) | (value << shift);
}
/* localdecomp:end func_L39_006CC2E8 */

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
