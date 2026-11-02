/* Retail-derived draft; never linked.
 * 11/20 raw words differ: start=s0 and arg=s2 instead of start=s2 and arg=s0, plus
 * save/restore scheduling. Preserve High's decoded helper arguments and status returns;
 * the earlier draft passed an extra argument. Low and High stopped without an integrated
 * match. Ordinary C remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
extern s32 func_L39_004B4BA0(u8 *);
extern s32 func_L39_004B4C88(u8 *, void *);
s32 func_L39_004D76B0(u8 *start, void *arg) {
    u8 *cursor = start + func_L39_004B4BA0(start);
    cursor += func_L39_004B4C88(cursor, arg);
    return (s32)cursor - (s32)start;
}
