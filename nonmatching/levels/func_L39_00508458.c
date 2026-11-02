/* Retail-derived draft; never linked.
 * 0 body bytes PAL and US using retained Low objects; PAL integration loses CDCDCDCD word
 * at 0x0050846C before next entry 0x00508470. Executable20-byte body PAL/US exact;
 * existing PAL C integration drops external +20 CD fill. US pad copy can preserve it, but
 * does not fix PAL. Ordinary C unresolved, zero High probes. Callback return not fully
 * established; taking address only, document prototype caveat. Low and High completed
 * without an integrated match; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern void func_L39_005094F8(void *);
s32 func_L39_00508458(void *arg0) {
    *(void (**)(void *))((u8 *)arg0 + 8) = func_L39_005094F8;
    return 0;
}
