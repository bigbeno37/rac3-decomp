#include "common.h"

INCLUDE_ASM("asm/levels", func_L39_004DF158);

INCLUDE_ASM("asm/levels", func_L39_004DF260);

INCLUDE_ASM("asm/levels", func_L39_004DF408);

INCLUDE_ASM("asm/levels", func_L39_004DF410);

INCLUDE_ASM("asm/levels", func_L39_004DF668);

INCLUDE_ASM("asm/levels", func_L39_004DF678);

INCLUDE_ASM("asm/levels", func_L39_004DF688);

INCLUDE_ASM("asm/levels", func_L39_004DF698);

INCLUDE_ASM("asm/levels", func_L39_004DF6A8);

INCLUDE_ASM("asm/levels", func_L39_004DF6B8);

INCLUDE_ASM("asm/levels", func_L39_004DF820);

INCLUDE_ASM("asm/levels", func_L39_004DFB38);

INCLUDE_ASM("asm/levels", func_L39_004DFB88);

INCLUDE_ASM("asm/levels", func_L39_004DFD50);

INCLUDE_ASM("asm/levels", func_L39_004E00C8);

INCLUDE_ASM("asm/levels", func_L39_004E0280);

INCLUDE_ASM("asm/levels", func_L39_004E03B8);

INCLUDE_ASM("asm/levels", func_L39_004E0490);

INCLUDE_ASM("asm/levels", func_L39_004E0698);

INCLUDE_ASM("asm/levels", func_L39_004E09E0);

INCLUDE_ASM("asm/levels", func_L39_004E0A58);

INCLUDE_ASM("asm/levels", func_L39_004E0B10);

INCLUDE_ASM("asm/levels", func_L39_004E0BC8);

INCLUDE_ASM("asm/levels", func_L39_004E0C88);

INCLUDE_ASM("asm/levels", func_L39_004E0D60);

INCLUDE_ASM("asm/levels", func_L39_004E0E98);

/* localdecomp:start func_L39_004E0ED0 */
s32 func_L39_004DD858(s32);
s32 func_L39_004EA5A8(s32);

s32 func_L39_004E0ED0(void *arg0) {
    s32 temp_v1;

    if (arg0 != 0) {
        temp_v1 = (*(s32 *)arg0);
        if (temp_v1 == 6) {
            return func_L39_004EA5A8((*(s32 *)((u8 *)arg0 + 0xC)));
        }
        if (temp_v1 == 0x74) {
            return func_L39_004DD858((*(s32 *)((u8 *)arg0 + 0xC)));
        }
        return 0;
    }
    return 0;
}
/* localdecomp:end func_L39_004E0ED0 */

INCLUDE_ASM("asm/levels", func_L39_004E0F28);

INCLUDE_ASM("asm/levels", func_L39_004E1060);

INCLUDE_ASM("asm/levels", func_L39_004E10B0);

INCLUDE_ASM("asm/levels", func_L39_004E1138);

INCLUDE_ASM("asm/levels", func_L39_004E1160);

INCLUDE_ASM("asm/levels", func_L39_004E1200);

INCLUDE_ASM("asm/levels", func_L39_004E1268);

INCLUDE_ASM("asm/levels", func_L39_004E1320);

INCLUDE_ASM("asm/levels", func_L39_004E1478);

/* localdecomp:start func_L39_004E15D8 */
extern u8 D_L39_004F4540[];
extern u8 D_L39_00477290[];
extern s32 func_L39_004E1610(void *, void *, void *, s32, s32);
s32 func_L39_004E15D8(void *arg0, s32 arg1, s32 arg2) {
    return func_L39_004E1610(D_L39_004F4540, D_L39_00477290, arg0, arg1, arg2);
}
/* localdecomp:end func_L39_004E15D8 */

INCLUDE_ASM("asm/levels", func_L39_004E1610);

INCLUDE_ASM("asm/levels", func_L39_004E18B8);

INCLUDE_ASM("asm/levels", func_L39_004E1A78);

INCLUDE_ASM("asm/levels", func_L39_004E1CB8);

INCLUDE_ASM("asm/levels", func_L39_004E1DC8);

INCLUDE_ASM("asm/levels", func_L39_004E2398);

INCLUDE_ASM("asm/levels", func_L39_004E23D8);

INCLUDE_ASM("asm/levels", func_L39_004E2440);

INCLUDE_ASM("asm/levels", func_L39_004E2450);

INCLUDE_ASM("asm/levels", func_L39_004E2D20);

INCLUDE_ASM("asm/levels", func_L39_004E2D68);

