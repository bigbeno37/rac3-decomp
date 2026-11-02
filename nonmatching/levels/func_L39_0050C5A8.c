/* Retail-derived draft; never linked.
 * 8 words in prologue/argument scheduling; raw sole-placement audit confirms; 80-byte
 * object retained. Low and High stopped without an integrated match. Ordinary C remains
 * plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct S_50C5A8 {
    u8 unknown0[8];
    void *current;
    u8 unknownC[4];
    u8 state[0x1C];
    void *context;
} S_50C5A8;
extern s32 func_L39_00508128(S_50C5A8 *, void *, s32, void *, void *, void *, void *);
s32 func_L39_0050C5A8(S_50C5A8 *self, void *arg1, void *arg2, void *arg3) {
    void *state = self->state;
    s32 result = func_L39_00508128(self, state, 1, arg1, self->context, arg2, arg3);
    if (result != 0) goto done;
    self->current = state;
done:
    return result;
}
