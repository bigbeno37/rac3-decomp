/* Retail-derived draft; never linked.
 * Five frame/save/restore words differ; all allocation, error-reporting and zeroing
 * instructions agree. Callee arguments and pointer returns were independently audited. Low
 * and High remain unresolved; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern void *func_L39_004BEED8(s32 size);
extern void func_L39_004BC6C8(s32, s32, s32, char *, s32);
extern void *func_0011D534(void *, s32, s32);
void *func_L39_00504528(void) {
    void *result;
    void *self = func_L39_004BEED8(0x60);
    if (self == 0) {
        func_L39_004BC6C8(6, 0x72, 0x21, 0, 0);
        result = 0;
    } else {
        func_0011D534(self, 0, 0x60);
        result = self;
    }
    return result;
}
