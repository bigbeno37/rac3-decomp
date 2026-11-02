/* Retail-derived draft; never linked.
 * At +0x10 canonical PAL body uses addiu immediate 0x4610 (34 placements); all 15
 * multiplayer PAL placements require 0x45E0. Canonical PAL/US MATCH inherited from Low
 * only. All 34 story placements use member offset 0x4610; all 15 multiplayer placements
 * use 0x45E0. Shared catalogue identity masks this field-offset difference. Keep assembly
 * until both variants can be represented legitimately.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern void func_003ACBC0(u8 *);
void func_L01_004D2470(void *p, s32 i) {
    func_003ACBC0((u8 *)p + (i * 0x230 + 0x4610));
}
