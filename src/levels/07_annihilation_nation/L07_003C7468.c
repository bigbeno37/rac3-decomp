#include "common.h"

INCLUDE_ASM("asm/levels", func_L07_003C7468);

INCLUDE_ASM("asm/levels", func_L07_003C7E70);

INCLUDE_ASM("asm/levels", func_L07_003C80C0);

INCLUDE_ASM("asm/levels", func_L07_003C84F8);

INCLUDE_ASM("asm/levels", func_L07_003C8608);

/* localdecomp:start func_L07_003C86D0 */
extern void func_003C2C98(void *, void *);
extern void func_L07_003BB038(s32);
extern void func_L07_003BB1F0(void *);
extern void func_L07_003C8718(void *, s32);

void func_L07_003C86D0(void *arg0) {
    func_003C2C98(arg0, (u8 *)*(void **)((u8 *)arg0 + 0x68) + 0x3C0);
    func_L07_003BB038((s32)arg0);
    func_L07_003BB1F0(arg0);
    func_L07_003C8718(arg0, 1);
}
/* localdecomp:end func_L07_003C86D0 */

INCLUDE_ASM("asm/levels", func_L07_003C8718);

INCLUDE_ASM("asm/levels", func_L07_003C8960);

INCLUDE_ASM("asm/levels", func_L07_003C8A10);

INCLUDE_ASM("asm/levels", func_L07_003C8A88);

INCLUDE_ASM("asm/levels", func_L07_003C8AD0);

/* localdecomp:start func_L07_003C8B18 */
void func_L07_003C8718(void *, s32);
void func_L07_003C8B60(void *, void *);

void func_L07_003C8B18(void *arg0) {
    if ((*(s32 *)((u8 *)((*(void **)((u8 *)arg0 + 0x68))) + 0x4AC)) != -1) {
        func_L07_003C8718(arg0, 0xA);
        return;
    }
    func_L07_003C8B60(arg0, arg0);
}
/* localdecomp:end func_L07_003C8B18 */

INCLUDE_ASM("asm/levels", func_L07_003C8B60);

INCLUDE_ASM("asm/levels", func_L07_003C8BA0);

INCLUDE_ASM("asm/levels", func_L07_003C8C30);

INCLUDE_ASM("asm/levels", func_L07_003C8C90);

INCLUDE_ASM("asm/levels", func_L07_003C8CF8);

INCLUDE_ASM("asm/levels", func_L07_003C8D60);

INCLUDE_ASM("asm/levels", func_L07_003C8FF8);

INCLUDE_ASM("asm/levels", func_L07_003C90F8);

/* localdecomp:start func_L07_003C9150 */
extern f32 func_0038D160(f32, f32);
extern f32 func_0038DB00(f32, f32);
void func_L07_003C9150(void *arg0, f32 *arg1) {
    void *state = *(void **)((u8 *)arg0 + 0x68);
    f32 angle = func_0038D160(arg1[0] - *(f32 *)((u8 *)arg0 + 0x10), arg1[1] - *(f32 *)((u8 *)arg0 + 0x14));
    *(f32 *)((u8 *)state + 0x2A8) = func_0038DB00(angle, *(f32 *)((u8 *)arg0 + 0xF8));
}
/* localdecomp:end func_L07_003C9150 */

INCLUDE_ASM("asm/levels", func_L07_003C91A8);

INCLUDE_ASM("asm/levels", func_L07_003C9280);

INCLUDE_ASM("asm/levels", func_L07_003C9488);

INCLUDE_ASM("asm/levels", func_L07_003C9528);

INCLUDE_ASM("asm/levels", func_L07_003C96C0);

INCLUDE_ASM("asm/levels", func_L07_003C9780);

/* localdecomp:start func_L07_003C97D0 */
s32 func_L07_003C97D0(void *arg0) {
    return *((u8 *)arg0 + 0x20) == 1;
}
/* localdecomp:end func_L07_003C97D0 */

INCLUDE_ASM("asm/levels", func_L07_003C97E0);

INCLUDE_ASM("asm/levels", func_L07_003C99A0);

INCLUDE_ASM("asm/levels", func_L07_003C9C40);

INCLUDE_ASM("asm/levels", func_L07_003C9D50);

INCLUDE_ASM("asm/levels", func_L07_003C9D88);

INCLUDE_ASM("asm/levels", func_L07_003C9E88);
