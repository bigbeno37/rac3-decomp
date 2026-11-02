/* Retail-derived draft; never linked.
 * Best High probe: 5 frame/save/restore words differ; remaining 13 of 18 raw words exact
 * after resolving sole genuine jal relocation. Final alternative: 16 diff. Low and High
 * stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct { unsigned long *words; s32 count; } S_004FC158;
extern s32 func_L39_0050B060(unsigned long value);
s32 func_L39_004FC158(S_004FC158 *self)
{
    s32 count = self->count;
    s32 result = 0;
    if (count != 0) {
        unsigned long value = self->words[count - 1];
        count--;
        count *= 64;
        result = count + func_L39_0050B060(value);
    }
    return result;
}
