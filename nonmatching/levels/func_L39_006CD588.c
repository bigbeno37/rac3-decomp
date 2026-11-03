/* Retail-derived draft; never linked.
 * Ten register-allocation words differ in the 104-byte body; three High helper
 * formulations produce identical bytes. The two-input extent calculation and all four
 * helper arguments are supported by actual callees. An existing caller declares only one
 * argument although retail forwards its incoming second argument; that caller contract
 * requires correction before any integration. US remains unchecked. Retain INCLUDE_ASM.
 * Existing file flags preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern u32 func_L39_006E16A0(u32, s32, s32, u32);
static __inline__ u32 align_extent(const u32 address, const u32 alignment) {
    const u32 remainder = address % alignment;
    u32 aligned = address;
    if (remainder != 0) aligned += alignment - remainder;
    return aligned;
}
u32 func_L39_006CD588(u32 base, s32 count) {
    u32 end = base + func_L39_006E16A0(base, count * 2, 0xD0, 4);
    end = align_extent(end, 4);
    return end + count * 8 - base;
}
