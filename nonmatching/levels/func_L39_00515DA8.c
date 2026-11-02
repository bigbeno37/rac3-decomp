/* Retail-derived draft; never linked.
 * 20 instruction differences; the 92-byte draft exceeds retail's 88 bytes. High rewrites
 * reproduced Low's output. The simpler Low allocation/copy draft is retained. Low and High
 * remain unresolved; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern s32 func_L39_00515D28(void *, u32, void **);
extern void func_L39_004F7510(void *, const void *, u32);
s32 func_L39_00515DA8(void *object, u32 size, const void *source, void **out) {
    s32 result = func_L39_00515D28(object, size, out);
    if (result == 0) {
        func_L39_004F7510(*out, source, size);
        return 0;
    } else {
        return result;
    }
}
