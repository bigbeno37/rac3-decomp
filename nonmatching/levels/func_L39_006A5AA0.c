/* Retail-derived draft; never linked.
 * 11 diff; 72-byte text versus 80-byte retail; .lit4 4 bytes, final scalar .text identical
 * to Low. Low and High stopped without an integrated match. Ordinary C remains plausible;
 * retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern void func_L39_00688460(void *, f32, f32, f32, f32, f32, s32 *, s32 *, s32 *, s32 *, s32 *);
void func_L39_006A5AA0(void *self) {
    s32 output;
    func_L39_00688460(self, 0.5f, 0.5f, 1.0f, 1.0f, 1.21f, &output, &output, &output, &output, &output);
}
