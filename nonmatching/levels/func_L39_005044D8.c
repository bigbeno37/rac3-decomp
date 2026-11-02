/* Retail-derived draft; never linked.
 * 5 instruction differences: frame 0x10 vs 0x20, ra slot 8 vs 0x10, restore order; body
 * exact. Low and High stopped without a complete integrated match; ordinary C remains
 * plausible and INCLUDE_ASM is retained.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"

typedef struct {
    u8 pad_0[0x34];
    s32 field_34;
} State_005044D8;

extern State_005044D8 *func_L39_004DBA08(void);

void func_L39_005044D8(s32 value) {
    func_L39_004DBA08()->field_34 = value;
}
