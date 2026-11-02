#include "common.h"

INCLUDE_ASM("asm/levels", func_L39_0066C4D8);

/* localdecomp:start func_L39_0066C558 */
typedef struct Node006699B0 {
    u8 pad[128];
    struct Node006699B0 *prev;
    struct Node006699B0 *next;
} Node006699B0;
extern Node006699B0 *func_L39_0066C2B8(void);
extern s32 func_L39_0066C280(s32, s32, s32, s32, Node006699B0 *);
typedef struct {
    u8 pad0[8];
    s32 field8;
    u8 padC[0x11C];
    s32 field128;
} State_0066C558;
extern State_0066C558 D_L39_001A5CD0;
void func_L39_0066C558(s32 arg0) {
    Node006699B0 *p = func_L39_0066C2B8();
    if (p != 0) {
        *(s32 *)p = func_L39_0066C280(6, arg0, D_L39_001A5CD0.field128, D_L39_001A5CD0.field8, p);
    }
}
/* localdecomp:end func_L39_0066C558 */

INCLUDE_ASM("asm/levels", func_L39_0066C5B0);

INCLUDE_ASM("asm/levels", func_L39_0066C650);

/* localdecomp:start func_L39_0066C6F0 */
void func_L39_0066C6F0(void) {

}
/* localdecomp:end func_L39_0066C6F0 */

/* localdecomp:start func_L39_0066C6F8 */
void func_L39_0066C6F8(void) {

}
/* localdecomp:end func_L39_0066C6F8 */

/* localdecomp:start func_L39_0066C700 */
s32 func_L39_0066C700(void *arg0) {
    return (*(s32 *)((u8 *)arg0 + 0x40));
}
/* localdecomp:end func_L39_0066C700 */
