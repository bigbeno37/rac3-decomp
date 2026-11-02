/* Retail-derived draft; never linked.
 * The best Low draft differs only in the initial address-register pair. Three High probes
 * worsened the result to 37, 15 and 22 checker differences. Low and High remain
 * unresolved; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct { u32 words[7]; } Copy28_CD218;
typedef struct { u8 pad[0x1D]; u8 flag; u8 pad1[0x12]; u8 *dst; } State_CD218;
extern s32 D_L39_0024D760[];
void func_L39_006CD218(Copy28_CD218 *arg0) {
    State_CD218 *state = *(State_CD218 **)D_L39_0024D760;
    s32 flag = state->flag;
    u8 *dst = state->dst;
    if (flag == 0) {
        *(Copy28_CD218 *)(dst + 0x118) = *arg0;
        dst[0x2E] = 0;
    }
}
