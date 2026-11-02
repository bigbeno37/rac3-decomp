/* Retail-derived draft; never linked.
 * 1 diff in Low compile-01.log, independently confirmed from raw ELF: all 12 executable
 * bytes agree; missing trailing 0xCDCDCDCD at +0xC in the 16-byte catalogue span. Low and
 * High stopped without an integrated match. Ordinary C remains plausible; retain
 * INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern s32 D_L39_0046B638[];

void func_L39_004DD240(s32 arg0) {
    D_L39_0046B638[0] = arg0;
}
