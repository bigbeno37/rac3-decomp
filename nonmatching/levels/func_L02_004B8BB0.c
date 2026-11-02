/*
 * Unresolved retail-derived draft; not linked.
 * Twelve checker differences remain: the fixed assembler emits 80 bytes plus a literal pool instead of retail's 104-byte inline-constant body. High's union form produced identical text and relocations; retain the simpler float-literal draft. Both PAL placements were audited, with literal relocations still unresolved. US explicitly differs.
 * Low and High remain unresolved; retain INCLUDE_ASM.
 */
#include "common.h"
typedef struct {
    u8 pad0[0x740];
    f32 a, b;
    u8 pad748[0x25C0 - 0x748];
    u8 *obj;
    s32 state;
} State_4B8BB0;
extern State_4B8BB0 D_L02_001A4BE0;
extern void func_L01_0044EBA0(u8 *obj, f32 *a, f32 *b, f32 scale, f32 da, f32 db);
void func_L02_004B8BB0(void) {
    State_4B8BB0 *p = &D_L02_001A4BE0;
    if (p->state == 0x81 || p->state == 0x50) {
        func_L01_0044EBA0(p->obj, &p->a, &p->b, 0.1745329201f, 0.03141592816f, 0.04188790545f);
    }
}
