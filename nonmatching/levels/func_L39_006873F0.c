/* Retail-derived draft; never linked.
 * Seven words differ: six allocation/prologue differences and unused retail argument
 * setup. The High draft preserves the empty callee's established void(void) declaration;
 * Low's six-difference draft misdeclares it. Low and High remain unresolved; retain
 * INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern void func_L39_006A5F28(void);
extern void func_L39_00687268(void *, s32);
typedef struct {
    u8 unknown[0x2B0];
    u8 value;
} Child_6873F0;
typedef struct {
    u8 unknown[0xA8];
    Child_6873F0 *child;
} Parent_6873F0;
s32 func_L39_006873F0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    Parent_6873F0 *self = arg0;
    Child_6873F0 *child = self->child;
    s32 result;
    if (child == 0) {
        result = 0;
    } else {
        func_L39_006A5F28();
        child->value = arg3;
        func_L39_00687268(self, 0x11);
        result = 1;
    }
    return result;
}
