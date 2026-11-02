/*
 * Unresolved retail-derived draft; not linked.
 * The best 100-byte draft has 15 positional differences because the scalar global uses GP addressing instead of retail's HI/LO load. Actual ELF places the pointer in BSS; High's rejected data-section probe was unsupported, and its traversal rewrite worsened the result. All eight calls and both arguments are preserved. US remains unchecked.
 * Low and High remain unresolved; retain INCLUDE_ASM.
 */
#include "common.h"
extern u8 *D_L07_001DF41C;
extern void func_L07_003A3BB0(void *, s32);
void func_L07_00332230(void *object, s32 value) {
    s32 *p = (s32 *)((u8 *)*(void **)((u8 *)object + 0x68) + 0x50);
    s32 i;
    for (i = 7; i >= 0; i--) {
        func_L07_003A3BB0(D_L07_001DF41C + (*p++ << 8), value);
    }
}
