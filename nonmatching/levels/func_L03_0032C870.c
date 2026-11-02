/* Retail-derived draft; never linked.
 * 4 positional diffs; complete 16-byte struct still emits HI16/LO16 address pair; 32
 * candidate bytes versus 28 retail code bytes. Low and High completed without an
 * integrated match; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
/* The returned interface occupies all four retail pointer slots. */
typedef struct Interface_L03_0032C870 {
    void *entries[4];
} Interface_L03_0032C870;
extern Interface_L03_0032C870 D_L03_001DD118;

void *func_L03_0032C870(s32 arg0, s32 selector, s32 *size) {
    if (selector == 0) {
        *size = sizeof(D_L03_001DD118);
        return &D_L03_001DD118;
    }
    return 0;
}
