/* Retail-derived draft; never linked.
 * Four scheduling/register words differ. The draft also requires an explicit three-
 * argument forwarding correction in existing func_L39_00688340; that separate proposal
 * remains uncompiled and unintegrated. US has no twin. Low and High remain unresolved;
 * retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern s32 func_L39_00688340(s32, s32, s32);
extern s32 func_00381FF0(s32);
extern s32 func_L39_006872E8(void *, const char *, s32, f32, s32, s32);
extern void *D_L39_00247914[];
extern s32 D_001DDA64;
s32 func_L39_006B78F8(void) {
    void *object;
    s32 text;
    func_L39_00688340(0x17, 0, 0);
    text = func_00381FF0(0x1CAA);
    object = D_L39_00247914[0];
    if (func_L39_006872E8(object, 0, text, 0.0f, 3, 0) == 1) {
        D_001DDA64 = 7;
    }
    return 1;
}
