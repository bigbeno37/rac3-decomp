/* Retail-derived draft; never linked.
 * 8 instruction words in best HIGH draft; Low remains better at 6. Size 56 bytes and tail
 * agree. Preserved Low draft is better at six differing words; High remained at eight. Low
 * and High stopped without an integrated match. Ordinary C remains plausible; retain
 * INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"

typedef struct {
    u8 pad[0x1C];
    u8 *object;
} Entry_405450;
extern Entry_405450 *D_L09_001DF884[];
extern u8 *D_L09_001E2BD0[];

void func_L09_00405450(s32 index)
{
    Entry_405450 *table = D_L09_001DF884[0];
    u8 *state = D_L09_001E2BD0[0];
    u8 *object = table[index].object;
    if (*(s16 *)(state + 0x86) == 0x13) {
        object[0x39] = 1;
    }
}
