/* Retail-derived draft; never linked.
 * Sixteen frame/save/restore and entry-move words differ in the 104-byte body. Low and
 * two High formulations produce identical bytes; calls and the final flag update agree.
 * All seven incoming arguments and the existing unsigned-long/u32 field contract are
 * preserved. Future integration must reuse or move the existing S_00517868 typedef,
 * which currently follows this marker, rather than duplicate it. US remains unchecked.
 * Retain INCLUDE_ASM.
 * Existing file flags preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct {
    unsigned long value;
    s32 field8;
    u8 padC[0xA];
    u8 flags;
} S_00517868;
extern void func_L39_00517828(S_00517868 *, s32, s32, s32);
extern void func_L39_00517868(S_00517868 *, s32, u32);
static __inline__ void initialize_fields(S_00517868 *self, s32 field8, u32 value, s32 a1, s32 a2, s32 a5) {
    func_L39_00517828(self, a1, a2, a5);
    func_L39_00517868(self, field8, value);
}
void func_L39_005177C0(S_00517868 *self, s32 a1, s32 a2, s32 field8, u32 value, s32 a5, s32 flags) {
    initialize_fields(self, field8, value, a1, a2, a5);
    self->flags = self->flags | flags;
}
