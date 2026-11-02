/* Retail-derived draft; never linked.
 * 2 words: generated lui v0/addiu v1,v0 versus retail lui v1/addiu v1,v1; all other words
 * agree. Low and High stopped without an integrated match. Ordinary C remains plausible;
 * retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern s32 D_L07_001DF600[];
void func_L07_003318D8(s32 arg0) {
    u8 *state = *(u8 **)(arg0 + 0x68);
    s32 i;
    s32 *p = D_L07_001DF600;
    for (i = 1; i >= 0; i--, p++) {
        if (*p != 0) *p = 0;
    }
    state[0xA9] = 0;
}
