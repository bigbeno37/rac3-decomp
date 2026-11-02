/*
 * Unresolved retail-derived draft; not linked.
 * The 104-byte draft has 14 raw instruction differences across all four PAL placements; its final 44 bytes agree. Local union constants eliminate literal pooling but leave register/scheduling differences. This target-specific representation preserves the intermediate stores and possible pointer aliasing. US explicitly differs.
 * Low and High remain unresolved; retain INCLUDE_ASM.
 */
#include "common.h"

f32 func_L03_00435A08(f32 *position, f32 *velocity, f32 target,
                     f32 frequency, f32 damping)
{
    union { u32 bits; f32 value; } damping_scale, frequency_scale;
    damping_scale.bits = 0x3F99999A;
    frequency_scale.bits = 0x3DD67750;
    damping = (damping - 1.0f) * damping_scale.value + 1.0f;
    frequency *= frequency_scale.value;
    frequency *= frequency;
    *velocity *= damping;
    *velocity += frequency * (target - *position);
    *position += *velocity;
    return *velocity;
}
