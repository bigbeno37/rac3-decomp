/* Retail-derived draft; never linked.
 * Best retained draft: 16 diff, 76 bytes versus 80 retail; final probe: 17 diff, 84 bytes.
 * Low and High stopped without an integrated match. Ordinary C remains plausible; retain
 * INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct { s32 count; s32 used; void *buffer; } S_5128F8;
extern void func_L39_004F74E8(void *, s32, u32);
extern void func_L39_004F7620(void *);
void func_L39_005128F8(S_5128F8 *p) {
    if (p->buffer) {
        func_L39_004F74E8(p->buffer, 0, p->count << 3);
        func_L39_004F7620(p->buffer);
        p->buffer = 0;
    }
    p->count = 0;
    p->used = 0;
}
