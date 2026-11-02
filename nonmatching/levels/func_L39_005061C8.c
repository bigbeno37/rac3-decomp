/* Retail-derived semantic draft; never linked.
 * PAL and US body checks match, but the current C integration path drops the trailing
 * nonzero fill word at PAL 0x005061D4. Ordinary C; keep the assembly marker.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"

extern u8 D_L39_00479700[];

void *func_L39_005061C8(void) {
    return D_L39_00479700;
}
