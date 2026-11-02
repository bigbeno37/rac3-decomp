/* Retail-derived semantic draft; never linked.
 * Three distinct Low/High forms emit the same three instruction differences with existing no-split-address flags: address register and store scheduling disagree.
 * See docs/matching-campaign.md. Existing file flags were preserved.
 */
#include "common.h"

extern s32 D_L01_002EA00C[];

void func_L01_0047DAD0(s32 a0) {
    D_L01_002EA00C[0] = a0;
}
