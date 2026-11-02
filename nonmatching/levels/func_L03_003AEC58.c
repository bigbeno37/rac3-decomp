/* Retail-derived draft; never linked.
 * 5 instruction differences at offsets 0x4,0x8,0xC,0x10,0x1C in all 6 PAL placements;
 * other-level relocation values unresolved. The existing func_L03_0043F5D0 wrapper omits
 * its consumed float argument and packed-colour return. Independent review of all seven
 * PAL and seven US wrapper placements supports s32(s32,s32,f32), explicitly passing weight
 * to f32 func_0038D0B0(f32) and returning s32 func_0038DBD8(s32,s32,f32). No accepted
 * campaign function depends on this correction; it remains a prerequisite for future
 * integration. The failed cross-placement audit leaves noncanonical relocation values
 * unresolved. Low and High stopped without an integrated match. Ordinary C remains
 * plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct { u8 pad[0x10]; f32 value; } Value_L03_003AEC58;
typedef struct { u8 pad[0x68]; Value_L03_003AEC58 *value; } Object_L03_003AEC58;
extern s32 D_L03_001DE7E8;
extern s32 D_L03_001DE7EC[];
extern s32 func_L03_0043F5D0(s32, s32, f32);
extern void func_0038AE20(s32, s32, s32, s32);
extern void func_003A9440(s32, unsigned long);
void func_L03_003AEC58(Object_L03_003AEC58 *object) {
    f32 weight = object->value->value;
    s32 first = D_L03_001DE7E8;
    s32 second = D_L03_001DE7EC[0];
    s32 color = func_L03_0043F5D0(first, second, weight);
    s32 blue = (color >> 16) & 255;
    s32 green = (color >> 8) & 255;
    func_0038AE20(color & 255, green, blue, (u32)color >> 24);
    func_003A9440(0x47, 0x5360B);
}
