/* Retail-derived draft; never linked.
 * Isolated PAL and US checks and complete 104-byte raw comparisons pass. This is a menu-
 * placement draft: its s32(s32) wrapper contract is supported there, while story copies
 * use void(void). The tracked shared wrapper cannot truthfully receive this uniform
 * declaration, and an existing caller also declares this function void. The return
 * reload is evidence-backed. Placement-specific contracts and the caller declaration
 * must be reconciled before integration; casts or aliases do not resolve that conflict.
 * Full linked matching is unverified. Retain INCLUDE_ASM.
 * Existing file flags preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern s32 D_001DBC50;
extern s32 D_001DBC54;
extern s32 D_001DBC58;
extern s32 D_001DBC5C;
extern s32 D_001DBC60;
/* Menu placement contract; tracked shared definition still needs separate repair. */
extern s32 func_L01_00484A80(s32);
extern s32 func_003E8348(s32, s32);
s32 func_L39_0067F100(s32 value) {
    if (D_001DBC58 == -1) D_001DBC58 = D_001DBC50;
    else if (D_001DBC58 == 4) D_001DBC58 = 13;
    else D_001DBC58++;
    D_001DBC54 = value;
    D_001DBC60 = value;
    func_L01_00484A80(value);
    func_003E8348(D_001DBC58, D_001DBC60);
    D_001DBC5C = D_001DBC60;
    return D_001DBC58;
}
