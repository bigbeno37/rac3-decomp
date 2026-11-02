/* Retail-derived draft; never linked.
 * 16 diff; Low and both High probes emit identical raw .text, including literal-pool load
 * for 0.9f instead of inline lui/ori/mtc1. Low and High stopped without an integrated
 * match. Ordinary C remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern s32 D_L01_001E1EA0[];
extern void func_L01_00389810(u8 *, s32, s32, f32, f32, f32, f32);
void func_L01_00389798(Obj3899C0 *obj) {
    func_L01_00389810(obj->inner + 16, 66, D_L01_001E1EA0[0] * 5,
                      1.0f, 0.0f, 0.0f, 0.9f);
}
