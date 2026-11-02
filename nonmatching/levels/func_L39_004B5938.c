/* Retail-derived draft; never linked.
 * 5 differing instructions; correct 24-byte size; shift/mask ordering and v0/v1/a0
 * allocation differ. Low and High stopped without a complete integrated match; ordinary C
 * remains plausible and INCLUDE_ASM is retained.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
u32 func_L39_004B5938(u32 value) {
    return ((value << 8) & 0xFF00) | ((value & 0xFF00) >> 8);
}
