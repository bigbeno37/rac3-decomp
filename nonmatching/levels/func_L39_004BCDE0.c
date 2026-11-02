/* Retail-derived draft; never linked.
 * 5 raw differing words at +00,+0C,+48,+4C,+54; body exact; frame/save/restore mismatch.
 * Low and High stopped without an integrated match. Ordinary C remains plausible; retain
 * INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct LookupTable_CDE0 {
    u8 gap0[0x88];
    unsigned long hits;
    unsigned long misses;
    unsigned long comparisons;
    s32 state;
} LookupTable_CDE0;
extern void **func_L39_004BD178(LookupTable_CDE0 *, void *, unsigned long *);
void *func_L39_004BCDE0(LookupTable_CDE0 *table, void *key) {
    unsigned long hash;
    void *node;
    table->state = 0;
    node = *func_L39_004BD178(table, key, &hash);
    if (node != 0) {
        void *value = *(void **)node;
        table->hits++;
        return value;
    }
    table->misses++;
    return 0;
}
