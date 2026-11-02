/* Retail-derived draft; never linked.
 * Best retained probe 1: 18 checker and raw word differences, 88 versus 88 bytes. Final
 * probe 3: 20 checker differences, 84 versus 88 bytes. Preserve High nonvolatile draft and
 * exact best object; the unused 0xD6 stack store and larger frame remain unsupported. Do
 * not preserve Low volatile workaround. Low and High completed without an integrated
 * match; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern void *func_L39_004BEED8(s32 size);
extern void func_L39_004BC6C8(s32, s32, s32, char *, s32);
typedef struct { s32 kind; void *payload; } Object_4FB5C8;
Object_4FB5C8 *func_L39_004FB5C8(void) {
    Object_4FB5C8 *object = func_L39_004BEED8(sizeof(*object));
    Object_4FB5C8 *result;
    if (object != 0) {
        object->kind = -1;
        object->payload = 0;
        result = object;
    } else {
        s32 line = 0xD6;
        func_L39_004BC6C8(0xD, 0x77, 0x21, 0, 0);
        result = 0;
    }
    return result;
}
