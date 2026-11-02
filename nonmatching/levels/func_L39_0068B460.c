/* Retail-derived semantic draft; never linked.
 * A fixed-address draft passes PAL, but US requires 0x002415C0 instead of PAL 0x00241440.
 * Symbolic Low and High forms retain five code-generation differences. The PAL-only draft
 * is not integrated.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern u8 D_L39_001DC3F8;
void func_L39_0068B460(void) {
    *(s32 *)0x00241440 = 7;
    D_L39_001DC3F8 = 1;
}
