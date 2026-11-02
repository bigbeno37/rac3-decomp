/* Retail-derived draft; never linked.
 * 4 differing words, same 48-byte size: object v1 versus retail a0; constant v0 versus
 * retail v1. Low and High stopped without an integrated match. Ordinary C remains
 * plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern void *func_L39_0050C878(void *, void *);
void func_L39_00508080(void *arg0, void *arg1) {
    void *p = func_L39_0050C878(0, (u8 *)arg1 + 0x14);
    if (p != 0) {
        *(s32 *)((u8 *)p + 0x2C) = 0xF1;
    }
}
