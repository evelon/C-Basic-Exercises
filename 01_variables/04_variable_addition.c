// 세 변수에 각각 123, 321, 222를 대입하고 세 변수의 합을 출력하시오.
#include <stdio.h>

int main() {
    int foo;  // 변수 이름은 결과(출력)에 영향을 미치지 않음.
    int bar;
    int baz;

    foo = 123;
    bar = 321;
    baz = 222;

    printf("%d\n", foo + bar + baz);

    return 0;
}
