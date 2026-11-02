/* Retail-derived semantic draft; never linked.
 * PAL and US body checks match, but the current C integration path drops the trailing
 * nonzero fill word at PAL 0x0050B05C. Ordinary C; keep the assembly marker.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"

extern u8 D_L39_004797E8[];

void *func_L39_0050B050(void) {
    return D_L39_004797E8;
}
