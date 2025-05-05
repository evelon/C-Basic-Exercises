// 변수 하나에는 100, 변수 하나에는 200을 대입해셔 출력.
// 그 후 두 변수의 값을 바꿔서 출력하기.
#include <stdio.h>

int main() {
    int a = 100, b = 200;

    printf("%d, %d\n", a, b);

    int c;

    c = a;
    a = b;
    b = c;

    printf("%d, %d\n", a, b);
    return 0;
}
