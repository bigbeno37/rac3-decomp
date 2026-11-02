#include "common.h"

/* localdecomp:start func_L01_004AB2C0 */
void func_L01_004AB2C0(s32 value, long raw_address)
{
    s32 address = (s32)raw_address;
    if (address != 0) {
        *(s32 *)address = value;
    }
}
/* localdecomp:end func_L01_004AB2C0 */
