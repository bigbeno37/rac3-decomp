/* Retail-derived draft; never linked.
 * Low PAL and US checks: 1 diff each; independent raw audit confirms all 12 executable
 * bytes exact, but trailing CDCDCDCD absent from 16-byte catalogue span. Exact 12
 * executable PAL/US bytes, zero relocations; CD fill remains unsupported. Low and High
 * completed without an integrated match; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
s32 func_L39_004F16A0(void *arg0) {
    return *(s32 *)((u8 *)*(void **)((u8 *)arg0 + 4) + 0xC);
}
