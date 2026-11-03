#include "common.h"

INCLUDE_ASM("asm/levels", func_L07_003E2B80);

INCLUDE_ASM("asm/levels", func_L07_003E2DB0);

INCLUDE_ASM("asm/levels", func_L07_003E2EC8);

INCLUDE_ASM("asm/levels", func_L07_003E2F48);

INCLUDE_ASM("asm/levels", func_L07_003E3050);

INCLUDE_ASM("asm/levels", func_L07_003E31F8);

INCLUDE_ASM("asm/levels", func_L07_003E3220);

INCLUDE_ASM("asm/levels", func_L07_003E3388);

INCLUDE_ASM("asm/levels", func_L07_003E3458);

/* localdecomp:start func_L07_003E34D8 */
extern void func_L07_003BB148(s32);
extern void func_L01_004AA7E8(u8 *, s32);
extern void func_L01_004450F0(u8 *, s32, s32);
void func_L07_003E34D8(u8 *obj)
{
    func_L07_003BB148((s32)obj);
    *(s32 *)(obj + 0x98) = 0;
    obj[0xA8] = 0xFF;
    *(u16 *)(obj + 0x34) = (*(u16 *)(obj + 0x34) | 0x41) & 0xEFFF;
    func_L01_004AA7E8(obj, 1);
    *(u16 *)(obj + 0x34) |= 6;
    func_L01_004450F0(obj, 1, -1);
}
/* localdecomp:end func_L07_003E34D8 */
