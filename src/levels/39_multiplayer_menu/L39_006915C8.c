#include "common.h"

INCLUDE_ASM("asm/levels", func_L39_006915C8);

INCLUDE_ASM("asm/levels", func_L39_006918A8);

INCLUDE_ASM("asm/levels", func_L39_00691900);

LINKER_REMNANT("asm/levels", func_L39_00691E48);

INCLUDE_ASM("asm/levels", func_L39_00691E60);

LINKER_REMNANT("asm/levels", func_L39_006921B0);

/* localdecomp:start func_L39_006921B8 */
extern u8 D_L39_0047C968[];
extern void func_L39_00688400(void *, s32);
void func_L39_006921B8(void *arg0, s32 arg1) {
    *(void **)((u8 *)arg0 + 0x60) = D_L39_0047C968;
    func_L39_00688400(arg0, arg1);
}
/* localdecomp:end func_L39_006921B8 */

INCLUDE_ASM("asm/levels", func_L39_006921E0);

/* localdecomp:start func_L39_006923F0 */
extern void func_L39_0068ADC8(void *);
extern void func_L39_006923F0(void *);

extern void func_L39_0067F168();
void func_L39_006923F0(void *p) {
    func_L39_0067F168(p);
    func_L39_0068ADC8(p);
}
/* localdecomp:end func_L39_006923F0 */

INCLUDE_ASM("asm/levels", func_L39_00692420);
