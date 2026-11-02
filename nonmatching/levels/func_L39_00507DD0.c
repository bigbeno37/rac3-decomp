/* Retail-derived draft; never linked.
 * func_L39_00507DD0: 14 diff; raw audit: 13 differing words within 80 bytes plus 4 extra
 * candidate bytes. Keep the copy helper void: its zero-count path does not establish a
 * return value. Low and High stopped without an integrated match. Ordinary C remains
 * plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern void func_L39_004F7510(void *, const void *, u32);
s32 func_L39_00507DD0(void *unused, void *object, const void *source) {
    s32 result = 0x203;
    do {
        if (!(*(u32 *)((u8 *)object + 0x2C) & 2)) break;
        func_L39_004F7510((u8 *)*(void **)((u8 *)object + 0x28) + 0x34, source, 8);
        *(void **)((u8 *)*(void **)((u8 *)object + 0x28) + 0x30) = object;
        result = 0;
    } while (0);
    return result;
}
