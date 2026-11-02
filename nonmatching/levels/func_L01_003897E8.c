/* Retail-derived draft; never linked.
 * 2 instruction positions: lui a0 and sd ra reversed; remaining 40-byte body agrees. Low
 * and High stopped without a complete integrated match; ordinary C remains plausible and
 * INCLUDE_ASM is retained.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern u8 D_L01_001E1ED0[];
extern u8 D_L01_002B3C10[];
extern void func_L01_0040B858(void *, void *);
void func_L01_003897E8(void) {
    u8 *b = D_L01_002B3C10;
    func_L01_0040B858(D_L01_001E1ED0, b);
}
