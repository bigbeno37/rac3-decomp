/* Retail-derived draft; never linked.
 * PAL and US: 1 diff; all five executable raw words exact, missing sixth catalogue word
 * 0xCDCDCDCD. Low and High completed without an integrated match; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct {
    s32 field_0;
    s32 field_4;
    s32 field_8;
    s32 field_C;
    s32 field_10;
} S_L39_004CC178;
void func_L39_004CC178(S_L39_004CC178 *self, s32 value) {
    if (self->field_10 != value)
        self->field_8 = 0;
    self->field_10 = value;
}
