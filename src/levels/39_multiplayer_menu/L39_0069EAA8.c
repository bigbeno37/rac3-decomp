#include "common.h"

/* localdecomp:start func_L39_0069EAA8 */
typedef struct Child_69EAA8 Child_69EAA8;
typedef struct { u8 pad[0x24]; void (*set)(void *, const char *); } Vtable_69EAA8;
struct Child_69EAA8 { u8 pad[0x60]; Vtable_69EAA8 *vt; };
typedef struct { u8 pad[0x110]; Child_69EAA8 *first; Child_69EAA8 *second; u8 gap[0x194]; u8 flag; } Self_69EAA8;
void func_L39_0069EAA8(void *arg0, const char *first, const char *second, s32 flag) {
    Self_69EAA8 *self = arg0;
    self->first->vt->set(self->first, first);
    self->second->vt->set(self->second, second);
    self->flag = flag;
}
/* localdecomp:end func_L39_0069EAA8 */

LINKER_REMNANT("asm/levels", func_L39_0069EB08);

INCLUDE_ASM("asm/levels", func_L39_0069EB18);

LINKER_REMNANT("asm/levels", func_L39_0069F0F8);

/* localdecomp:start func_L39_0069F100 */
extern void func_L39_00688400(void *, s32);
extern u8 D_L39_0047D410[];

void func_L39_0069F100(void *arg0, s32 arg1) {
    *(void **)((u8 *)arg0 + 0x60) = D_L39_0047D410;
    func_L39_00688400(arg0, arg1);
}
/* localdecomp:end func_L39_0069F100 */

/* localdecomp:start func_L39_0069F128 */
extern f32 D_L39_001DCD60;
extern f32 D_L39_001DCD64;
extern f32 D_L39_001DCD68;
extern f32 D_L39_001DCD6C;
extern f32 D_L39_001DCD70;
extern void func_L39_00688460(void *, f32, f32, f32, f32, f32, s32 *, s32 *, s32 *, s32 *, s32 *);
void func_L39_0069F128(void *self) {
    s32 unused;
    func_L39_00688460(self, D_L39_001DCD60, D_L39_001DCD64, D_L39_001DCD68, D_L39_001DCD6C, D_L39_001DCD70, &unused, &unused, &unused, &unused, &unused);
}
/* localdecomp:end func_L39_0069F128 */

INCLUDE_ASM("asm/levels", func_L39_0069F168);

/* localdecomp:start func_L39_0069F310 */
extern void func_L39_0068ADC8(void *);
extern void func_L39_0069F310(void *);

extern void func_L39_0067F168();
void func_L39_0069F310(void *p) {
    func_L39_0067F168(p);
    func_L39_0068ADC8(p);
}
/* localdecomp:end func_L39_0069F310 */

INCLUDE_ASM("asm/levels", func_L39_0069F340);
