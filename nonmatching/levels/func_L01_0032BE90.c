/* Retail-derived draft; never linked.
 * 16 checker differences remain: the fixed assembler emits an 88-byte body with a literal
 * pool instead of retail's inline constant. All 34 PAL placements were audited. Low and
 * High remain unresolved; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern void func_003C2F58(u8 *, s32, f32 *);
extern s32 func_L01_003FB640(f32 *, s32, u8 *, f32);
extern s32 D_L01_001EAA1C[];
void func_L01_0032BE90(u8 *a0) {
    f32 v[4];
    func_003C2F58(a0, 0, v);
    if (func_L01_003FB640(v, 2, a0, 0.2f) && D_L01_001EAA1C[0] > 0) {
        a0[0x20] = 8;
    }
}
