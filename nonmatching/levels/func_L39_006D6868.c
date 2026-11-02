/* Retail-derived draft; never linked.
 * 13 register-allocation differences remain in the 88-byte body. Independent High review
 * reproduced Low's output. Low and High remain unresolved; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct Copy32_6868 { u8 bytes[32]; } Copy32_6868;
typedef struct Dest_6868 { u8 pad[0x15]; u8 flag; u8 gap[2]; Copy32_6868 value; } Dest_6868;
typedef struct Root_6868 { u8 pad[0x44]; Dest_6868 *dest; } Root_6868;
extern s32 D_L39_0024D760[];
void func_L39_006D6868(Copy32_6868 *arg0) {
    Dest_6868 *p = ((Root_6868 *)D_L39_0024D760[0])->dest;
    p->flag = 0;
    p->value = *arg0;
}
