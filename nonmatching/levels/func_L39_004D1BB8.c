/* Retail-derived draft; never linked.
 * 5 unmasked differing words at offsets 0x04, 0x08, 0x0C, 0x10, 0x18: entry scheduling
 * only; both resolved calls and remaining instructions agree. Low and High stopped without
 * an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern s32 func_L39_004F6E18(void *, void *, s32 *, s32, s32, s32);
extern void func_L39_004F4F18(void **);
s32 func_L39_004D1BB8(void *handle) {
    u8 buffer[16];
    s32 length;
    s32 result;
    result = func_L39_004F6E18(handle, buffer, &length, 0, 0, 0);
    func_L39_004F4F18(&handle);
    return result;
}
