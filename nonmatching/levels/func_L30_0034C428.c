/* Retail-derived draft; never linked.
 * 2 instructions in second 64-bit constant synthesis; other eight instructions match. Low
 * and High stopped without a complete integrated match; ordinary C remains plausible and
 * INCLUDE_ASM is retained.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
void func_L30_0034C428(unsigned long *p) {
    p[0x80 / 8] = 0xFF9000000260UL;
    p[0x88 / 8] = 0x8000000044UL;
    p[0x70 / 8] = 0;
}
