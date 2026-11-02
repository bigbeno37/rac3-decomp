#include "common.h"

INCLUDE_ASM("asm/levels", func_L07_003ADF68);

INCLUDE_ASM("asm/levels", func_L07_003AE410);

INCLUDE_ASM("asm/levels", func_L07_003AE618);

INCLUDE_ASM("asm/levels", func_L07_003AEAA0);

/* localdecomp:start func_L07_003AECA8 */
void func_L07_00334740();
void func_L07_003AEAA0(s32, s32);

void func_L07_003AECA8(s32 arg0) {
    func_L07_00334740();
    func_L07_003AEAA0(arg0, 1);
}
/* localdecomp:end func_L07_003AECA8 */

/* localdecomp:start func_L07_003AECD8 */
extern void func_L07_00334800(s32);
extern void func_L07_003AEAA0(s32, s32);

void func_L07_003AECD8(s32 arg0) {
    u8 *self = (u8 *)arg0;
    u8 *data = *(u8 **)(self + 0x24);
    u8 *state = *(u8 **)(self + 0x68);
    *(f32 *)(self + 0x2C) = *(f32 *)(data + 0x24);
    *(s32 *)(state + 0x108) = -1;
    func_L07_00334800(arg0);
    func_L07_003AEAA0(arg0, 2);
}
/* localdecomp:end func_L07_003AECD8 */

INCLUDE_ASM("asm/levels", func_L07_003AED20);

INCLUDE_ASM("asm/levels", func_L07_003AED80);
