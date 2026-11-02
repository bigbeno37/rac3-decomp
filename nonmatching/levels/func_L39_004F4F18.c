/* Retail-derived draft; never linked.
 * 16 diff; object 84 bytes versus retail 80; identical raw .text to Low; prologue
 * ordering, branch-likely duplicated clear, cleanup delay-slot scheduling. Low and High
 * stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct Object_4F4F18 {
    u8 fields[0x34];
    struct Object_4F4F18 *self;
} Object_4F4F18;
typedef struct Handle_4F4F18 {
    Object_4F4F18 *object;
} Handle_4F4F18;
extern s32 func_L39_004F4FD8(Object_4F4F18 *);
extern void func_L39_004F5CE8(Object_4F4F18 *);
extern void func_L39_004F7620(void *);
static __inline__ void destroy_4F4F18(Object_4F4F18 *object) {
    object->self = 0;
    func_L39_004F5CE8(object);
    func_L39_004F7620(object);
}
void func_L39_004F4F18(void **slot) {
    Object_4F4F18 *object = *slot;
    if (func_L39_004F4FD8(object) == 0)
        destroy_4F4F18(object);
    *slot = 0;
}
