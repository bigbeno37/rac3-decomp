/* Retail-derived draft; never linked.
 * 4 positional instruction differences: global lui register and ra restore scheduling. Low
 * and High stopped without an integrated match. Ordinary C remains plausible; retain
 * INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern u8 *func_L01_003F34E0(s32, s32);
typedef struct { u8 pad[0x84]; s16 index; } Lookup_5733F8;
typedef struct { u8 pad[0x46]; s16 state; } Object_5733F8;
typedef struct { u8 pad[0x1c]; Object_5733F8 *object; } Entry_5733F8;
extern Entry_5733F8 *D_L39_0024B850[];
void func_L39_005733F8(void) {
    Lookup_5733F8 *lookup = (Lookup_5733F8 *)func_L01_003F34E0(0, 0x21);
    D_L39_0024B850[0][lookup->index].object->state = 0x19;
}
