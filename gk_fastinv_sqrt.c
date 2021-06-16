#include <gk_fastinv_sqrt.h>

float gk_qisqrt(float x) {
    // Define three-halfs
    const float threehalfs = 1.5F;
    float x2 = x * 0.5F;
    float y = x;

    // Copy y's bits to long,
    // so that bitmanipulation
    // is possible
    uint32_t i = *(uint32_t*) &y;

    // Magic Value + Bit manipulation hack on IEEE 754
    i = 0x5f3759df - ( i >> 1 );
    // Copy i's bits to float w/o conversion
    y = * (float*) &i;

    // 1 iteration of newtonian approximation
    y = y * ( threehalfs - (x2 * y * y));

    return y;
}
