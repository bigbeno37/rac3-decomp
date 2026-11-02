/* Retail-derived draft; never linked.
 * 5 instruction-order differences at +0x04,+0x08,+0x0C,+0x10,+0x18; 72 bytes; full
 * unmasked audit confirms all remaining words and both call targets agree. Low and High
 * stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern s32 func_L39_004F6BF0(void *, void *, s32 *, s32, s32, s32);
extern void func_L39_004F4F18(void **);
s32 func_L39_004D1480(void *handle) {
    s32 buffer[4];
    s32 length;
    s32 result;
    result = func_L39_004F6BF0(handle, buffer, &length, 0, 0, 0);
    func_L39_004F4F18(&handle);
    return result;
}
