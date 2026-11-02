/* Retail-derived draft; never linked.
 * 18 diff; generated 64 bytes versus retail 72; object stays in a0, global in v1,
 * eliminating retail entry/argument pointer moves and changing scheduling. Low and High
 * stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern s32 D_L01_001A71A4[];
extern void func_003C3A10(void *, s32, s32, s32);

void func_L01_00300678(u8 *obj) {
    if (D_L01_001A71A4[0] != 8)
        return;
    if (obj[0x43] == 6)
        return;
    func_003C3A10(obj, 6, 0, 8);
}
