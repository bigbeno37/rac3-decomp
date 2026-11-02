#include "common.h"

/* localdecomp:start func_L08_00431BE8 */
typedef struct {
    u8 pad[0x12C];
    s32 field_12C;
} S_L08_00431BE8;

extern void func_L03_0043BE98(void *, S_L08_00431BE8 *, s32, s32, s32);

void func_L08_00431BE8(void *a0, S_L08_00431BE8 *a1, s32 a2, s32 a3) {
    func_L03_0043BE98(a0, a1, a2, a3, a1->field_12C != 0);
}
/* localdecomp:end func_L08_00431BE8 */
