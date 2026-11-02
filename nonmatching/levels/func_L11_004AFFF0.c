/* Retail-derived semantic draft; never linked.
 * The 16-byte catalogue extent excludes the live return delay-slot comparison at
 * 0x004B0000, classified separately as a remnant. The complete equality-test draft needs
 * 20 bytes; no full match.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
/* Preserved semantic draft from Low; NOT a passing candidate.
 * The catalogue excludes the live return delay slot at 0x004B0000.
 */
#include "common.h"
extern s32 D_L11_0016C5E4[];
s32 func_L11_004AFFF0(void) {
    return D_L11_0016C5E4[0] == 1;
}
