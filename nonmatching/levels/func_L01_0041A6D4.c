/* Retail-derived semantic draft; never linked.
 * The isolated PAL body matches, but whole-file eight-byte entry alignment conflicts with
 * all 34 four-mod-eight retail places. The preserved integration object confirms the
 * shift; no separate first-error diagnostic or US twin.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"

extern u8 D_00164B88[];

void *func_L01_0041A6D4(void) {
    u8 *address = &D_00164B88[0];
    return address;
}
