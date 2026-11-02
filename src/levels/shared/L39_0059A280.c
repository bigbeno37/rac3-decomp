#include "common.h"

/* localdecomp:start func_L39_0059A280 */
typedef struct {
    u8 pad0[8];
    u8 bytes[0x50];
    s32 f58;
    s32 f5C;
    s32 f60;
    u8 pad64[4];
    s32 f68;
    u8 f6C;
} S_L39_0059A280;
extern void *func_0011D534(void *, s32, s32);
void func_L39_0059A280(S_L39_0059A280 *self) {
    self->f58 = 0;
    self->f5C = 0;
    self->f60 = 0;
    func_0011D534(self->bytes, 0xCD, 0x50);
    self->f68 = 1;
    self->f6C = 0;
}
/* localdecomp:end func_L39_0059A280 */
