/* Retail-derived draft; never linked.
 * The initial address-register pair differs; the other 20 words agree after resolving
 * actual relocations. The simpler Low draft is retained. Low and High remain unresolved;
 * retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct { s32 words[7]; } Copy_6DCCE0;
extern s32 D_L39_0024D760[];
void func_L39_006DCCE0(Copy_6DCCE0 *arg0) {
    u8 *state = (u8 *)D_L39_0024D760[0];
    s32 flag = state[0x1D];
    u8 *object = *(u8 **)(state + 0x50);
    if (flag == 0) {
        object[0x9A] = 0;
        *(Copy_6DCCE0 *)(object + 0xD0) = *arg0;
    }
}
