/* Retail-derived draft; never linked.
 * Nine frame/save/restore words differ in the 104-byte body. Three High formulations did
 * not improve the frame layout. The evidence-backed six-argument helper call and
 * consumed status return are preserved, including reloading source field +8 after the
 * call. The six-field object size is supported by its allocator. US remains unchecked.
 * Retain INCLUDE_ASM.
 * Existing file flags preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct Copy_5057D0 { s32 f0, f4, f8; void *fC; s32 f10; u32 flags; } Copy_5057D0;
extern s32 func_L39_004E4578(Copy_5057D0 *, s32, s32, void *, s32, s32);
s32 func_L39_005057D0(Copy_5057D0 *dst, Copy_5057D0 *src, u32 flags) {
    s32 copy;
    s32 result;
    copy = ((src->flags & 2) || (flags & 2)) ? 2 : 0;
    result = func_L39_004E4578(dst, src->f0, src->f4, src->fC, src->f10, copy);
    dst->f8 = src->f8;
    return result;
}
