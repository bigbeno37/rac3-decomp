/* Retail-derived draft; never linked.
 * The closest 104-byte form has five address/load-order differences but requires an
 * unproved shift count in 0..31. Preserve the explicit count-mask form instead: 108 bytes
 * and 21 positional differences. It reflects the hardware shift semantics without assuming
 * that range. Both callees and actual relocations were audited; US remains unchecked.
 * Retain INCLUDE_ASM.
 * Existing file flags preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern u8 D_L03_001DD10A;
extern void *D_L03_001DD104;
extern s32 D_L03_001A7F70[];
extern s32 D_L03_001D545C[];
extern s32 func_L01_0041A5B0(s32, s32);
extern void func_L03_0032CF78(void *, s32);
void func_L03_0032C890(s32 id, s32 flag) {
    D_L03_001DD10A = flag;
    if (id == 0x7F) {
        if (!((long)D_L03_001A7F70[0] & (long)(s32)(1U << (D_L03_001D545C[0] & 31)))) {
            func_L01_0041A5B0(0xB79, 0x1C);
        }
    }
    func_L03_0032CF78(D_L03_001DD104, id);
}
