/* Retail-derived draft; never linked.
 * Low check: 1 diff; exact 12-byte getter, catalogue span 16 includes trailing 0xCDCDCDCD
 * at 004F16BC. Independent raw audit confirms zero relocations and literal offsets +4/+4.
 * Low and High completed without an integrated match; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
s32 func_L39_004F16B0(void *arg0) {
    return *(s32 *)((u8 *)*(void **)((u8 *)arg0 + 4) + 4);
}
