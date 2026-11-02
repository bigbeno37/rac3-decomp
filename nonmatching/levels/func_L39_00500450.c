/* Retail-derived draft; never linked.
 * Seven frame/save/restore words differ; the call body agrees after resolving actual
 * relocations. The simpler Low draft is retained. Low and High remain unresolved; retain
 * INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern char *func_0011A9B8(char *, s32, void *);
extern s32 func_00120884(const char *);
s32 func_L39_00500450(void *arg0, char *arg1, s32 arg2) {
    s32 result = 0;
    arg1[0] = 0;
    func_0011A9B8(arg1, arg2, *(void **)((u8 *)arg0 + 0x20));
    if (arg1[0] != 0) result = func_00120884(arg1);
    return result;
}
