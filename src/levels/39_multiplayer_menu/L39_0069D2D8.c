#include "common.h"

INCLUDE_ASM("asm/levels", func_L39_0069D2D8);

LINKER_REMNANT("asm/levels", func_L39_0069DA30);

/* localdecomp:start func_L39_0069DA38 */
extern u8 D_L39_0047D210[];
extern void func_L39_00688400(void *, s32);
void func_L39_0069DA38(void *arg0, s32 arg1) {
    *(void **)((u8 *)arg0 + 0x60) = D_L39_0047D210;
    func_L39_00688400(arg0, arg1);
}
/* localdecomp:end func_L39_0069DA38 */

INCLUDE_ASM("asm/levels", func_L39_0069DA60);

/* localdecomp:start func_L39_0069DE00 */
extern void func_L39_0068ADC8(void *);
extern void func_L39_0069DE00(void *);

extern void func_L39_0067F168();
void func_L39_0069DE00(void *p) {
    func_L39_0067F168(p);
    func_L39_0068ADC8(p);
}
/* localdecomp:end func_L39_0069DE00 */

INCLUDE_ASM("asm/levels", func_L39_0069DE30);
