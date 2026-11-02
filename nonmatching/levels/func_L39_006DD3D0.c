/* Retail-derived draft; never linked.
 * 4 diff, 48 bytes: initial global/argument load order and condition register; all
 * instructions after initial branch match. Low and High stopped without an integrated
 * match. Ordinary C remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct {
    u8 pad0[0x10];
    s32 field10;
    s32 field14;
    u8 pad18[0x38];
    u8 *child;
} State_006DD3D0;
typedef struct {
    u8 pad0[0x18];
    s32 field18;
} Arg_006DD3D0;
extern s32 D_L39_0024D760[];
void func_L39_006DD3D0(Arg_006DD3D0 *arg0) {
    s32 active = arg0->field18;
    State_006DD3D0 *state = (State_006DD3D0 *)D_L39_0024D760[0];
    u8 *child = state->child;
    if (active != 0) {
        active = 0x51;
        state->field10 = active;
        if (state->field14 == 0) {
            state->field14 = active;
        }
    }
    child[0x9C] = 0;
}
