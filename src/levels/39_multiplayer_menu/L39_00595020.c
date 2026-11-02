#include "common.h"

INCLUDE_ASM("asm/levels", func_L39_00595020);

INCLUDE_ASM("asm/levels", func_L39_00595098);

INCLUDE_ASM("asm/levels", func_L39_00595248);

INCLUDE_ASM("asm/levels", func_L39_005953D8);

INCLUDE_ASM("asm/levels", func_L39_00595430);

INCLUDE_ASM("asm/levels", func_L39_00595570);

INCLUDE_ASM("asm/levels", func_L39_00595628);

INCLUDE_ASM("asm/levels", func_L39_005956D0);

INCLUDE_ASM("asm/levels", func_L39_00595760);

INCLUDE_ASM("asm/levels", func_L39_005957F0);

INCLUDE_ASM("asm/levels", func_L39_00595848);

/* localdecomp:start func_L39_005958A0 */
extern char D_L39_00481D00[];
extern char *func_00120D28(char *, const char *, unsigned int);
extern void func_L39_005957F0(char *, void *);
void func_L39_005958A0(void *arg0, const char *arg1, unsigned int arg2) {
    char *buffer = D_L39_00481D00;
    func_00120D28(buffer, arg1, arg2);
    buffer[arg2] = 0;
    func_L39_005957F0(buffer, arg0);
}
/* localdecomp:end func_L39_005958A0 */

/* localdecomp:start func_L39_005958F8 */
extern char D_L39_00482100[];
extern char *func_00120D28(char *, const char *, unsigned int);
extern void func_L39_00595848(void *src, void *dst);
void func_L39_005958F8(void *dst, const void *src, unsigned int count) {
    func_00120D28(D_L39_00482100, src, count);
    D_L39_00482100[count] = 0;
    func_L39_00595848(D_L39_00482100, dst);
}
/* localdecomp:end func_L39_005958F8 */
