#include "common.h"

INCLUDE_ASM("asm/levels", func_L24_00356100);

INCLUDE_ASM("asm/levels", func_L24_00356168);

INCLUDE_ASM("asm/levels", func_L24_003572D8);

INCLUDE_ASM("asm/levels", func_L24_00357588);

/* localdecomp:start func_L24_00357600 */
typedef struct {
    u8 pad[0x8C0];
    u32 f8C0, f8C4, f8C8, f8CC;
} S_L24_00357600_data;
typedef struct {
    u8 pad[0x68];
    S_L24_00357600_data *data;
} S_L24_00357600;
void func_L24_00357600(S_L24_00357600 *arg0) {
    S_L24_00357600_data *p = arg0->data;
    p->f8C0 = 0x7F96006B;
    p->f8C4 = 0x6FFFFFFF;
    p->f8C8 = 0x2096006B;
    p->f8CC = 0x00450030;
}
/* localdecomp:end func_L24_00357600 */

INCLUDE_ASM("asm/levels", func_L24_00357638);

INCLUDE_ASM("asm/levels", func_L24_003577D0);

INCLUDE_ASM("asm/levels", func_L24_00357930);

INCLUDE_ASM("asm/levels", func_L24_00357BB0);

INCLUDE_ASM("asm/levels", func_L24_00357BC0);

INCLUDE_ASM("asm/levels", func_L24_00357D50);

INCLUDE_ASM("asm/levels", func_L24_00357F70);

INCLUDE_ASM("asm/levels", func_L24_00358860);

/* localdecomp:start func_L24_00358D10 */
s32 func_L24_00358D10(u8 *arg0) {
    return arg0[0x20] == 8;
}
/* localdecomp:end func_L24_00358D10 */

INCLUDE_ASM("asm/levels", func_L24_00358D20);

INCLUDE_ASM("asm/levels", func_L24_00358D78);
