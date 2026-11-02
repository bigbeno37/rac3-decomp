/* Retail-derived draft; never linked.
 * 20 differing words; 84-byte body, 0x20 frame, extra saved register and cached global
 * address versus retail 72 bytes and 0x10 frame. The first helper consumes one argument;
 * its existing unused second parameter is documented in the attempt evidence. Low and High
 * stopped without an integrated match. Ordinary C remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct { u8 pad[0x30]; u8 effect[0xB0]; } Data_AF628;
typedef struct { u8 pad[0x68]; Data_AF628 *data; } Obj_AF628;
extern void func_L33_003AF098(Obj_AF628 *);
extern void func_L01_0040C8A0(void *, void *);
extern void func_L01_0040C948(s32 *, void *);
typedef struct { s32 n; f32 f4; u8 pad8[16]; f32 values[7]; u8 data[1]; } Params_AF628;
extern Params_AF628 D_L33_001E2190;
void func_L33_003AF628(Obj_AF628 *obj)
{
    Data_AF628 *p = obj->data;
    func_L33_003AF098(obj);
    func_L01_0040C8A0(p->effect, &D_L33_001E2190);
    func_L01_0040C948((s32 *)p->effect, &D_L33_001E2190);
}
