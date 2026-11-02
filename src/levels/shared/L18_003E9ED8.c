#include "common.h"

/* localdecomp:start func_L18_003E9ED8 */
typedef void (*Callback_L18_003E9ED8)(void *);
extern void func_L01_0043B548(void *, s32);

void func_L18_003E9ED8(void *self) {
    Callback_L18_003E9ED8 *entry;
    entry = ((Callback_L18_003E9ED8 *(*)(s32, s32))func_L01_0043B548)(0x19E1, 0x6C);
    (*entry)(self);
}
/* localdecomp:end func_L18_003E9ED8 */
