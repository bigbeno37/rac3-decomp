/* Retail-derived draft; never linked.
 * 10 differing words / 80 bytes; identical to Low best: frame/save spacing and
 * epilogue/branch scheduling. Low and High stopped without an integrated match. Ordinary C
 * remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct {
    u8 pad0[8];
    s32 field8;
    u8 padC[0xC4];
    s32 fieldD0;
} S_005165D0;
extern s32 func_L39_00517888(void *self, void *data, s32 size, unsigned long *used);
s32 func_L39_005165D0(S_005165D0 *self, void *data, s32 size, unsigned long *used) {
    s32 old = self->field8;
    s32 result = func_L39_00517888(&self->field8, data, size, used);
    if (result == 0 && old != self->field8) {
        self->fieldD0 = old;
    }
    return result;
}
