/* Retail-derived draft; never linked.
 * 2 differing words at +0x08/+0x0c: table-low addiu and index sll are swapped. Low and
 * High stopped without an integrated match. Ordinary C remains plausible; retain
 * INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern u8 D_L39_002B5E70[];
extern void func_0011D534(void *, s32, s32);
typedef struct { u8 bytes[0x200]; } Entry_005E3A10;
void func_L39_005E3A10(s32 i) {
    Entry_005E3A10 *entry = &((Entry_005E3A10 *)D_L39_002B5E70)[i];
    func_0011D534(entry->bytes, 0, sizeof(entry->bytes));
}
