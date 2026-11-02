/* Retail-derived draft; never linked.
 * 8 diff; 56 bytes; register allocation only. Low and High stopped without an integrated
 * match. Ordinary C remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct { u8 pad[0x84]; s16 index; } Index_L09_403E40;
typedef struct { u8 pad[0x50]; Index_L09_403E40 *object; u8 tail[0x40C]; } Entry_L09_403E40;
typedef struct { u8 pad[0x20]; u8 value; } Value_L09_403E40;
typedef struct { u8 pad[0x1C]; Value_L09_403E40 *object; } Slot_L09_403E40;
extern u8 D_L09_001E2B80[];
extern Slot_L09_403E40 *D_L09_001DF884[];
void func_L09_00403E40(s32 index, s32 value) {
    u8 *base = D_L09_001E2B80;
    Slot_L09_403E40 *slots = D_L09_001DF884[0];
    Index_L09_403E40 *object;
    index *= 0x460;
    index += (s32)base;
    object = *(Index_L09_403E40 **)(index + 0x50);
    slots[object->index].object->value = value;
}
