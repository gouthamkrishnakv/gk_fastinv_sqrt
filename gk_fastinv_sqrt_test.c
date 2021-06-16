#include <gk_fastinv_sqrt.h>
#include <stdio.h>

int main(int argc, char **argv) {
    float x;
    if (argc == 2) {
        sscanf(argv[1], "%f", &x);
    } else {
        x = 144;
        printf("TAKING DEFAULT VAL OF x as 144\n");
    }
    printf("INV-SQRT of %f is %f\n", x, gk_qisqrt(x));
}
