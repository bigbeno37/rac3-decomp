/* Retail-derived draft; never linked.
 * 15 differing words; 84-byte candidate vs 88-byte retail; frame, branch layout and
 * restore order. Low and High stopped without an integrated match. Ordinary C remains
 * plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct { u8 pad[0xF8]; void *fF8; void *fFC; } S_004C23A0_A;
typedef struct { u8 pad[0x104]; void *f104; void *f108; } S_004C23A0_B;
typedef struct { u8 pad0[0x54]; S_004C23A0_A *f54; u8 pad58[0x84]; S_004C23A0_B *fDC; } S_004C23A0;
extern s32 func_L39_004DD690(void *, void *);
s32 func_L39_004C23A0(S_004C23A0 *self) {
    switch (func_L39_004DD690(self->f54->fF8, self->fDC->f104)) {
    case 0: return 0;
    default: return func_L39_004DD690(self->f54->fFC, self->fDC->f108) != 0;
    }
}
