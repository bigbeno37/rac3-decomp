/* Retail-derived draft; never linked.
 * 13 positional diffs; 52 vs 56 bytes. Missing entry daddu v1,a0,zero; checks a0 and loads
 * field into v0 instead of v1. Low and High stopped without an integrated match. Ordinary
 * C remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct Obj_00508470 {
    u8 pad[0xC];
    s32 count;
} Obj_00508470;
typedef struct Ops_00508470 {
    s32 (*init)(Obj_00508470 *, void *);
} Ops_00508470;
s32 func_L39_00508470(Obj_00508470 *object, Ops_00508470 *ops, void *context) {
    s32 result;
    if (!object) result = 0x212;
    else if (object->count) result = 0x20E;
    else result = ops->init(object, context);
    return result;
}
