#include "common.h"

INCLUDE_ASM("asm/levels", func_L39_006D8E90);

INCLUDE_ASM("asm/levels", func_L39_006D8EC0);

INCLUDE_ASM("asm/levels", func_L39_006D8EF0);

/* localdecomp:start func_L39_006D8F30 */
static __inline__ u32 align_006D8F30(u32 value, u32 alignment) {
    u32 remainder = value % alignment;
    if (remainder != 0) {
        value += alignment - remainder;
    }
    return value;
}
u32 func_L39_006D8F30(u32 arg0) {
    return align_006D8F30(arg0, 4) - arg0 + 0x134;
}
/* localdecomp:end func_L39_006D8F30 */

INCLUDE_ASM("asm/levels", func_L39_006D8F58);

/* localdecomp:start func_L39_006D8F98 */
u32 func_L39_006D8F98(u32 arg0) {
    u32 alignment = 4;
    u32 aligned = arg0;
    u32 remainder = arg0 % alignment;
    if (remainder != 0) {
        aligned = arg0 + (alignment - remainder);
    }
    return aligned - arg0 + 0x48;
}
/* localdecomp:end func_L39_006D8F98 */

INCLUDE_ASM("asm/levels", func_L39_006D8FC0);

/* localdecomp:start func_L39_006D9000 */
static __inline__ u32 align_address_006D9000(u32 address, u32 alignment) {
    u32 remainder = address % alignment;
    if (remainder != 0) {
        address += alignment - remainder;
    }
    return address;
}
u32 func_L39_006D9000(u32 arg0) {
    return align_address_006D9000(arg0, 4) - arg0 + 0x54C;
}
/* localdecomp:end func_L39_006D9000 */

INCLUDE_ASM("asm/levels", func_L39_006D9028);

/* localdecomp:start func_L39_006D9068 */
static __inline__ u32 align_006D9068(u32 value, u32 alignment) {
    u32 remainder = value % alignment;
    if (remainder != 0) {
        value += alignment - remainder;
    }
    return value;
}
u32 func_L39_006D9068(u32 arg0) {
    return align_006D9068(arg0, 4) - arg0 + 0x1F68;
}
/* localdecomp:end func_L39_006D9068 */

INCLUDE_ASM("asm/levels", func_L39_006D9090);

/* localdecomp:start func_L39_006D90D0 */
static __inline__ u32 align_address_006D90D0(u32 address, u32 alignment) {
    u32 remainder = address % alignment;
    if (remainder != 0) {
        address += alignment - remainder;
    }
    return address;
}
u32 func_L39_006D90D0(u32 arg0) {
    return align_address_006D90D0(arg0, 4) - arg0 + 0x88;
}
/* localdecomp:end func_L39_006D90D0 */

INCLUDE_ASM("asm/levels", func_L39_006D90F8);

/* localdecomp:start func_L39_006D9138 */
u32 func_L39_006D9138(u32 arg0) {
    u32 alignment = 4;
    u32 aligned = arg0;
    u32 remainder = arg0 % alignment;
    if (remainder != 0) {
        aligned = arg0 + (alignment - remainder);
    }
    return aligned - arg0 + 0x48;
}
/* localdecomp:end func_L39_006D9138 */

INCLUDE_ASM("asm/levels", func_L39_006D9160);

/* localdecomp:start func_L39_006D91A0 */
u32 func_L39_006D91A0(u32 arg0) {
    u32 alignment = 4;
    u32 aligned = arg0;
    u32 remainder = arg0 % alignment;
    if (remainder != 0) {
        aligned = arg0 + (alignment - remainder);
    }
    return aligned - arg0 + 0x1E4;
}
/* localdecomp:end func_L39_006D91A0 */

INCLUDE_ASM("asm/levels", func_L39_006D91C8);

/* localdecomp:start func_L39_006D9208 */
static __inline__ u32 align_006D9208(u32 value, u32 alignment) {
    u32 remainder = value % alignment;
    if (remainder != 0) {
        value += alignment - remainder;
    }
    return value;
}

u32 func_L39_006D9208(u32 arg0) {
    return align_006D9208(arg0, 4) - arg0 + 0x1D4;
}
/* localdecomp:end func_L39_006D9208 */

