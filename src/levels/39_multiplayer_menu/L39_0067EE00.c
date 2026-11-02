#include "common.h"

/* localdecomp:start func_L39_0067EE00 */
typedef struct Init_67EE00 {
    s32 field0;
    u8 pad4[8];
    u8 fieldC;
    u8 padD[3];
    s32 field10;
    u8 field14;
    u8 pad15[0x33];
    s32 field48;
    u8 pad4C[4];
    s32 field50, field54;
    f32 field58, field5C;
    void *field60;
} Init_67EE00;
extern u8 D_L39_0047B5D0[];
Init_67EE00 *func_L39_0067EE00(Init_67EE00 *p) {
    p->field0 = 0;
    p->field60 = D_L39_0047B5D0;
    p->field14 = 0;
    p->field50 = 0;
    p->field54 = 0;
    p->field58 = 1.0f;
    p->field5C = 1.0f;
    p->field48 = 0;
    p->field10 = 0;
    p->fieldC = 0;
    return p;
}
/* localdecomp:end func_L39_0067EE00 */

INCLUDE_ASM("asm/levels", func_L39_0067EE40);

INCLUDE_ASM("asm/levels", func_L39_0067EEC8);
