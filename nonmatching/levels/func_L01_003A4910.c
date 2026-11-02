/* Retail-derived draft; never linked.
 * 5 diff lines; 36 bytes versus retail 40: sltiu writes a1 directly, omitting v0-to-a1
 * copy and shortening branch displacement. Low and High stopped without a complete
 * integrated match; ordinary C remains plausible and INCLUDE_ASM is retained.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
s32 func_L01_003A4910(u8 *a0) {
    s32 result = 0;
    if (a0[0x95] == 6) {
        result = a0[0x20] == 0x10;
    }
    return result;
}
