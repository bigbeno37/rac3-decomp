/* Retail-derived draft; never linked.
 * PAL and US body checks match, but the current zero-padding path cannot preserve level 39's trailing nonzero fill word. Ordinary C; not classified as handwritten.
 * See docs/matching-campaign.md.
 */
#include "common.h"

extern u8 D_L39_0046EBD8[];

void *func_L39_00505BB8(void) {
    return D_L39_0046EBD8;
}
