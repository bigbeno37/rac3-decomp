/* Retail-derived draft; never linked.
 * 2 instruction words: initial andi/sll order reversed; literal raw offsets 0 and 4; no
 * relocations. Low and High completed without an integrated match; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"

u32 func_L39_00518A38(u32 value)
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
