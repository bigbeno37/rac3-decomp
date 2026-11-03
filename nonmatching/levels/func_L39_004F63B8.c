/* Retail-derived draft; never linked.
 * Two words at +0x40/+0x44 remain swapped: the forward-pointer increment and the second-
 * word store. The 104-byte struct-pair formulation reproduces the earlier near miss. It
 * preserves both helper arguments and reverses sixteen pairs without reversing the words
 * within each pair. All other words agree after the genuine call relocation is resolved.
 * US remains unchecked. Retain INCLUDE_ASM.
 * Existing file flags preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern void func_L39_004F6420(u32 *out, const u32 *key);
typedef struct Pair_004F63B8 { u32 first, second; } Pair_004F63B8;
void func_L39_004F63B8(u32 *out, const u32 *key)
{
    Pair_004F63B8 *front, *back;
    u32 tmp;
    func_L39_004F6420(out, key);
    front = (Pair_004F63B8 *)out;
    back = front + 15;
    if (front < back) {
        tmp = front->first;
        do {
            front->first = back->first;
            back->first = tmp;
            tmp = front->second;
            front->second = back->second;
            front++;
            back->second = tmp;
            back--;
            if (front >= back) break;
            tmp = front->first;
        } while (1);
    }
}
