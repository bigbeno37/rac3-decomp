/* Retail-derived draft; never linked.
 * 11/22 raw PAL words differ after resolving all six actual object relocations; address
 * setup and counter/values register allocation. Low and High stopped without an integrated
 * match. Ordinary C remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct { s32 index; s32 other; } RestoreEntry_3328D0;
extern s32 D_001427F0[];
extern RestoreEntry_3328D0 D_L07_002B0EB0[];
extern s32 D_L07_001E0CD0[];
void func_L07_003328D0(void *arg0) {
    u8 *p = *(u8 **)((u8 *)arg0 + 0x68);
    if (p[0xBF]) {
        s32 i;
        RestoreEntry_3328D0 *entry = D_L07_002B0EB0;
        for (i = 0; i < 16; i++) {
            D_001427F0[entry->index] = D_L07_001E0CD0[i];
            entry++;
        }
        p[0xBF] = 0;
    }
}
