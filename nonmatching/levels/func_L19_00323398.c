/* Retail-derived draft; never linked.
 * 2 diff: sd ra and addiu completing global address a1 are swapped; all other instructions
 * and 40-byte size agree. Low and High stopped without a complete integrated match;
 * ordinary C remains plausible and INCLUDE_ASM is retained. Trailing one-element members
 * are draft layout placeholders; their actual extents remain unknown.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct { s32 n; f32 f4; u8 pad8[16]; f32 f18, f1C, f20, f24, f28, f2C, f30; u8 data[1]; } P_0040A478;
extern P_0040A478 D_L19_001D64E0;
extern void func_L01_0040C948(s32 *, P_0040A478 *);
typedef struct { u8 pad[0x70]; s32 values[1]; } Inner_323398;
typedef struct { u8 pad[0x68]; Inner_323398 *inner; } Outer_323398;
void func_L19_00323398(Outer_323398 *arg0) {
    P_0040A478 *params = &D_L19_001D64E0;
    func_L01_0040C948(arg0->inner->values, params);
}
