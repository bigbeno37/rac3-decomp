/* Retail-derived draft; never linked.
 * The best Low draft has two address-register differences; all other 20 words agree.
 * High's builtin-copy form grew to 96 bytes versus retail's 88. Low and High remain
 * unresolved; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct { s32 words[7]; } Copy_6CD270;
extern s32 D_L39_0024D760[];
void func_L39_006CD270(Copy_6CD270 *arg0) {
    u8 *state = (u8 *)D_L39_0024D760[0];
    s32 flag = state[0x1D];
    u8 *dest = *(u8 **)(state + 0x30);
    if (flag == 0) {
        *(Copy_6CD270 *)(dest + 0x118) = *arg0;
        dest[0x2F] = 0;
    }
}