INCLUDE_ASM("asm/levels", func_L39_006D9230);

/* localdecomp:start func_L39_006D9270 */
static __inline__ u32 align_006D9270(u32 value, u32 alignment) {
    u32 remainder = value % alignment;
    if (remainder != 0) {
        value += alignment - remainder;
    }
    return value;
}

u32 func_L39_006D9270(u32 arg0) {
    return align_006D9270(arg0, 4) - arg0 + 0xEC;
}
/* localdecomp:end func_L39_006D9270 */

INCLUDE_ASM("asm/levels", func_L39_006D9298);

/* localdecomp:start func_L39_006D92D8 */
static __inline__ u32 align_address_006D92D8(u32 address, u32 alignment) {
    u32 remainder = address % alignment;
    if (remainder != 0) {
        address += alignment - remainder;
    }
    return address;
}
u32 func_L39_006D92D8(u32 arg0) {
    return align_address_006D92D8(arg0, 4) - arg0 + 0x30A8;
}
/* localdecomp:end func_L39_006D92D8 */

/* localdecomp:start func_L39_006D9300 */
void *func_L39_006D9300(void *arg0) {
    (*(s8 *)arg0) = 0;
    *(s8 *)((u8 *)arg0 + 0x14C) = 0;
    *(s8 *)((u8 *)arg0 + 0x1C0) = 0;
    return arg0;
}
/* localdecomp:end func_L39_006D9300 */

/* localdecomp:start func_L39_006D9318 */
void func_L39_006D9318(void *arg0) {
    *(s8 *)arg0 = 0;
    *(s8 *)((u8 *)arg0 + 0x14C) = 0;
    *(s8 *)((u8 *)arg0 + 0x1C0) = 0;
}
/* localdecomp:end func_L39_006D9318 */

INCLUDE_ASM("asm/levels", func_L39_006D9328);

INCLUDE_ASM("asm/levels", func_L39_006D9808);

INCLUDE_ASM("asm/levels", func_L39_006D98C8);

INCLUDE_ASM("asm/levels", func_L39_006D9A40);

INCLUDE_ASM("asm/levels", func_L39_006D9BC0);

INCLUDE_ASM("asm/levels", func_L39_006D9C90);

INCLUDE_ASM("asm/levels", func_L39_006D9E10);

INCLUDE_ASM("asm/levels", func_L39_006D9E68);

INCLUDE_ASM("asm/levels", func_L39_006D9FD8);

INCLUDE_ASM("asm/levels", func_L39_006DA038);

INCLUDE_ASM("asm/levels", func_L39_006DA090);

INCLUDE_ASM("asm/levels", func_L39_006DA158);

INCLUDE_ASM("asm/levels", func_L39_006DA1C0);

INCLUDE_ASM("asm/levels", func_L39_006DA2A8);

INCLUDE_ASM("asm/levels", func_L39_006DA310);

INCLUDE_ASM("asm/levels", func_L39_006DA3F8);

INCLUDE_ASM("asm/levels", func_L39_006DA628);

INCLUDE_ASM("asm/levels", func_L39_006DA680);

INCLUDE_ASM("asm/levels", func_L39_006DA878);

INCLUDE_ASM("asm/levels", func_L39_006DA958);

INCLUDE_ASM("asm/levels", func_L39_006DAB18);

INCLUDE_ASM("asm/levels", func_L39_006DABF0);

INCLUDE_ASM("asm/levels", func_L39_006DAFC8);

INCLUDE_ASM("asm/levels", func_L39_006DB098);

INCLUDE_ASM("asm/levels", func_L39_006DB450);

INCLUDE_ASM("asm/levels", func_L39_006DB5B0);

INCLUDE_ASM("asm/levels", func_L39_006DB5D0);

INCLUDE_ASM("asm/levels", func_L39_006DB730);

INCLUDE_ASM("asm/levels", func_L39_006DB750);

INCLUDE_ASM("asm/levels", func_L39_006DB890);

INCLUDE_ASM("asm/levels", func_L39_006DB948);

INCLUDE_ASM("asm/levels", func_L39_006DBD58);

INCLUDE_ASM("asm/levels", func_L39_006DBEE0);

INCLUDE_ASM("asm/levels", func_L39_006DC148);
