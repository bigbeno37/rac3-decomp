#include "common.h"

INCLUDE_ASM("asm/levels", func_L07_003D8B18);

INCLUDE_ASM("asm/levels", func_L07_003D8E28);

INCLUDE_ASM("asm/levels", func_L07_003D90A8);

/* localdecomp:start func_L07_003D9218 */
extern void func_L07_003D9298(s32);
extern void func_L07_003D9330(s32);
extern void func_L01_004450F0(s32, s32, s32);

void func_L07_003D9218(s32 arg0) {
    s32 *state = *(s32 **)(arg0 + 0x68);
    state[0x2C / 4] = 0;
    state[0x28 / 4] = 0;
    func_L07_003D9298(arg0);
    func_L07_003D9330(arg0);
    func_L01_004450F0(arg0, 1, -1);
}
/* localdecomp:end func_L07_003D9218 */

/* localdecomp:start func_L07_003D9260 */
void func_L01_004450F0(s32, s32, s32);
void func_L07_003D93F0();

void func_L07_003D9260(s32 arg0) {
    func_L07_003D93F0();
    func_L01_004450F0(arg0, 4, -1);
}
/* localdecomp:end func_L07_003D9260 */

INCLUDE_ASM("asm/levels", func_L07_003D9298);

INCLUDE_ASM("asm/levels", func_L07_003D9330);

INCLUDE_ASM("asm/levels", func_L07_003D93F0);

INCLUDE_ASM("asm/levels", func_L07_003D9548);

INCLUDE_ASM("asm/levels", func_L07_003D9630);
