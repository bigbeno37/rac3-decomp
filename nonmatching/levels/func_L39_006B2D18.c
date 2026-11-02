/* Retail-derived draft; never linked.
 * 4 instruction differences: global high-half v1 versus v0 and load/save/second-argument
 * ordering; unchanged from Low. Low and High stopped without a complete integrated match;
 * ordinary C remains plausible and INCLUDE_ASM is retained. High confirmed the caller
 * passes an unused object argument; the retained draft preserves that signature.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern s32 D_L39_0024D760[];
extern s32 func_L39_006DCAD0(void *, s32);

typedef struct State_006B2D18 {
    u8 pad[0x50];
    void *object;
} State_006B2D18;

void func_L39_006B2D18(void *unused) {
    union {
        s32 address;
        State_006B2D18 *state;
    } handle;
    handle.address = D_L39_0024D760[0];
    func_L39_006DCAD0(handle.state->object, 0);
}
