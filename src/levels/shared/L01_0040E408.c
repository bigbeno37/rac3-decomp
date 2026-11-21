#include "common.h"

/* localdecomp:start func_L01_0040E408 */
/* vector divide: d.xyz = s.xyz / f (VU0, one volatile block, as boot_elf's func_0038D200) */
void func_L01_0040E408(void *d, void *s, f32 f) {
    __asm__ __volatile__(
        "mfc1 $at, %2\n"
        "lqc2 $vf1, 0(%1)\n"
        "qmtc2.ni $at, $vf2\n"
        "vdiv Q, $vf0w, $vf2x\n"
        "vwaitq\n"
        "vmulq.xyz $vf1, $vf1, Q\n"
        "sqc2 $vf1, 0(%0)\n"
        : : "r"(d), "r"(s), "f"(f) : "memory");
}
/* localdecomp:end func_L01_0040E408 */
