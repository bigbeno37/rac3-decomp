#include "common.h"

/* localdecomp:start func_L39_005D7360 */
extern u8 D_L39_001D7EE8[8];
extern void func_003E82F8(s32);
extern s32 func_L01_00516AA0(s32, s32, s32);
extern s32 func_L01_00479578(s32);
extern s32 func_L01_00516010(s32);
s32 func_L39_005D7360(s32 i) {
    if (D_L39_001D7EE8[i] != 0) {
        func_003E82F8(i);
        func_L01_00516AA0(0x90000, 1, 0);
        func_L01_00516010(func_L01_00479578(i));
        return 1;
    }
    return 0;
}
/* localdecomp:end func_L39_005D7360 */
