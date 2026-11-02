/* Retail-derived draft; never linked.
 * 3 diff at +0x1C/+0x20/+0x24: entry a0 versus v1; null branch destination and delay slot.
 * Retail explicitly returns 0 or 1; the existing void caller declaration is stale. The
 * preserved s32 draft corrects the return based on retail evidence and forwards every
 * helper argument. Low and High stopped without an integrated match. Ordinary C remains
 * plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern void func_003EDAD0(void *, s32, s32);
s32 func_L01_00514DD0(void *arg0, s32 index, s32 set) {
    void *entry;
    if ((u32)index < 0x23) {
        arg0 = *(void **)arg0;
        index <<= 2;
        entry = *(void **)(index + (s32)arg0 + 0x50);
        if (entry != 0) {
            func_003EDAD0(entry, 1, set);
            return 1;
        }
    }
    return 0;
}
