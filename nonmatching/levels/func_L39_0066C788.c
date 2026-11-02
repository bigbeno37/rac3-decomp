/* Retail-derived draft; never linked.
 * 20 diff; 72 candidate bytes vs 80 retail; identical body and relocations to Low.
 * Preserve Low without the unsuccessful experimental .sdata attribute. Exact object extent
 * and runtime GP evidence remain insufficient; do not invent a small global. Low and High
 * stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern u8 D_L39_002462A9[];
extern u8 D_L39_002462AA[];
extern u8 D_L39_001DAB98[];
u32 func_L39_0066C788(s32 index) {
    s32 offset = index * 3;
    u32 green = *(u8 *)(offset + (u32)D_L39_002462A9);
    u32 blue = *(u8 *)(offset + (u32)D_L39_002462AA);
    return (green << 8 | 0x80000000) | (blue << 16) | *(u8 *)(offset + (u32)D_L39_001DAB98);
}
