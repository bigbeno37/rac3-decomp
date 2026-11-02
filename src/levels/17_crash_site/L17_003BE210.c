#include "common.h"

INCLUDE_ASM("asm/levels", func_L17_003BE210);

/* localdecomp:start func_L17_003BE2F8 */
extern void func_L01_004450F0(void *, s32, s32);
void func_L17_003BE2F8(void *arg0) {
    func_L01_004450F0(arg0, 1, -1);
    *(u8 *)((u8 *)arg0 + 0x30) = 0xFF;
    *(u16 *)((u8 *)arg0 + 0x34) &= 0xFFFE;
}
/* localdecomp:end func_L17_003BE2F8 */

INCLUDE_ASM("asm/levels", func_L17_003BE338);
