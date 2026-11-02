/* Retail-derived draft; never linked.
 * 11 differing words; 52 bytes vs retail 48, swapped v0/v1, grouped/reversed base stores
 * and empty return delay slot. All 15 PAL placements agree, but all 17 US placements shift
 * the fixed globals by +0x180. The preserved absolute-address draft is PAL-only. Low and
 * High stopped without an integrated match. Ordinary C remains plausible; retain
 * INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern u8 D_L39_001FC340[];
void func_L39_005A8CC8(void) {
    s32 value = -1;
    u8 *p = D_L39_001FC340;
    *(s32 *)0x002402A0 = value;
    *(s32 *)(p + 0x18) = value;
    *(s32 *)0x002402D0 = value;
    *(s32 *)0x002402E0 = value;
    *(s32 *)(p + 0x30) = value;
}
