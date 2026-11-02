/* Retail-derived draft; never linked.
 * 5 instructions: frame 0x10 versus 0x20; ra slot 8 versus 0x10; restore order s0/ra
 * versus ra/s0. Low and High completed without an integrated match; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern s32 *func_L39_004DBA08(void);
void func_L39_00504500(s32 value) {
    func_L39_004DBA08()[0x38 / sizeof(s32)] = value;
}
