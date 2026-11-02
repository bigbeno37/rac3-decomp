/*
 * Unresolved retail-derived draft; not linked.
 * Three stores remain reordered in the 104-byte draft across all 49 PAL placements. High recovered their order only with an extra assembler nop, producing 108 bytes. Future integration also requires a consistent structure type with the existing caller. US remains unchecked.
 * Existing flags: -O2 -G8 -fopt-stack -mno-check-zero-division -mno-split-addresses.
 * Low and High remain unresolved; retain INCLUDE_ASM.
 */
#include "common.h"
typedef struct {
    f32 m[4][4];
    s32 c40, c44, c48, c4C;
    s32 x50, x54, x58;
    f32 x5C, x60;
    s32 x64;
    f32 x68, x6C;
    long x70, x78, x80, x88;
    f32 r[4][4];
    f32 rot[4];
} Init_305C50;
void func_L01_00305C50(Init_305C50 *p) {
    p->x70 = 0;
    p->m[0][2] = -1.0f;
    p->m[1][2] = 1.0f;
    p->m[2][2] = -1.0f;
    p->m[3][2] = 1.0f;
    p->m[0][1] = -1.0f;
    p->m[2][1] = 1.0f;
    p->m[3][1] = 1.0f;
    *(s32 *)&p->m[0][0] = 0;
    *(s32 *)&p->m[1][0] = 0;
    *(s32 *)&p->m[2][0] = 0;
    *(s32 *)&p->m[3][0] = 0;
    p->m[0][3] = 1.0f;
    p->m[1][3] = 1.0f;
    p->m[2][3] = 1.0f;
    p->x80 = 0xFF9000000260L;
    p->m[3][3] = 1.0f;
    p->m[1][1] = -1.0f;
}
