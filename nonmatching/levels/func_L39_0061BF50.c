/* Retail-derived semantic draft; never linked.
 * Low and High forms retain two instruction-order differences: the index shift precedes
 * address adjustment instead of following it. All other instructions agree. Stopped on
 * repeated equivalent code generation.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern u8 *D_L39_0024CE20[];

static __inline__ u8 *lookup_61BF50(s32 index, u8 **table) {
    return table[index];
}
u8 *func_L39_0061BF50(s32 i) {
    return lookup_61BF50(i, D_L39_0024CE20);
}
