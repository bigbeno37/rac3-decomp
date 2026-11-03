/* Retail-derived draft; never linked.
 * Seven frame/save/restore words differ in the 104-byte body. Three High formulations did
 * not improve on Low. The complete body and all five actual call relocations were audited
 * without masks; getter, lookup and three-argument operation contracts are preserved. US
 * remains unchecked. Retain INCLUDE_ASM.
 * Existing file flags preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern s32 func_L39_00505058(void *);
extern s32 func_L39_004E0B10(s32);
extern s32 func_L39_004E0BC8(s32);
extern s32 func_L39_004E0490(s32, s32, void *);
s32 func_L39_004DEA00(void *self) {
    s32 id = func_L39_00505058(self);
    return func_L39_004E0490(func_L39_004E0B10(id), 2, self)
        ? func_L39_004E0490(func_L39_004E0BC8(id), 2, self)
        : 0;
}
