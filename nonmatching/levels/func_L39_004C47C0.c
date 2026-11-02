/* Retail-derived semantic draft; never linked.
 * All 12 executable bytes match in PAL and US, but both checkers report the missing
 * trailing nonzero fill included in the 16-byte catalogue entry. Existing C padding cannot
 * preserve it.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"

typedef struct {
    u8 pad[0x98];
    s32 field_98;
    s32 field_9C;
} Setter_L39_004C47C0;

void func_L39_004C47C0(void *arg0, s32 arg1, s32 arg2) {
    Setter_L39_004C47C0 *self = arg0;
    self->field_98 = arg1;
    self->field_9C = arg2;
}
