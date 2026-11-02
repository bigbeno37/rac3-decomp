/* Retail-derived draft; never linked.
 * 1 diff: retail trailing sw v0,0x14(a0) at +0x10 absent; both High objects exactly match
 * first 16 bytes, no relocations. Retain simple Low flags |= 0xA setter. Low plus two High
 * forms reproduce exact 16 executable bytes, missing trailing duplicate store in 20-byte
 * span. Independent PAL/US overlay and resident direct-reference scans found only normal
 * entry references; dynamic references not excluded. Ordinary C unresolved, not
 * handwritten. Low and High completed without an integrated match; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"

void func_L39_004BB410(void *arg0) {
    *(s32 *)((u8 *)arg0 + 0x14) |= 0xA;
}
