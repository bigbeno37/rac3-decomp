/* Retail-derived draft; never linked.
 * The initial address-register pair differs; the other 22 words agree. The draft preserves
 * the established unsized s32 global and literal 32-byte copy. Low and High remain
 * unresolved; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct { u8 bytes[32]; } Copy_006CD1B8;
extern s32 D_L39_0024D760[];
void func_L39_006CD1B8(Copy_006CD1B8 *arg0) {
    s32 state = D_L39_0024D760[0];
    u8 *dest = *(u8 **)(state + 0x30);
    if (*(u8 *)(state + 0x1D) == 0) {
        *(Copy_006CD1B8 *)(dest + 0x34) = *arg0;
        dest[0x2D] = 0;
    }
}
