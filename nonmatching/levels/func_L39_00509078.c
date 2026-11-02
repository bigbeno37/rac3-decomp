/* Retail-derived draft; never linked.
 * 14 diff for preserved High probe 1 (56 bytes vs 60); probe 3 reports 12 diff but emits
 * 64 bytes and adds boolean materialization. Low and High stopped without an integrated
 * match. Ordinary C remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct { void *data; s32 length; } S_L39_00509078;
extern s32 func_L39_004F7560(void *, void *, s32);
s32 func_L39_00509078(S_L39_00509078 *a, S_L39_00509078 *b) {
    return a->length == b->length && func_L39_004F7560(a->data, b->data, a->length) == 0;
}
