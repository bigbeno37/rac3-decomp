/* Retail-derived draft; never linked.
 * Seventeen words differ: 96 candidate bytes versus 104 retail bytes. The eight-byte
 * constructor, allocation-failure return and five explicit reporter arguments are
 * preserved. The unexplained retail stack store of 0x40 and larger frame are not
 * fabricated in C. Allocator signatures are supported by static default/replacement
 * callback review; deep allocator and diagnostic semantics remain incomplete. US remains
 * unchecked. Retain INCLUDE_ASM.
 * Existing file flags preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern void *func_L39_004BEED8(s32 size);
extern void *func_L39_004E0A58(u32 index);
extern void func_L39_004BC6C8(s32, s32, s32, char *, s32);
typedef struct { void *first; void *second; } Object_5065C8;
Object_5065C8 *func_L39_005065C8(void) {
    Object_5065C8 *self = func_L39_004BEED8(sizeof(Object_5065C8));
    if (self == 0) {
        func_L39_004BC6C8(0xD, 0xCA, 0x21, 0, 0);
        return 0;
    }
    self->first = func_L39_004E0A58(0);
    self->second = 0;
    return self;
}
