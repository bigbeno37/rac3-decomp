#include "common.h"

INCLUDE_ASM("asm/levels", func_L03_00397698);

INCLUDE_ASM("asm/levels", func_L03_003979F0);

INCLUDE_ASM("asm/levels", func_L03_00397B38);

INCLUDE_ASM("asm/levels", func_L03_00397BF0);

INCLUDE_ASM("asm/levels", func_L03_00397C78);

INCLUDE_ASM("asm/levels", func_L03_00397CF8);

/* localdecomp:start func_L03_00397E78 */
typedef struct S_397E78_child {
    u8 pad[0x1C];
    u8 value;
} S_397E78_child;
typedef struct S_397E78 {
    u8 pad[0x68];
    S_397E78_child *child;
} S_397E78;
extern S_397E78 *D_L03_001DE310;
void func_L03_00397E78(s32 value) {
    S_397E78_child *child = D_L03_001DE310->child;
    if (child != 0) {
        child->value = value;
    }
}
/* localdecomp:end func_L03_00397E78 */
