/* Retail-derived draft; never linked.
 * 12 diff; 48-byte framed jal versus retail 32-byte frame-free sibling j; early-return
 * form emits same instructions as Low. Low and High stopped without a complete integrated
 * match; ordinary C remains plausible and INCLUDE_ASM is retained.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct {
    u8 pad[0xD4];
    s32 count;
    s32 value;
} S_L39_004C6100;
extern void func_L39_004C6120(S_L39_004C6100 *);
void func_L39_004C6100(S_L39_004C6100 *self, s32 value) {
    if (self->count != 0)
        return;
    self->value = value;
    self->count = 3;
    return func_L39_004C6120(self);
}
