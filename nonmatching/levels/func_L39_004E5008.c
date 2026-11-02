/* Retail-derived draft; never linked.
 * 7 literal words at offsets 0, 0x10, 0x30, 0x34, 0x40, 0x44, 0x4c: frame, ra slot,
 * branch-likely and restore order; all three LOW/HIGH wordings have identical raw text.
 * Low and High stopped without an integrated match. Ordinary C remains plausible; retain
 * INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct Object_4E5008 Object_4E5008;
struct Object_4E5008 {
    s32 field0;
    s32 field4;
    s32 (*dispatch)(Object_4E5008 *, s32, void *);
    s32 fieldC;
    u32 flags;
};
extern void func_L39_004BEF28(void *);
void func_L39_004E5008(Object_4E5008 *self) {
    if (self == 0) return;
    if (self->dispatch != 0) self->dispatch(self, 2, self);
    if (!(self->flags & 1)) return;
    func_L39_004BEF28(self);
}
