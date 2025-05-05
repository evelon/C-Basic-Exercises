// 혼란스러워하시오.
#include <stdio.h>

int main() {
    char i;
    char j;

    i = -128;   // 0b10000000
    j = i - 1;  // 0b01111111

    printf("i:%d, j:%d\n", i, j);

    int l;
    int m;
    l = -2147483648;
    m = l - 1;

    printf("l:%d, m:%d\n", l, m);

    return 0;
}