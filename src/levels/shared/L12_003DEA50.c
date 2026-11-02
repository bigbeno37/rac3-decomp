#include "common.h"

/* localdecomp:start func_L12_003DEA50 */
extern void *D_L12_001DF220;
void *func_L12_003DEA50(void *unused, s32 selector, s32 *size)
{
    if (selector == 0) {
        *size = 4;
        return &D_L12_001DF220;
    }
    return 0;
}
/* localdecomp:end func_L12_003DEA50 */
