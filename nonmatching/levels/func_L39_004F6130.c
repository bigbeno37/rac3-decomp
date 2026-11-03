/* Retail-derived draft; never linked.
 * Twelve register-allocation and scheduling words differ in the 104-byte body. Three
 * High formulations produced identical bytes. The append status, pointer reloads and
 * cleanup order are preserved. Fill and release results remain unused under conservative
 * void declarations; their return contracts are not established for every path.
 * Protected allocator internals are only partly decoded. US remains unchecked. Retain
 * INCLUDE_ASM.
 * Existing file flags preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern s32 func_L39_004F6198(void *, void *, u32, s32);
extern void func_L39_004F74E8(void *, s32, u32);
extern void func_L39_004F7620(void *);
s32 func_L39_004F6130(void *self, void **value, u32 size) {
    s32 result = func_L39_004F6198(self, *value, size, 0);
    if (result != 0) {
        func_L39_004F74E8(*value, 0, size);
        func_L39_004F7620(*value);
        *value = 0;
    }
    return result;
}
