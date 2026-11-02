/* Retail-derived draft; never linked.
 * Low PAL/US check.py: 1 diff, missing trailing CDCDCDCD; independent raw-byte
 * verification confirms all three executable words match in both regions. Low and High
 * stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"

s32 func_L39_004DE908(void *arg0) {
    return *(s32 *)((u8 *)*(void **)arg0 + 4);
}
