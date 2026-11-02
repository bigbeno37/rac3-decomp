/* Retail-derived semantic draft; never linked.
 * Low and High forms retain four register-allocation differences in the global load,
 * nested pointer load and stores. Size and store order agree. Repeated equivalent code
 * generation; ordinary C remains plausible.
 * Existing file flags were preserved. See docs/matching-campaign.md.
 */
#include "common.h"
typedef struct { u8 pad[0x60]; u8 field60; u8 pad61[11]; u8 field6C; } Fields_006DDDE8;
typedef struct { u8 pad[0x54]; Fields_006DDDE8 *field54; } S_006DDDE8;
extern S_006DDDE8 *D_L39_0024D760[];
void func_L39_006DDDE8(void) {
    S_006DDDE8 *outer = D_L39_0024D760[0];
    {
        Fields_006DDDE8 *p = outer->field54;
        p->field60 = 0;
        p->field6C = 0;
    }
}
