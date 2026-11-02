/* Retail-derived draft; never linked.
 * Ten of 24 words differ in frame layout and scheduling. The retained scalar-input draft
 * copies the evidenced 18 bytes and forwards all four helper arguments; its natural
 * structure extent does not prove the original allocation size. Low and High remain
 * unresolved; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct { unsigned long a, b; u16 c; } Template518E48;
extern Template518E48 D_L39_00479AA0;
extern Template518E48 D_L39_00453DB8;
extern void *func_L39_00518EA8(s32, s32 *, void *, s32);
void *func_L39_00518E48(s32 value) {
    unsigned long a = D_L39_00479AA0.a;
    unsigned long b = D_L39_00479AA0.b;
    u16 c = D_L39_00479AA0.c;
    D_L39_00453DB8.a = a;
    D_L39_00453DB8.b = b;
    D_L39_00453DB8.c = c;
    func_L39_00518EA8(2, &value, &D_L39_00453DB8, 18);
    return &D_L39_00453DB8;
}
