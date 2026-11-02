/* Retail-derived draft; never linked.
 * Independent raw audit confirms Low: 11 check.py diffs; 72-byte .text versus retail 80,
 * with .lit4 0.1f and R_MIPS_LITERAL instead of inline lui/ori/mtc1. Low and High stopped
 * without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern void func_L39_00688460(void *, f32, f32, f32, f32, f32, s32 *, s32 *, s32 *, s32 *, s32 *);
void func_L39_006C8278(void *arg0) {
    func_L39_00688460(arg0, 0.5f, 0.5f, 1.0f, 1.0f, 0.1f,
        (s32 *)((u8 *)arg0 + 0x384), (s32 *)((u8 *)arg0 + 0x390),
        (s32 *)((u8 *)arg0 + 0x388), (s32 *)((u8 *)arg0 + 0x38C),
        (s32 *)((u8 *)arg0 + 0x380));
}
