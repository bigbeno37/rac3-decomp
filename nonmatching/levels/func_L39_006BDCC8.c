/* Retail-derived draft; never linked.
 * 3 diff: global high-half register v1 versus v0, and singleton load versus ra-save
 * scheduling; unchanged from Low. Low and High stopped without an integrated match.
 * Ordinary C remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct { u8 pad[0xE0]; void *field_E0; } S_006BDCC8;
extern S_006BDCC8 *D_L39_00247914[];
extern void func_L39_006BD408(void *, s32);
s32 func_L39_006BDCC8(void *arg0, s32 arg1) {
    S_006BDCC8 *object = D_L39_00247914[0];
    void *child = object->field_E0;
    func_L39_006BD408(child, arg1);
    return 1;
}
