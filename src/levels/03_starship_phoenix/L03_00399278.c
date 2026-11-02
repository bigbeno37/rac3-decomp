#include "common.h"

INCLUDE_ASM("asm/levels", func_L03_00399278);

INCLUDE_ASM("asm/levels", func_L03_003993A0);

INCLUDE_ASM("asm/levels", func_L03_00399868);

INCLUDE_ASM("asm/levels", func_L03_003998E8);

INCLUDE_ASM("asm/levels", func_L03_00399BD8);

INCLUDE_ASM("asm/levels", func_L03_00399C68);

/* localdecomp:start func_L03_00399CE0 */
typedef struct {
    u8 pad0[0x40];
    f32 value40;
    u8 pad44[0x3B];
    u8 state7F;
} Child_399CE0;
typedef struct {
    u8 pad0[0x18];
    f32 value18;
    u8 pad1C[0x4C];
    Child_399CE0 *child68;
    u8 pad6C[0x29];
    u8 active95;
} Object_399CE0;
extern void func_L01_004450F0(void *, s32, s32);
void func_L03_00399CE0(Object_399CE0 *obj) {
    if (obj->active95) {
        obj->value18 = obj->child68->value40;
        obj->child68->state7F = 15;
        func_L01_004450F0(obj, 0, 1);
    }
}
/* localdecomp:end func_L03_00399CE0 */
