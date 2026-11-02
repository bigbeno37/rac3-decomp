#include "common.h"

/* localdecomp:start func_L09_003CAC70 */
typedef struct { u8 pad[0x98]; s32 field98; } Child_CAC70;
typedef struct {
    u8 pad0[0x19E0]; s32 field19E0;
    u8 pad1[0x25C0 - 0x19E4]; Child_CAC70 *child;
    u8 pad2[0x25E5 - 0x25C4]; u8 field25E5;
    u8 pad3[7]; u8 field25ED;
    u8 pad4[5]; u8 field25F3;
    u8 pad5[0x280C - 0x25F4]; s32 field280C;
} State_CAC70;
extern State_CAC70 D_L09_001A4BE0;
void func_L09_003CAC70(s32 arg0) {
    s32 code = 0x1D;
    s32 one = 1;
    s32 mode = *(s32 *)0x001D545C;
    State_CAC70 *state = &D_L09_001A4BE0;
    state->field280C = code;
    state->field25ED = one;
    if (mode == 0x18) state->field25E5 = one;
    state->child->field98 = 0;
    state->field19E0 = arg0;
    state->field25F3 = one;
}
/* localdecomp:end func_L09_003CAC70 */

INCLUDE_ASM("asm/levels", func_L09_003CACB0);

/* localdecomp:start func_L09_003CAE58 */
s32 func_L09_003CAE58(u8 *obj) {
    return obj[32] == 2;
}
/* localdecomp:end func_L09_003CAE58 */

INCLUDE_ASM("asm/levels", func_L09_003CAE68);

INCLUDE_ASM("asm/levels", func_L09_003CB6C0);

INCLUDE_ASM("asm/levels", func_L09_003CB7B0);
