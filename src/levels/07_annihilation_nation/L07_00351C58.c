#include "common.h"

INCLUDE_ASM("asm/levels", func_L07_00351C58);

INCLUDE_ASM("asm/levels", func_L07_00352510);

INCLUDE_ASM("asm/levels", func_L07_00352758);

/* localdecomp:start func_L07_00352A58 */
void func_L07_00334740();
void func_L07_00352AC8(s32, s32);

void func_L07_00352A58(s32 arg0) {
    func_L07_00334740();
    func_L07_00352AC8(arg0, 1);
}
/* localdecomp:end func_L07_00352A58 */

INCLUDE_ASM("asm/levels", func_L07_00352A88);

INCLUDE_ASM("asm/levels", func_L07_00352AC8);

INCLUDE_ASM("asm/levels", func_L07_00352E88);

INCLUDE_ASM("asm/levels", func_L07_00352F30);

INCLUDE_ASM("asm/levels", func_L07_00352FF0);

INCLUDE_ASM("asm/levels", func_L07_00353178);

INCLUDE_ASM("asm/levels", func_L07_003532D0);

INCLUDE_ASM("asm/levels", func_L07_00353378);

INCLUDE_ASM("asm/levels", func_L07_00353498);

/* localdecomp:start func_L07_003535B0 */
extern s32 func_00382498(s32, s32);
extern void func_L07_00352AC8(s32, s32);

void func_L07_003535B0(s32 arg0) {
    func_L07_00352AC8(arg0, func_00382498(0, 1) + 0x15);
}
/* localdecomp:end func_L07_003535B0 */

INCLUDE_ASM("asm/levels", func_L07_003535E8);

INCLUDE_ASM("asm/levels", func_L07_00353730);

INCLUDE_ASM("asm/levels", func_L07_003537B0);

INCLUDE_ASM("asm/levels", func_L07_00353820);

INCLUDE_ASM("asm/levels", func_L07_003538A0);

INCLUDE_ASM("asm/levels", func_L07_00353980);

INCLUDE_ASM("asm/levels", func_L07_00353AB0);

INCLUDE_ASM("asm/levels", func_L07_00353D20);

INCLUDE_ASM("asm/levels", func_L07_00353D60);

/* localdecomp:start func_L07_00353D88 */
typedef struct {
    u8 pad[0x468];
    u8 field_468;
    u8 field_469;
} State_353D88;

typedef struct {
    u8 pad[0x68];
    State_353D88 *state;
} Object_353D88;

void func_L07_00353D88(Object_353D88 *object) {
    State_353D88 *state = object->state;
    state->field_468 = 0;
    state->field_469 = 0;
}
/* localdecomp:end func_L07_00353D88 */

INCLUDE_ASM("asm/levels", func_L07_00353D98);

INCLUDE_ASM("asm/levels", func_L07_00353E10);

INCLUDE_ASM("asm/levels", func_L07_00353FF0);
