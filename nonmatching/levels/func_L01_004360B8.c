/* Retail-derived draft; never linked.
 * Low canonical PAL/US candidate matches, but independent retail/object derive rejects all
 * 15 multiplayer placements at nonrelocated stores +0x20/+0x24: 0x24E10/0x24E14 versus
 * 0x24DE0/0x24DE4. All 34 story placements use +0x24E10/+0x24E14; all 15 multiplayer
 * placements use +0x24DE0/+0x24DE4. Canonical PAL/US checks do not establish an integrated
 * match. Shared catalogue layout variants require a legitimate representation. Low and
 * High stopped without an integrated match. Ordinary C remains plausible; retain
 * INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"

typedef struct {
    u8 pad[0x24E10];
    struct { s32 x, y; } entries[0];
} ClearSlots_004360B8;
extern ClearSlots_004360B8 *D_001D67C8;

void func_L01_004360B8(u32 index) {
    if (index < 3) {
        D_001D67C8->entries[index].x = 0;
        D_001D67C8->entries[index].y = 0;
    }
}
