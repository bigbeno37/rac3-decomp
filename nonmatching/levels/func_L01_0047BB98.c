/* Retail-derived draft; never linked.
 * Low evidence: 12 diff; .lit4 load versus inline lui/ori/mtc1; 64 versus 72 bytes. No
 * HIGH compiler probe. Low and High stopped without an integrated match. Ordinary C
 * remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern s32 func_L01_005169C8(s32, f32);
void func_L01_0047BB98(void) {
    func_L01_005169C8(0x20001, 0.07f);
    func_L01_005169C8(0x20002, 0.07f);
}
