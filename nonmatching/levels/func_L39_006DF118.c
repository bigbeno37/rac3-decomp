/* Retail-derived draft; never linked.
 * 4 raw words at +0x08,+0x0c,+0x10,+0x18; opening v1/v0 allocation and a1/ra-save order.
 * Low and High stopped without an integrated match. Ordinary C remains plausible; retain
 * INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern s32 D_L39_0024D760[];
extern u8 D_001DE9D4;
extern s32 func_L39_006CEA18(void *, s32);
extern s32 func_L39_006D08E8(void *);
typedef struct { u8 pad[0x38]; u8 *member; } Base_6DF118;
void func_L39_006DF118(void) {
    Base_6DF118 *base = (Base_6DF118 *)D_L39_0024D760[0];
    u8 *p = base->member;
    func_L39_006CEA18(p, 0);
    if (p[0x34] != 0) {
        func_L39_006D08E8(p);
        D_001DE9D4 = 1;
    }
}
