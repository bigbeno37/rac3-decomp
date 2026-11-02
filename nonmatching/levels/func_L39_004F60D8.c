/* Retail-derived draft; never linked.
 * 19 diff; 92 bytes vs retail 88; exact same .text as LOW best; saved-register allocation
 * and branch scheduling. Low and High stopped without an integrated match. Ordinary C
 * remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern s32 func_L39_004F6060(void *, void **, u32);
extern void func_L39_004F7510(void *, const void *, u32);
s32 func_L39_004F60D8(void *a0, void **a1, const void *a2, u32 a3)
{
    u32 size = a3;
    const void *source = a2;
    void **out = a1;
    s32 status = func_L39_004F6060(a0, out, size);
    if (status != 0) return status;
    func_L39_004F7510(*out, source, size);
    return 0;
}
