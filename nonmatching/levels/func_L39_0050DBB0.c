/* Retail-derived draft; never linked.
 * 4 differences: copy temporary v1 instead of retail v0; size, offsets, instruction order
 * and zero return agree. Low and High stopped without a complete integrated match;
 * ordinary C remains plausible and INCLUDE_ASM is retained.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct { u8 bytes[8]; } Copy_L39_0050DBB0;
typedef struct { u8 pad[12]; Copy_L39_0050DBB0 field; } Input_L39_0050DBB0;
s32 func_L39_0050DBB0(Input_L39_0050DBB0 *input, Copy_L39_0050DBB0 *output) {
    *output = input->field;
    return 0;
}
