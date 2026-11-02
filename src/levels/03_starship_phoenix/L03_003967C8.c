#include "common.h"

INCLUDE_ASM("asm/levels", func_L03_003967C8);

INCLUDE_ASM("asm/levels", func_L03_00396860);

INCLUDE_ASM("asm/levels", func_L03_00396E00);

INCLUDE_ASM("asm/levels", func_L03_00396FF0);

INCLUDE_ASM("asm/levels", func_L03_00397138);

INCLUDE_ASM("asm/levels", func_L03_003971B0);

INCLUDE_ASM("asm/levels", func_L03_00397260);

INCLUDE_ASM("asm/levels", func_L03_00397390);

INCLUDE_ASM("asm/levels", func_L03_003975A8);

/* localdecomp:start func_L03_00397608 */
extern u32 D_L03_00142C10[];
extern u8 D_L03_001DE308[8];
extern void *D_L03_001DE310;
extern void func_L03_0034B348(s32);
extern void func_L01_004450F0(void *, s32, s32);
void func_L03_00397608(s32 index) {
    if (D_L03_00142C10[0] & 0x80000) {
        func_L03_0034B348(D_L03_001DE308[index]);
        func_L01_004450F0(D_L03_001DE310, 3, 0);
    }
}
/* localdecomp:end func_L03_00397608 */

INCLUDE_ASM("asm/levels", func_L03_00397650);
