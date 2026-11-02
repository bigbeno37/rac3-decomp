#include "common.h"

INCLUDE_ASM("asm/levels", func_L39_0068C4E0);

LINKER_REMNANT("asm/levels", func_L39_0068C708);

INCLUDE_ASM("asm/levels", func_L39_0068C718);

INCLUDE_ASM("asm/levels", func_L39_0068C918);

INCLUDE_ASM("asm/levels", func_L39_0068CBE8);

INCLUDE_ASM("asm/levels", func_L39_0068CD28);

INCLUDE_ASM("asm/levels", func_L39_0068CDA8);

LINKER_REMNANT("asm/levels", func_L39_0068D1C0);

/* localdecomp:start func_L39_0068D1C8 */
extern u8 D_L39_0047C520[];
extern void func_L39_00688400(void *, s32);
void func_L39_0068D1C8(void *arg0, s32 arg1) {
    *(void **)((u8 *)arg0 + 0x60) = D_L39_0047C520;
    func_L39_00688400(arg0, arg1);
}
/* localdecomp:end func_L39_0068D1C8 */

/* localdecomp:start func_L39_0068D1F0 */
extern f32 D_L39_001DC46C;
extern f32 D_L39_001DC470;
extern f32 D_L39_001DC474;
extern f32 D_L39_001DC478;
extern f32 D_L39_001DC47C;
extern void func_L39_00688460(void *, f32, f32, f32, f32, f32, s32 *, s32 *, s32 *, s32 *, s32 *);
void func_L39_0068D1F0(void *arg0) {
    s32 temp;
    func_L39_00688460(arg0, D_L39_001DC46C, D_L39_001DC470, D_L39_001DC474, D_L39_001DC478, D_L39_001DC47C, &temp, &temp, &temp, &temp, &temp);
}
/* localdecomp:end func_L39_0068D1F0 */

INCLUDE_ASM("asm/levels", func_L39_0068D230);
