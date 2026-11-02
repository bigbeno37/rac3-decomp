#include "common.h"

INCLUDE_ASM("asm/levels", func_L40_003F6028);

/* localdecomp:start func_L40_003F6078 */
typedef struct { u8 pad[0x1C]; s32 index; } LookupIndex_L40_003F6078;
typedef struct { u8 pad[0x68]; LookupIndex_L40_003F6078 *entry; } LookupObject_L40_003F6078;
typedef struct { u8 pad[0x88]; s32 values[1]; } LookupTable_L40_003F6078;
extern LookupTable_L40_003F6078 *D_L40_0035746C[];
s32 func_L40_003F6078(LookupObject_L40_003F6078 *object) {
    return D_L40_0035746C[0]->values[object->entry->index];
}
/* localdecomp:end func_L40_003F6078 */