/* localdecomp:start func_L39_004E2DD0 */
typedef struct Object_4E2DD0 Object_4E2DD0;
typedef struct Dispatch_4E2DD0 {
    s32 (*initialize)(Object_4E2DD0 *, void *, s32, s32);
} Dispatch_4E2DD0;
struct Object_4E2DD0 {
    Dispatch_4E2DD0 *dispatch;
};
s32 func_L39_004E2DD0(Object_4E2DD0 *self, Dispatch_4E2DD0 *dispatch, void *arg2, s32 arg3, s32 arg4) {
    self->dispatch = dispatch;
    return dispatch->initialize(self, arg2, arg3, arg4);
}
/* localdecomp:end func_L39_004E2DD0 */

INCLUDE_ASM("asm/levels", func_L39_004E2E00);

INCLUDE_ASM("asm/levels", func_L39_004E2E50);

INCLUDE_ASM("asm/levels", func_L39_004E2EA0);

INCLUDE_ASM("asm/levels", func_L39_004E2EF0);

INCLUDE_ASM("asm/levels", func_L39_004E2F40);

INCLUDE_ASM("asm/levels", func_L39_004E2F70);

INCLUDE_ASM("asm/levels", func_L39_004E2FC0);

/* localdecomp:start func_L39_004E3000 */
typedef struct VTable_4E3000 {
    unsigned char pad[0x18];
    void (*dispatch)(void *, int, int, int);
} VTable_4E3000;
typedef struct Object_4E3000 {
    VTable_4E3000 *vtable;
} Object_4E3000;

void func_L39_004E3000(Object_4E3000 *self, int value, int arg2) {
    self->vtable->dispatch(self, 0x101, arg2, value);
}
/* localdecomp:end func_L39_004E3000 */

INCLUDE_ASM("asm/levels", func_L39_004E3028);

INCLUDE_ASM("asm/levels", func_L39_004E3050);

INCLUDE_ASM("asm/levels", func_L39_004E3060);

INCLUDE_ASM("asm/levels", func_L39_004E3748);

INCLUDE_ASM("asm/levels", func_L39_004E38F0);

INCLUDE_ASM("asm/levels", func_L39_004E3B68);

INCLUDE_ASM("asm/levels", func_L39_004E3CB8);

INCLUDE_ASM("asm/levels", func_L39_004E3EB8);

INCLUDE_ASM("asm/levels", func_L39_004E3FC0);

INCLUDE_ASM("asm/levels", func_L39_004E42D8);

INCLUDE_ASM("asm/levels", func_L39_004E43F0);

INCLUDE_ASM("asm/levels", func_L39_004E4568);

INCLUDE_ASM("asm/levels", func_L39_004E4578);

INCLUDE_ASM("asm/levels", func_L39_004E4688);

INCLUDE_ASM("asm/levels", func_L39_004E4748);

INCLUDE_ASM("asm/levels", func_L39_004E47A8);

INCLUDE_ASM("asm/levels", func_L39_004E47F8);

/* localdecomp:start func_L39_004E48A8 */
extern s32 func_L39_004E4970(s32, s32 *, s32);
s32 func_L39_004E48A8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 args[6];
    arg6 &= ~8;
    args[0] = arg1;
    args[1] = arg2;
    args[4] = arg5;
    args[3] = arg4;
    args[2] = arg3;
    args[5] = arg6;
    return func_L39_004E4970(arg0, args, arg6);
}
/* localdecomp:end func_L39_004E48A8 */

INCLUDE_ASM("asm/levels", func_L39_004E48E8);

INCLUDE_ASM("asm/levels", func_L39_004E4970);

INCLUDE_ASM("asm/levels", func_L39_004E4A50);

INCLUDE_ASM("asm/levels", func_L39_004E4AE8);

INCLUDE_ASM("asm/levels", func_L39_004E4BE0);

INCLUDE_ASM("asm/levels", func_L39_004E4C68);

INCLUDE_ASM("asm/levels", func_L39_004E4CA8);

INCLUDE_ASM("asm/levels", func_L39_004E4F28);

INCLUDE_ASM("asm/levels", func_L39_004E4F90);

INCLUDE_ASM("asm/levels", func_L39_004E4FC8);

INCLUDE_ASM("asm/levels", func_L39_004E5008);

/* localdecomp:start func_L39_004E5058 */
typedef struct Object_4E5058 Object_4E5058;
struct Object_4E5058 {
    s32 field0;
    s32 field4;
    s32 (*dispatch)(Object_4E5058 *, s32, s32 *);
};
s32 func_L39_004E5058(Object_4E5058 *self, s32 value) {
    if (self == 0 || self->dispatch == 0) return 0;
    return self->dispatch(self, 0x10, &value);
}
/* localdecomp:end func_L39_004E5058 */

INCLUDE_ASM("asm/levels", func_L39_004E5090);

INCLUDE_ASM("asm/levels", func_L39_004E5108);

INCLUDE_ASM("asm/levels", func_L39_004E5168);

INCLUDE_ASM("asm/levels", func_L39_004E5170);
