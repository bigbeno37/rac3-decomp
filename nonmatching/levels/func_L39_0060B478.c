/* Retail-derived draft; never linked.
 * 2 instruction differences at +8,+12: 64-bit constant synthesis at all 15 PAL placements.
 * Low and High stopped without an integrated match. Ordinary C remains plausible; retain
 * INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern void func_003A9440(s32, unsigned long);
extern void func_L39_0058B1B8(s32, s32, s32, s32);
extern f32 D_L39_001DA140;
void func_L39_0060B478(void) {
    func_003A9440(0x42, 0x8000000044UL);
    func_L39_0058B1B8(0, 0, 0, (s32)(D_L39_001DA140 * 128.0f));
}
