/* Retail-derived draft; never linked.
 * 20 positional diff; 80 vs 88 bytes. Final store order corrected; sole remaining aligned
 * difference is R_MIPS_LITERAL load versus inline 0x3D80ADFD setup. High fixes the final
 * store order. The shifted comparison is diagnostic only; a real literal relocation
 * remains unresolved. Actual helper float returns conflict with an older void declaration.
 * Low and High stopped without an integrated match. Ordinary C remains plausible; retain
 * INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern f32 func_0038DAB8(f32, f32);
extern f32 func_0038DB00(f32, f32);

typedef struct {
    u8 pad0[0x288];
    f32 f288;
    u8 pad28C[0x1C];
    f32 f2A8;
    u8 pad2AC[0x21C];
    f32 f4C8;
} State_3C90F8;
typedef struct {
    u8 pad0[0x68];
    State_3C90F8 *state;
    u8 pad6C[0x8C];
    f32 fF8;
} Object_3C90F8;

void func_L07_003C90F8(Object_3C90F8 *obj) {
    State_3C90F8 *p = obj->state;
    f32 result;
    p->f4C8 = func_0038DAB8(p->f4C8, 0.0628318563f);
    result = func_0038DB00(p->f4C8, obj->fF8);
    p->f288 = result;
    p->f2A8 = result;
}
