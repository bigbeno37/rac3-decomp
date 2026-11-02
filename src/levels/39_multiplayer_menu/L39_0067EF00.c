#include "common.h"

INCLUDE_ASM("asm/levels", func_L39_0067EF00);

INCLUDE_ASM("asm/levels", func_L39_0067EFA0);

/* localdecomp:start func_L39_0067F010 */
typedef struct {
    u8 pad[0x50];
    f32 x;
    f32 y;
} S_L39_0067F010;

void func_L39_0067F010(S_L39_0067F010 *self, f32 x, f32 y) {
    self->x = x;
    self->y = y;
}
/* localdecomp:end func_L39_0067F010 */

/* localdecomp:start func_L39_0067F020 */
typedef struct {
    u8 pad[0x58];
    f32 x;
    f32 y;
} S_L39_0067F020;

void func_L39_0067F020(S_L39_0067F020 *self, f32 x, f32 y) {
    self->x = x;
    self->y = y;
}
/* localdecomp:end func_L39_0067F020 */

INCLUDE_ASM("asm/levels", func_L39_0067F030);

/* localdecomp:start func_L39_0067F050 */
extern s32 D_001DBC50;
extern s32 D_001DBC58;

void func_L39_0067F050(s32 arg0) {
    D_001DBC50 = arg0;
    D_001DBC58 = -1;
}
/* localdecomp:end func_L39_0067F050 */

INCLUDE_ASM("asm/levels", func_L39_0067F060);

INCLUDE_ASM("asm/levels", func_L39_0067F0A0);

INCLUDE_ASM("asm/levels", func_L39_0067F100);

INCLUDE_ASM("asm/levels", func_L39_0067F168);

INCLUDE_ASM("asm/levels", func_L39_0067F1B0);

INCLUDE_ASM("asm/levels", func_L39_0067F210);

INCLUDE_ASM("asm/levels", func_L39_0067F3B8);

INCLUDE_ASM("asm/levels", func_L39_0067F648);

INCLUDE_ASM("asm/levels", func_L39_0067F6E8);

INCLUDE_ASM("asm/levels", func_L39_0067F7B0);
