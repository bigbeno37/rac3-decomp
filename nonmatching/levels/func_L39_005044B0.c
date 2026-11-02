/* Retail-derived draft; never linked.
 * 5 instructions: frame 0x10 vs retail 0x20; ra slot 8 vs 0x10; restore s0/ra vs retail
 * ra/s0. Low and High stopped without a complete integrated match; ordinary C remains
 * plausible and INCLUDE_ASM is retained.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct {
    u8 pad_0[0x2C];
    s32 field_2C;
} State_005044B0;
extern State_005044B0 *func_L39_004DBA08(void);

void func_L39_005044B0(s32 value) {
    func_L39_004DBA08()->field_2C = value;
}
