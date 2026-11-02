#include "common.h"

INCLUDE_ASM("asm/levels", func_L39_006AE3D8);

INCLUDE_ASM("asm/levels", func_L39_006AE8F8);

INCLUDE_ASM("asm/levels", func_L39_006AED18);

/* localdecomp:start func_L39_006AEF20 */
typedef struct MenuChild_6AEF20 MenuChild_6AEF20;
typedef struct {
    u8 pad0[0x20];
    s32 (*set_state)(MenuChild_6AEF20 *, s32, s32);
    u8 pad24[0x28];
    s32 (*set_flags)(MenuChild_6AEF20 *, s32, s32);
} MenuVtable_6AEF20;
struct MenuChild_6AEF20 {
    u8 pad0[0x60];
    MenuVtable_6AEF20 *vtable;
};
typedef struct {
    u8 pad0[0x11C];
    MenuChild_6AEF20 *child;
} Menu_6AEF20;
void func_L39_006AEF20(Menu_6AEF20 *self) {
    self->child->vtable->set_state(self->child, 3, 0);
    self->child->vtable->set_flags(self->child, 0x40, 1);
}
/* localdecomp:end func_L39_006AEF20 */

INCLUDE_ASM("asm/levels", func_L39_006AEF70);

INCLUDE_ASM("asm/levels", func_L39_006AF070);

LINKER_REMNANT("asm/levels", func_L39_006AF160);

INCLUDE_ASM("asm/levels", func_L39_006AF168);

LINKER_REMNANT("asm/levels", func_L39_006AF2E8);

/* localdecomp:start func_L39_006AF2F0 */
extern void func_L39_00688400(void *, s32);
extern u8 D_L39_0047DEA0[];

void func_L39_006AF2F0(void *arg0, s32 arg1) {
    *(void **)((u8 *)arg0 + 0x60) = D_L39_0047DEA0;
    func_L39_00688400(arg0, arg1);
}
/* localdecomp:end func_L39_006AF2F0 */

INCLUDE_ASM("asm/levels", func_L39_006AF318);

INCLUDE_ASM("asm/levels", func_L39_006AF570);

INCLUDE_ASM("asm/levels", func_L39_006AF5D8);
