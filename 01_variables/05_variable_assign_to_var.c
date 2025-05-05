// 네 번재 변수를 선언하여, 앞의 세 변수의 합을 저장한 후 출력하시오.
#include <stdio.h>

int main() {
    int foo = 123;  // 변수를 선언과 동시에 초기화 가능.
    int bar, baz;   // 한 번에 두 개의 정수를 선언 가능
    bar = 321;
    baz = 222;

    int qux;  // 이곳에 변수를 선언하여도 됨; 하지만 권장되지 않음.
    qux = foo + bar + baz;

    printf("%d\n", qux);

    return 0;
}
