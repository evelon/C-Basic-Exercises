// 외울 필요 X
#include <stdio.h>

int main() {
    float f;
    f = 1;
    printf("f: %f\n", f);

    f = 1.0;
    printf("f: %f\n", f);

    f = 1.23;
    printf("f: %f\n", f);

    f = 432E8;
    printf("f: %f\n", f);

    f = -432e8;
    printf("f: %f\n", f);

    f = -432e-8;
    printf("f: %f\n", f);

    f = .3;
    printf("f: %f\n", f);
    printf(".1f: %.1f\n", f);
    printf(".16f: %.16f\n", f);

    f = 1.;
    printf("f: %f\n", f);
    printf(".1f: %.1f\n", f);
    printf(".16f: %.16f\n", f);

    return 0;
}