/* Retail-derived draft; never linked.
 * Best retained draft: 5 raw word differences at 0, 8, 0x40, 0x44, 0x4C (frame, ra slot
 * and restores); final conditional-expression probe: 14 differences, reproducing Low
 * probes 1/2. Low and High stopped without an integrated match. Ordinary C remains
 * plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct Object_L39_004E47A8 {
    s32 words[5];
    s32 enabled;
} Object_L39_004E47A8;
extern void *func_L39_004BEED8(s32);
extern void *func_0011D534(void *, s32, s32);
void *func_L39_004E47A8(void) {
    Object_L39_004E47A8 *object = func_L39_004BEED8(sizeof(*object));
    Object_L39_004E47A8 *result;
    if (object == 0) {
        result = 0;
    } else {
        func_0011D534(object, 0, sizeof(*object));
        object->enabled = 1;
        result = object;
    }
    return result;
}
