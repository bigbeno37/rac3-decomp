/* Retail-derived draft; never linked.
 * Seven frame/save/restore words differ in the 104-byte body; all body words agree after
 * resolving the genuine call relocation. The three-argument decoder contract, signed
 * result and alias-sensitive output/count store order are preserved. This source
 * corresponds to Low probe-02, not Low candidate-pal.o. No supported source object
 * explains the larger retail save slots. US remains unchecked. Retain INCLUDE_ASM.
 * Existing file flags preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern s32 func_L39_005047E8(u8 *destination, u8 *input, s32 count);
s32 func_L39_00504970(s32 *state, u8 *destination, s32 *written) {
    s32 result;
    *written = 0;
    if (state[0] != 0) {
        result = func_L39_005047E8(destination, (u8 *)state + 8, state[0]);
        if (result < 0) return -1;
        state[0] = 0;
        *written = result;
        return 1;
    }
    return 1;
}
