#include "common.h"

INCLUDE_ASM("asm/levels", func_L39_006098A8);

INCLUDE_ASM("asm/levels", func_L39_00609998);

INCLUDE_ASM("asm/levels", func_L39_006099F0);

INCLUDE_ASM("asm/levels", func_L39_00609BD8);

INCLUDE_ASM("asm/levels", func_L39_00609CE8);

/* localdecomp:start func_L39_00609FF8 */
extern void func_L39_00609638(s32);
extern s32 func_00126270(s32);
s32 func_L39_00609FF8(void *arg0) {
    func_L39_00609638(5);
    *(volatile u32 *)0x1000B420 = 0;
    *(volatile u32 *)0x1000B410 = 0;
    *(volatile u32 *)0x1000B430 = 0;
    func_00126270(*(s32 *)((u8 *)arg0 + 0x40));
    return 1;
}
/* localdecomp:end func_L39_00609FF8 */

/* localdecomp:start func_L39_0060A050 */
void func_00126280(s32);
void func_001262A0(s32);

s32 func_L39_0060A050(void *arg0) {
    s32 temp_s1;

    func_001262A0((*(s32 *)((u8 *)arg0 + 0x40)));
    temp_s1 = ((*(s32 *)((u8 *)arg0 + 0x10)) << 0xB) + (*(s32 *)((u8 *)arg0 + 0x14));
    func_00126280((*(s32 *)((u8 *)arg0 + 0x40)));
    return temp_s1;
}
/* localdecomp:end func_L39_0060A050 */

INCLUDE_ASM("asm/levels", func_L39_0060A0A0);
