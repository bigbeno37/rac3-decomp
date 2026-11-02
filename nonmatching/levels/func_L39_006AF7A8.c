/* Retail-derived draft; never linked.
 * 4 differing instruction positions at correct 40-byte size: global high-half v1 vs v0 and
 * global load scheduled after ra save/a1 setup rather than before. Low and High stopped
 * without a complete integrated match; ordinary C remains plausible and INCLUDE_ASM is
 * retained.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern s32 D_L39_0024D760[];
extern s32 func_L39_006DCAD0(void *, s32);
typedef struct { u8 pad[0x50]; void *object; } State_006AF7A8;
void func_L39_006AF7A8(void *unused) {
    State_006AF7A8 *state = (State_006AF7A8 *)D_L39_0024D760[0];
    func_L39_006DCAD0(state->object, 0);
}
