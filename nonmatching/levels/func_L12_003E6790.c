/*
 * Unresolved retail-derived draft; not linked.
 * Three initial-load instructions differ in the 96-byte body at all four PAL placements. Every later word agrees after resolving actual relocations. Noncanonical global identities were inferred from the tested operands and still require independent corroboration. US remains unchecked.
 * Existing flags: -O2 -G8 -fopt-stack -mno-check-zero-division.
 * Low and High remain unresolved; retain INCLUDE_ASM.
 */
#include "common.h"
extern u8 *D_L12_001DFD1C[];
extern u8 *D_L12_001DFD20[];
extern void *D_L12_001DF2F4;
void func_L12_003E6790(void) {
    u8 *m = D_L12_001DFD1C[0];
    u8 *p = D_L12_001DFD20[0];
    D_L12_001DF2F4 = 0;
    if (m < p) {
        u8 *end = p;
        do {
            if (*(s16 *)(m + 0xAA) == 0x1E6F) {
                p = *(u8 **)(m + 0x68);
                if (p[0x62]) {
                    *(void **)(p + 0x64) = D_L12_001DF2F4;
                    D_L12_001DF2F4 = m;
                }
            }
            m += 0x100;
        } while (m < end);
    }
}
