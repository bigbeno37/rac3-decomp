/* Retail-derived draft; never linked.
 * PAL and US: 1 diff, trailing CD fill absent from 24-byte catalogue comparison; all 20
 * executable bytes exact, zero relocations. Low and High completed without an integrated
 * match; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
s32 func_L39_004EABF0(void *arg0) {
    if (arg0 == 0) {
        return 0;
    }
    return *(s32 *)((u8 *)arg0 + 0x14);
}
