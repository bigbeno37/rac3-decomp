#include "common.h"

/* localdecomp:start func_L39_005C1310 */
extern u8 D_L39_001FE020[];
extern u8 D_L39_001F0A00[];
extern void func_L01_0045E690(s32, long);
extern void func_00193888(s32, s32, void (*)(s32, long), unsigned long);
void func_L39_005C1310(void) {
    u8 *p = D_L39_001FE020;
    u8 *s = D_L39_001F0A00;
    *(u32 *)(p + 0x90) = 0xFFFFFFFF;
    func_00193888(*(s32 *)(s + 0x79B8) + *(s32 *)(s + 0x79A4), 0, func_L01_0045E690, (u32)(p + 0x90));
}
/* localdecomp:end func_L39_005C1310 */

INCLUDE_ASM("asm/levels", func_L39_005C1368);
