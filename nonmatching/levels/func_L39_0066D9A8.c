/*
 * Unresolved retail-derived draft; not linked.
 * Seven scheduling/allocation differences remain in all 15 PAL placements. The retained draft preserves the existing Obj pointer contract and three helper arguments; the resident global was independently corroborated. US explicitly differs. Requires the owning source's existing Obj definition.
 * Low and High remain unresolved; retain INCLUDE_ASM.
 */
#include "common.h"
extern s32 func_L39_0066D888(Obj *, u8, u8);
extern s32 func_L39_0061E278(void *);
extern s32 D_L39_001A5CD8[];
typedef struct { s32 w0, w4; u8 pad8[0x2c]; s32 w34; u8 pad38[0x18]; u8 b50; } O_66D9A8;
void func_L39_0066D9A8(Obj *o, u8 b, u8 c) {
    O_66D9A8 *s = (O_66D9A8 *)o;
    s32 current;
    if (!func_L39_0066D888(o, b, c)) return;
    current = D_L39_001A5CD8[0];
    o->unk50 = b;
    if (s->w34 == current) func_L39_0061E278(o);
    s->w4 = s->w34 = -1;
}
