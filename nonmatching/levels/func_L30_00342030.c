/* Retail-derived draft; never linked.
 * Nine checker differences remain: the 88-byte draft uses a literal pool instead of
 * retail's 96-byte inline-constant body. US explicitly differs. Low and High remain
 * unresolved; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern void func_L01_0043A430(void *, s32, void *);
extern void func_0038D750(void *, s32, f32);
extern f32 func_0038DB00(f32, f32);
void func_L30_00342030(u8 *a0) {
    u8 *p = *(u8 **)(a0 + 0x68);
    if (!p[0x251]) {
        func_L01_0043A430(a0, 0, p + 0x250);
    }
    func_0038D750(p + 0x260, 2, *(f32 *)(p + 0x29C));
    *(f32 *)(p + 0x29C) = func_0038DB00(*(f32 *)(p + 0x29C), 0.174532935f);
}
