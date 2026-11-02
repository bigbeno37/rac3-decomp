/* Retail-derived semantic draft; never linked.
 * PAL and US body checks match, but the current C integration path drops the trailing
 * nonzero fill word at PAL 0x00516234. Ordinary C; keep the assembly marker.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"

typedef struct {
    u8 pad[0xC8];
    s32 value;
} Setter_L39_00516228;

s32 func_L39_00516228(Setter_L39_00516228 *self, s32 value) {
    self->value = value;
    return 0;
}
