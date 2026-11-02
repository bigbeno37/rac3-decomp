/* Retail-derived draft; never linked.
 * 13 of 22 words differ only in register allocation. The High draft preserves the
 * established unsized s32 global declaration. Low and High remain unresolved; retain
 * INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct { u8 bytes[32]; } Copy_006D9E10;
typedef struct { u8 unknown[0x48]; u8 *dest; } Outer_006D9E10;
extern s32 D_L39_0024D760[];
void func_L39_006D9E10(const Copy_006D9E10 *arg0) {
    u8 *dest = ((Outer_006D9E10 *)D_L39_0024D760[0])->dest;
    dest[0x1C0] = 0;
    *(Copy_006D9E10 *)(dest + 0x1C4) = *arg0;
}
