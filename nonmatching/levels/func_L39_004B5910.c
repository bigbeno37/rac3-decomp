/* Retail-derived draft; never linked.
 * 2 differing instructions: initial andi/sll order swapped; High 2 and 3 reproduce Low
 * best bytes. Low and High stopped without a complete integrated match; ordinary C remains
 * plausible and INCLUDE_ASM is retained.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"

u32 func_L39_004B5910(u32 value)
{
    u32 result;
    u32 part;
    result = value << 24;
    part = value & 0xFF00;
    part <<= 8;
    result |= part;
    part = value >> 8;
    part &= 0xFF00;
    result |= part;
    part = value >> 24;
    return result | part;
}
