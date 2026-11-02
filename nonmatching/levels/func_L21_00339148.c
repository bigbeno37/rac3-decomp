/* Retail-derived draft; never linked.
 * 13 diff; 56-byte .text versus 72-byte retail; two .lit4 loads replace immediate
 * lui/ori/mtc1 sequences; text identical to Low. Low and High stopped without an
 * integrated match. Ordinary C remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern void func_L01_003E8BD0(s32, s32, f32, f32);
extern void func_L01_003E8D48(s32, f32);

void func_L21_00339148(void) {
    func_L01_003E8BD0(0, 0, 7.0f, 0.0030000000260770321f);
    func_L01_003E8D48(0, 0.34906584024429321f);
}
