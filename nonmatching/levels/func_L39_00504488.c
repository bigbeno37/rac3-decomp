/* Retail-derived draft; never linked.
 * 5 differing words: frame size, ra save/restore slot, and s0/ra restore order; body and
 * 40-byte size agree. Low and High stopped without a complete integrated match; ordinary C
 * remains plausible and INCLUDE_ASM is retained.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"

typedef struct {
    u8 pad_0[0x30];
    s32 field_30;
} State_00504488;
extern State_00504488 *func_L39_004DBA08(void);

void func_L39_00504488(s32 value) {
    State_00504488 *state = func_L39_004DBA08();
    state->field_30 = value;
}
