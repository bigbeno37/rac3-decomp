/* Retail-derived draft; never linked.
 * Low evidence independently audited: 17 diff; 72-byte object vs 80-byte retail; real
 * .lit4 R_MIPS_LITERAL for 0.6f versus inline lui/ori/mtc1; argument scheduling differs.
 * Low and High stopped without an integrated match. Ordinary C remains plausible; retain
 * INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern void func_L39_00688460(void *, f32, f32, f32, f32, f32, s32 *, s32 *, s32 *, s32 *, s32 *);
void func_L39_0069C738(void *self) {
    s32 output;
    func_L39_00688460(self, 0.6f, 0.6f, 1.0f, 1.0f, 1.5f, &output, &output, &output, &output, &output);
}
