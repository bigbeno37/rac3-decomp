/*
 * Unresolved retail-derived draft; not linked.
 * Eleven scheduling instructions differ in the 100-byte body. The retained byte-array draft copies eight bytes, adjusts parity, compares and clears the buffer, and returns zero or 0x21E. Helper arguments and nonzero-size pointer returns were audited. US remains unchecked.
 * Existing flags: -O2 -G8 -fopt-stack -mno-check-zero-division.
 * Low and High remain unresolved; retain INCLUDE_ASM.
 */
#include "common.h"
extern void *func_L39_004F7510(void *, const void *, u32);
extern void func_L39_005085B0(void *);
extern s32 func_L39_004F7560(const void *, const void *, u32);
extern void *func_L39_004F74E8(void *, s32, u32);
s32 func_L39_00508620(const void *input) {
    u8 buffer[8];
    s32 result;
    func_L39_004F7510(buffer, input, 8);
    func_L39_005085B0(buffer);
    result = func_L39_004F7560(buffer, input, 8);
    if (result != 0) result = 0x21E;
    func_L39_004F74E8(buffer, 0, 8);
    return result;
}
