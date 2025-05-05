// 정수 60를 문자로 출력하시오.
// char 변수에 '7'를 넣어 문자로 출력하시오.
#include <stdio.h>

int main() {
    float f;
    int i;

    f = 1.4;
    i = f;

    printf("f=%f i=%d\n", f, i);

    i = 2;
    f = i;

    printf("f=%f i=%d\n", f, i);

    return 0;
}