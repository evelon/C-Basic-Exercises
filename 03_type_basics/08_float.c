#include <stdio.h>

int main() {
    int i;
    float f;

    i = 1.0;
    f = 1.23;

    size_t s1 = sizeof(i);
    size_t s2 = sizeof(f);

    printf("i: %d, size: %lu\nf: %f, size:%lu\n", i, s1, f, s2);

    return 0;
}