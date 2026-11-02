#include "common.h"

/* localdecomp:start func_L39_006CC8F0 */
typedef struct { s8 active; u8 pad[3]; s32 value1; s32 value2; } Entry_6CC8F0;
typedef struct { u8 pad[0x74]; Entry_6CC8F0 entries[0]; } Object_6CC8F0;
void func_L39_006CC8F0(Object_6CC8F0 *self, s32 index, s32 value1, s32 value2) {
    self->entries[index].active = 1;
    self->entries[index].value1 = value1;
    self->entries[index].value2 = value2;
}
/* localdecomp:end func_L39_006CC8F0 */

/* localdecomp:start func_L39_006CC918 */
void func_L39_006CC918(s32 arg0, s32 arg1) {
    *(s8 *)((u8 *)(((arg1 * 0xC) + arg0)) + 0x74) = 0;
}
/* localdecomp:end func_L39_006CC918 */

INCLUDE_ASM("asm/levels", func_L39_006CC930);

INCLUDE_ASM("asm/levels", func_L39_006CCA88);

LINKER_REMNANT("asm/levels", func_L39_006CCC48);

/* localdecomp:start func_L39_006CCC58 */
void *func_L39_006CCC58(void *arg0) {
    *(s32 *)((u8 *)arg0 + 0x28) = 0;
    (*(s32 *)arg0) = -1;
    *(s8 *)((u8 *)arg0 + 0x2C) = 0;
    *(s8 *)((u8 *)arg0 + 0x2D) = 0;
    *(s8 *)((u8 *)arg0 + 0x2E) = 0;
    *(s8 *)((u8 *)arg0 + 0x2F) = 0;
    *(s8 *)((u8 *)arg0 + 0x30) = 0;
    *(s8 *)((u8 *)arg0 + 0x31) = 0;
    return arg0;
}
/* localdecomp:end func_L39_006CCC58 */

/* localdecomp:start func_L39_006CCC88 */
void func_0011D534(void *, s32, s32);

void func_L39_006CCC88(void *arg0) {
    *(s32 *)((u8 *)arg0 + 0x28) = 0;
    *(s8 *)((u8 *)arg0 + 0x2C) = 0;
    *(s8 *)((u8 *)arg0 + 0x2D) = 0;
    *(s8 *)((u8 *)arg0 + 0x2E) = 0;
    *(s8 *)((u8 *)arg0 + 0x2F) = 0;
    *(s8 *)((u8 *)arg0 + 0x30) = 0;
    *(s8 *)((u8 *)arg0 + 0x31) = 0;
    (*(s32 *)arg0) = -1;
    func_0011D534(arg0 + 0x34, 0, 0x20);
    func_0011D534(arg0 + 0x54, 0, 0xC4);
    func_0011D534(arg0 + 0x118, 0, 0x1C);
}
/* localdecomp:end func_L39_006CCC88 */
