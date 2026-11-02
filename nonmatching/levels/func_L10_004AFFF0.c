/* Retail-derived semantic draft; never linked.
 * The 16-byte catalogue extent excludes the live return delay-slot store at 0x004B0000.
 * Retail confirms a 20-byte function. The semantic draft includes that separately
 * catalogued delay slot and is uncompiled.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"

/* Uncompiled semantic draft including the separately catalogued delay slot. */
void func_L10_004AFFF0(s32 **object, s32 first, s32 second)
{
    object[3][2] = first;
    object[3][3] = second;
}
