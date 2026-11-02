/* Retail-derived draft; never linked.
 * 5 instruction-order differences: prologue move/save swap and three epilogue positions;
 * independently confirmed by resolving only three genuine call relocations. The free
 * helper exists in the actual overlay but is only partly decoded. Its return prototype
 * remains unproven and was not changed to force allocation. Low and High stopped without
 * an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct Container_515C28 { s32 count; s32 capacity; void *entries; } Container_515C28;
extern void func_L39_00515C70(Container_515C28 *, s32);
extern void func_L39_004F7620(void *);
s32 func_L39_00515C28(Container_515C28 **self) {
    func_L39_00515C70(*self, 0);
    func_L39_004F7620((*self)->entries);
    func_L39_004F7620(*self);
    *self = 0;
    return 0;
}
