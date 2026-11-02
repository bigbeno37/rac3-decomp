/* Retail-derived draft; never linked.
 * PAL and US: Low checks report 1 diff; independent raw-object audit confirms all 12
 * executable bytes match, but trailing 0xCDCDCDCD at +0xC is missing from the fixed
 * 16-byte span. Low and High stopped without an integrated match. Ordinary C remains
 * plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"

typedef struct GetterValue_004CC800 {
    u8 pad[0x14];
    s32 value;
} GetterValue_004CC800;

typedef struct GetterObject_004CC800 {
    s32 field0;
    GetterValue_004CC800 *value;
} GetterObject_004CC800;

s32 func_L39_004CC800(GetterObject_004CC800 *arg0) {
    return arg0->value->value;
}
