/* Retail-derived draft; never linked.
 * 3 differing full words at indices 1,2,4: pointer-load/store base registers; literal
 * offsets 0x3C and 1 agree. Low and High completed without an integrated match; retain
 * INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern s32 D_L39_0024D760[];
typedef struct { u8 unknown0; u8 flag; } State_6D4018;
typedef struct { u8 unknown[0x3C]; State_6D4018 *state; } Object_6D4018;
void func_L39_006D4018(void) {
    Object_6D4018 *object = *(Object_6D4018 **)D_L39_0024D760;
    object->state->flag = 0;
}
