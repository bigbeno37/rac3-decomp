/* Retail-derived draft; never linked.
 * Best High probe 02: 11 diff, 76 vs 72 bytes; prologue save/copy order, v0/v1
 * predicate/status allocation, store/zero scheduling and extra result move. Final probe
 * 04: 12 diff. Low and High stopped without an integrated match. Ordinary C remains
 * plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct { u8 *data; u32 size; } Input_508340;
extern u32 func_L39_00508A98(u8 *data, u32 size);
s32 func_L39_00508340(s32 *out, Input_508340 *input) {
    u32 bits = func_L39_00508A98(input->data, input->size);
    s32 result = 7;
    if (bits <= 0x800U) {
        *out = 0x40;
        result = 0;
    }
    return result;
}
