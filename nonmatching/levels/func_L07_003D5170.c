/* Retail-derived draft; never linked.
 * The scalar pool-pointer draft is 100 bytes versus 104 retail bytes: a GP-relative load
 * replaces the two-word HI/LO load, causing 16 positional differences. Actual BSS
 * storage supports a scalar pointer, not the earlier unsized pointer-array declaration.
 * All three callee contracts and literal member offsets are preserved. Cross-file helper
 * declarations still need reconciliation before integration. US remains unchecked.
 * Retain INCLUDE_ASM.
 * Existing file flags preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct { u8 pad[190]; u8 flags; } S452;
typedef struct { u8 pad0[8]; u8 state; u8 pad9[0x1B]; s32 index; f32 progress; } State_3D5170;
typedef struct { u8 pad0[0x68]; State_3D5170 *state; } Object_3D5170;
extern u8 *D_L07_001DF41C;
extern void func_L07_003D51D8(Object_3D5170 *);
extern void func_L01_00456230(S452 *, s32);
extern void func_L01_004450F0(void *, s32, s32);
void func_L07_003D5170(Object_3D5170 *obj) {
    State_3D5170 *state = obj->state;
    state->progress = 0.0f;
    func_L07_003D51D8(obj);
    func_L01_00456230((S452 *)(D_L07_001DF41C + (state->index << 8)), 0);
    state->state = 1;
    func_L01_004450F0(obj, 1, -1);
}
