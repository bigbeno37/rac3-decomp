#include "common.h"

/* localdecomp:start func_L01_003F3740 */
typedef struct { u8 pad[0x124]; u8 *object; u8 tail[0x338]; } Entry_3F3740;
extern Entry_3F3740 D_L01_001E2A40[];
void func_L01_003F3740(s32 index) {
    u8 *entry = (u8 *)(index * 0x460 + (s32)D_L01_001E2A40);
    u8 *object = *(u8 **)(entry + 0x124);
    if (object != 0) {
        *(s32 *)(object + 0x98) = 0;
    }
}
/* localdecomp:end func_L01_003F3740 */

INCLUDE_ASM("asm/levels", func_L01_003F3768);

/* localdecomp:start func_L01_003F37A0 */
typedef struct { s32 a, b, c, d, e; } S_37D000;
extern S_37D000 D_L01_002F7680[];
void func_L01_003F37A0(u8 *p) {
    void (*f)(u8 *) = (void (*)(u8 *))D_L01_002F7680[*(s16 *)(p + 0x8C)].c;
    if (f != 0) {
        f(p);
    }
}
/* localdecomp:end func_L01_003F37A0 */
