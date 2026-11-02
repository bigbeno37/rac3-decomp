#include "common.h"

/* localdecomp:start func_L39_0060A7D0 */
/* The wrapper returns the underlying stream position. */
extern s32 func_L01_004D56A8(s32);
/* Actual multiplayer resident engine: returns (*(s32 *)(*(s32 *)(arg0 + 0x40) + 4) == 0). */
extern s32 func_00143370(s32);
s32 func_L39_0060A7D0(s32 arg0) {
    s32 result = 0;
    if (func_L01_004D56A8(arg0) == 0) {
        result = func_00143370(arg0) != 0;
    }
    return result;
}
/* localdecomp:end func_L39_0060A7D0 */
