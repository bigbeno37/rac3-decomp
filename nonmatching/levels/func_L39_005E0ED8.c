/* Retail-derived draft; never linked.
 * 8 diff; 32-byte body versus 40-byte retail; arithmetic pi * -0.5f folds to literal-pool
 * lwc1 instead of inline lui/ori/mtc1. Low and High stopped without a complete integrated
 * match; ordinary C remains plausible and INCLUDE_ASM is retained.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern void func_0038DAB8(f32, f32);
void func_L39_005E0ED8(void *arg0) {
    func_0038DAB8(*(f32 *)((u8 *)arg0 + 0xF8), -1.57079637050628662109375f);
}
