/* Retail-derived draft; never linked.
 * Preserved low draft: canonical PAL/US checks MATCH. Read-only low-object derivation
 * fails at +0x10 in all PAL multiplayer levels39-53: emitted 0x24A54610 versus retail
 * 0x24A545E0; other34 placements derive successfully. All 34 story placements use member
 * offset 0x4610; all 15 multiplayer placements use 0x45E0. Shared catalogue identity masks
 * this field-offset difference. Keep assembly until both variants can be represented
 * legitimately.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"

extern void func_L01_004CF120(void *);

void func_L01_004D2498(u8 *base, s32 index) {
    func_L01_004CF120(base + (index * 0x230 + 0x4610));
}
