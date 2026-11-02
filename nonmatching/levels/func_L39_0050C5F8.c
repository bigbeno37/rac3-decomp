/* Retail-derived draft; never linked.
 * 8 words; prologue/argument setup scheduling; raw ELF audit agrees; both objects
 * identical to Low. Low and High stopped without an integrated match. Ordinary C remains
 * plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct { u8 pad0[8]; void *field8; u8 padC[4]; u8 field10[0x1C]; void *field2C; } S_50C5F8;
extern s32 func_L39_00508128(S_50C5F8 *, void *, s32, void *, void *, void *, s32);
s32 func_L39_0050C5F8(S_50C5F8 *self, void *arg1, void *arg2, s32 arg3) {
    s32 result = func_L39_00508128(self, self->field10, 0, arg1, self->field2C, arg2, arg3);
    if (result == 0) self->field8 = self->field10;
    return result;
}
