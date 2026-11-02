/* Retail-derived draft; never linked.
 * Latest: 12 positional diffs, 56 versus 48 bytes. Best retained draft: 6 positional
 * diffs, 48 bytes; input register, null branch/save/zero initialization and
 * callback/payload load scheduling differ. Preserved High probe 4 is the best draft: six
 * differences at the correct 48-byte size. Its null-path pointer-to-integer conversion
 * relies on this target ABI. Low and High stopped without an integrated match. Ordinary C
 * remains plausible; retain INCLUDE_ASM.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef s32 (*Callback_515F90)(void *);
typedef struct CallbackPair_515F90 {
    Callback_515F90 callback;
    void *argument[0];
} CallbackPair_515F90;
s32 func_L39_00515F90(CallbackPair_515F90 *arg0) {
    s32 result = (s32)arg0;
    if (arg0 != 0) {
        result = arg0->callback(arg0->argument[0]) != 0;
    }
    return result;
}
