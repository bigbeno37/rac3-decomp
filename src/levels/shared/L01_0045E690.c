#include "common.h"

/* localdecomp:start func_L01_0045E690 */
void func_L01_0045E690(s32 value, long address) {
    s32 destination = (s32)address;
    if (destination != 0) {
        *(s32 *)destination = value;
    }
}
/* localdecomp:end func_L01_0045E690 */
