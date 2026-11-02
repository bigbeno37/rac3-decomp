/* Retail-derived draft; never linked.
 * PAL 6 diff: 24-byte HI16/LO16 absolute addressing versus 20-byte GP-relative retail; raw
 * mismatch at all 34 placements. Preserve High plain extern f32 table[5], not Low
 * experimental section attribute. Real five-float table requires GP addressing not
 * obtained under existing flags. High 6 diff versus Low 5. Low and High completed without
 * an integrated match; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern f32 D_L01_001DBF90[5];

f32 func_L01_004DFE88(s32 index) {
    f32 *entry = (f32 *)((u8 *)D_L01_001DBF90 + index * sizeof(f32));
    return *entry;
}
