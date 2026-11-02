/* Retail-derived draft; never linked.
 * PAL 2 diff: lui uses v1 instead of v0; lw base v1 instead of v0. Raw audit confirms only
 * word offsets +00 and +04 differ. Retain Low direct expression; High inline accessor
 * repeats identical two register differences. Signed offset/void return evidence retained;
 * PAL actual relocations resolve and other3words exact. US Low diagnostic masks unresolved
 * globals, not raw verified. Ordinary C unresolved. Low and High completed without an
 * integrated match; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern s32 D_L16_001DFC40[];
extern s32 D_L16_001DB03C;
void func_L16_004DCA98(s32 offset) {
    D_L16_001DB03C = D_L16_001DFC40[0] + offset;
}
