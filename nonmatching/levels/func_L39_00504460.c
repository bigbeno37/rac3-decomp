/* Retail-derived draft; never linked.
 * 5 differing words: frame 0x10 vs 0x20, ra save/restore offset 8 vs 0x10, and s0/ra
 * restore order. Both High probes identical to Low best; all functional body instructions
 * agree. Low and High stopped without a complete integrated match; ordinary C remains
 * plausible and INCLUDE_ASM is retained.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"

typedef struct {
    u8 pad[0x28];
    s32 field_28;
} State_00504460;

extern State_00504460 *func_L39_004DBA08(void);

void func_L39_00504460(s32 value) {
    func_L39_004DBA08()->field_28 = value;
}
