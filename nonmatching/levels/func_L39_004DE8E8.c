/* Retail-derived draft; never linked.
 * PAL and US: one missing trailing 0xCDCDCDCD word; all three executable words
 * independently verified exact, without relocations. Low and High stopped without an
 * integrated match. Ordinary C remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"

/* localdecomp:start func_L39_004DE8E8 */
s32 func_L39_004DE8E8(void *arg0) {
    return *(s32 *)((u8 *)*(void **)arg0 + 8);
}
/* localdecomp:end func_L39_004DE8E8 */
