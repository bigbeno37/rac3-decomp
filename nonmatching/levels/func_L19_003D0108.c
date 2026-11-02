/* Retail-derived draft; never linked.
 * 2 diff: sd ra and addiu a1 address-low instructions swapped. Low and High stopped
 * without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is
 * retained. The High draft preserves the reviewed callee prototype; its exploratory
 * effect[12] bound is unproven and must not be treated as a recovered object layout.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct { u8 pad[0x68]; u8 *data; } S_L19_003D0108;
typedef struct {
    s32 n; f32 f4; u8 pad8[16]; f32 f18, f1C, f20, f24, f28, f2C, f30;
    u8 data[1];
} P_0040A478;
extern P_0040A478 D_L19_001D64E0[];
extern void func_L01_0040C948(s32 *, P_0040A478 *);
typedef struct { u8 pad[0x90]; s32 effect[12]; } EffectData_L19_003D0108;
typedef struct { u8 pad[0x68]; EffectData_L19_003D0108 *data; } EffectOwner_L19_003D0108;
void func_L19_003D0108(EffectOwner_L19_003D0108 *self)
{
    func_L01_0040C948(self->data->effect, D_L19_001D64E0);
}
