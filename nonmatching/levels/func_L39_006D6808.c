/* Retail-derived draft; never linked.
 * 14 register-allocation words differ in the 96-byte body. The High draft preserves the
 * established unsized s32 global and 36-byte aggregate with four-byte alignment. Low and
 * High remain unresolved; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct Copy_6D6808H { u32 words[9]; } Copy_6D6808H;
typedef struct Obj_6D6808H { u8 pad0[0x14]; u8 flag; u8 pad15[0x23]; Copy_6D6808H copy; } Obj_6D6808H;
typedef struct Root_6D6808H { u8 pad[0x44]; Obj_6D6808H *obj; } Root_6D6808H;
extern s32 D_L39_0024D760[];
void func_L39_006D6808(Copy_6D6808H *arg0) {
    Obj_6D6808H *obj = ((Root_6D6808H *)D_L39_0024D760[0])->obj;
    obj->flag = 0;
    obj->copy = *arg0;
}
