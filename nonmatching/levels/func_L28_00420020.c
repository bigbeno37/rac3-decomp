/* Retail-derived draft; never linked.
 * Low check.py: 1 diff, final sb at 0x0042003C exceeds 28-byte catalogue range;
 * independent High audit confirms full 32-byte object equals retail with zero relocations.
 * Low and High completed without an integrated match; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"

void func_L28_00420020(u8 *object, s32 enabled)
{
    if (enabled)
        object[0xBE] |= 4;
    else
        object[0xBE] &= 0xFB;
}
