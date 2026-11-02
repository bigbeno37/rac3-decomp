/* Retail-derived draft; never linked.
 * Closest draft: 10 literal prologue/epilogue word differences; call/store body exact with
 * only two genuine JAL relocations resolved. Return-reuse approach: 14 diff. Low and High
 * stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern void *func_0011D534(void *, s32, s32);
extern void func_L39_00517678(void *, s32, s32, s32);
typedef struct {
    s32 value;
    s32 field4;
    s32 member[4];
    u8 remaining[0xD0];
} Object_00516498;
void func_L39_00516498(Object_00516498 *self, s32 value) {
    func_0011D534(self, 0, sizeof(*self));
    func_L39_00517678(self->member, 0, 0, 0);
    self->value = value;
}
