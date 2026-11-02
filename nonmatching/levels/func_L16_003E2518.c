/* Retail-derived draft; never linked.
 * The fixed assembler emits 80 bytes plus an eight-byte literal pool instead of retail's
 * 96-byte inline-constant body. The checker reports 15 differences; two literal
 * relocations remain unresolved in the raw audit. US explicitly differs. Low and High
 * remain unresolved; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"

typedef int u128_t __attribute__((mode(TI)));
typedef int s128_3D41E8 __attribute__((mode(TI)));
typedef struct {
    u8 p0[0x3C4];
    s16 x3C4;
    s16 x3C6;
    u8 p3C8[8];
    u8 x3D0;
    u8 x3D1;
    u8 x3D2;
    u8 p3D3;
    f32 x3D4;
    f32 x3D8;
    f32 x3DC;
    u8 p3E0[0xC];
    s32 x3EC;
} V_3D41E8;
typedef struct {
    u8 p0[0x10];
    s128_3D41E8 x10;
    u8 p20[3];
    u8 x23;
    u8 p24[0xC];
    u8 x30;
    u8 x31;
    u16 x32;
    u16 x34;
    u8 p36[0x32];
    V_3D41E8 *x68;
    u8 p6C[0x10];
    u16 x7C;
    u8 p7E[0x42];
    u8 xC0[1];
} M_3D41E8;
extern M_3D41E8 *func_L01_003D5C98(M_3D41E8 *, s128_3D41E8 *, s32, s32, s32, s32, u8, f32, f32, f32, f32, f32);
M_3D41E8 *func_L16_003E2518(M_3D41E8 *o, s128_3D41E8 *pos, s32 a, s32 b, s32 n, u8 c, u8 mode, f32 x, f32 y) {
    return func_L01_003D5C98(o, pos, n, mode, a, b, c, 1.0f, 0.3f, 0.013f, x, y);
}
