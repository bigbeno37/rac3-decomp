#include "common.h"

/* localdecomp:start func_L08_0039A9D8 */
void func_L01_004450F0(s32, s32, s32);
void func_003C2880(s32);
void func_L01_003361D8(void *);
void func_L01_0044EA78(void *, s32);

void func_L08_0039A9D8(void *arg0) {
    s32 temp_a0;
    void *temp_s0;

    temp_s0 = *(void **)((u8 *)arg0 + 0x68);
    func_L01_004450F0((s32) arg0, 1, -1);
    func_L01_0044EA78(arg0, temp_s0 + 0x4D0);
    temp_a0 = *(s32 *)((u8 *)temp_s0 + 0x5D0);
    if (temp_a0 != 0) {
        func_003C2880(temp_a0);
    }
    func_L01_003361D8(arg0);
}
/* localdecomp:end func_L08_0039A9D8 */

INCLUDE_ASM("asm/levels", func_L08_0039AA38);

INCLUDE_ASM("asm/levels", func_L08_0039AC38);

/* localdecomp:start func_L08_0039ACD0 */
extern void func_L01_00445130(u8 *, s32, s32);
s32 func_L08_0039ACD0(void *arg0, s32 arg1, s32 arg2) {
    u8 old = *((u8 *)arg0 + 0x20);
    void *data = *(void **)((u8 *)arg0 + 0x68);
    *((u8 *)data + 0x490) = arg1;
    *(s32 *)((u8 *)data + 0x47C) = arg2;
    func_L01_00445130(arg0, 3, -1);
    return *((u8 *)arg0 + 0x20) != old;
}
/* localdecomp:end func_L08_0039ACD0 */

/* localdecomp:start func_L08_0039AD20 */
extern void func_L01_00445130(u8 *, s32, s32);
s32 func_L08_0039AD20(u8 *obj, s32 value, s32 arg2) {
    u8 old = obj[0x20];
    u8 *data = *(u8 **)(obj + 0x68);
    data[0x490] = value;
    *(s32 *)(data + 0x47C) = arg2;
    func_L01_00445130(obj, 4, -1);
    return obj[0x20] != old;
}
/* localdecomp:end func_L08_0039AD20 */

/* localdecomp:start func_L08_0039AD70 */
extern void func_L01_00445130(u8 *, s32, s32);
s32 func_L08_0039AD70(void *arg0, s32 arg1, s32 arg2) {
    u8 oldState;
    void *state;
    oldState = *(u8 *)((u8 *)arg0 + 0x20);
    state = *(void **)((u8 *)arg0 + 0x68);
    *(u8 *)((u8 *)state + 0x490) = arg1;
    *(s32 *)((u8 *)state + 0x47C) = arg2;
    func_L01_00445130(arg0, 5, -1);
    return *(u8 *)((u8 *)arg0 + 0x20) != oldState;
}
/* localdecomp:end func_L08_0039AD70 */

/* localdecomp:start func_L08_0039ADC0 */
extern void func_L01_00445130(u8 *, s32, s32);
s32 func_L08_0039ADC0(void *arg0, s32 arg1, s32 arg2) {
    u8 oldState;
    void *state;
    oldState = *(u8 *)((u8 *)arg0 + 0x20);
    state = *(void **)((u8 *)arg0 + 0x68);
    *(u8 *)((u8 *)state + 0x490) = arg1;
    *(s32 *)((u8 *)state + 0x47C) = arg2;
    func_L01_00445130(arg0, 6, -1);
    return *(u8 *)((u8 *)arg0 + 0x20) != oldState;
}
/* localdecomp:end func_L08_0039ADC0 */

/* localdecomp:start func_L08_0039AE10 */
extern void func_L01_00445130(u8 *, s32, s32);
s32 func_L08_0039AE10(void *arg0, s32 arg1, s32 arg2) {
    u8 oldState;
    void *state;
    oldState = *(u8 *)((u8 *)arg0 + 0x20);
    state = *(void **)((u8 *)arg0 + 0x68);
    *(u8 *)((u8 *)state + 0x490) = arg1;
    *(s32 *)((u8 *)state + 0x47C) = arg2;
    func_L01_00445130(arg0, 7, -1);
    return *(u8 *)((u8 *)arg0 + 0x20) != oldState;
}
/* localdecomp:end func_L08_0039AE10 */

/* localdecomp:start func_L08_0039AE60 */
extern void func_L01_00445130(u8 *, s32, s32);
s32 func_L08_0039AE60(u8 *obj, s32 value, s32 arg2) {
    u8 old = obj[0x20];
    u8 *data = *(u8 **)(obj + 0x68);
    data[0x490] = value;
    *(s32 *)(data + 0x47C) = arg2;
    func_L01_00445130(obj, 8, -1);
    return obj[0x20] != old;
}
/* localdecomp:end func_L08_0039AE60 */

/* localdecomp:start func_L08_0039AEB0 */
extern void func_L01_00445130(u8 *, s32, s32);
s32 func_L08_0039AEB0(u8 *obj, s32 value, s32 arg2) {
    u8 old = obj[0x20];
    u8 *data = *(u8 **)(obj + 0x68);
    data[0x490] = value;
    *(s32 *)(data + 0x47C) = arg2;
    func_L01_00445130(obj, 9, -1);
    return obj[0x20] != old;
}
/* localdecomp:end func_L08_0039AEB0 */

/* localdecomp:start func_L08_0039AF00 */
extern void func_L01_00445130(u8 *, s32, s32);
s32 func_L08_0039AF00(u8 *obj, s32 value, s32 arg2) {
    u8 old = obj[0x20];
    u8 *data = *(u8 **)(obj + 0x68);
    data[0x490] = value;
    *(s32 *)(data + 0x47C) = arg2;
    func_L01_00445130(obj, 10, -1);
    return obj[0x20] != old;
}
/* localdecomp:end func_L08_0039AF00 */

/* localdecomp:start func_L08_0039AF50 */
extern void func_L01_00445130(u8 *, s32, s32);
s32 func_L08_0039AF50(u8 *obj, s32 value, s32 arg2) {
    u8 old = obj[0x20];
    u8 *data = *(u8 **)(obj + 0x68);
    data[0x490] = value;
    *(s32 *)(data + 0x47C) = arg2;
    func_L01_00445130(obj, 11, -1);
    return obj[0x20] != old;
}
/* localdecomp:end func_L08_0039AF50 */

INCLUDE_ASM("asm/levels", func_L08_0039AFA0);
