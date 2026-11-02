#include "common.h"

/* localdecomp:start func_L39_0059D8F0 */
extern s32 func_0012BF88(s32, s32, void *, s32 *);
extern s32 func_0012C190(s32);
s32 func_L39_0059D8F0(s32 handle) {
    s32 count;
    s32 result = -1;
    if (handle >= 0) {
        result = func_0012BF88(handle, 0, 0, &count);
        if (result < 0) return result;
        result = func_0012C190(handle);
        if (result >= 0) result = 0;
    }
    return result;
}
/* localdecomp:end func_L39_0059D8F0 */

INCLUDE_ASM("asm/levels", func_L39_0059D940);

INCLUDE_ASM("asm/levels", func_L39_0059D978);

INCLUDE_ASM("asm/levels", func_L39_0059DAD0);
