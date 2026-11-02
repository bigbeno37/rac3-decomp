#include "common.h"

INCLUDE_ASM("asm/levels", func_L39_0068F810);

INCLUDE_ASM("asm/levels", func_L39_0068FA28);

INCLUDE_ASM("asm/levels", func_L39_0068FA80);

LINKER_REMNANT("asm/levels", func_L39_0068FFC8);

INCLUDE_ASM("asm/levels", func_L39_0068FFD8);

LINKER_REMNANT("asm/levels", func_L39_00690860);

/* localdecomp:start func_L39_00690868 */
extern u8 D_L39_0047C820[];
extern void func_L39_00688400(void *, s32);

void func_L39_00690868(void *arg0, s32 arg1) {
    *(void **)((u8 *)arg0 + 0x60) = D_L39_0047C820;
    func_L39_00688400(arg0, arg1);
}
/* localdecomp:end func_L39_00690868 */

INCLUDE_ASM("asm/levels", func_L39_00690890);

/* localdecomp:start func_L39_00690DB8 */
extern void func_L39_0068ADC8(void *);
extern void func_L39_00690DB8(void *);

extern void func_L39_0067F168();
void func_L39_00690DB8(void *p) {
    func_L39_0067F168(p);
    func_L39_0068ADC8(p);
}
/* localdecomp:end func_L39_00690DB8 */

INCLUDE_ASM("asm/levels", func_L39_00690DE8);
