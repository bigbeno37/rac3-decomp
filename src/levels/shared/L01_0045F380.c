#include "common.h"

/* localdecomp:start func_L01_0045F380 */
extern s16 D_L01_001CCFD0[];
void func_L01_0045F380(s32 value)
{
    if (D_L01_001CCFD0[0x50 / 2] & 0x8000)
        D_L01_001CCFD0[0x52 / 2] = value;
    if (D_L01_001CCFD0[0xC8 / 2] & 0x8000)
        D_L01_001CCFD0[0xCA / 2] = value;
    if (D_L01_001CCFD0[0x78 / 2] & 0x8000)
        D_L01_001CCFD0[0x7A / 2] = value;
}
/* localdecomp:end func_L01_0045F380 */
