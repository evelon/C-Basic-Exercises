// a에 랜덤한 숫자 넣고 차례차레 증가하는 값 b, c, d 만들기
// 선언과 초기화를 한 번에 하기

#include <stdio.h>

int main() {
    int a = 123, b = a + 1, c = b + 1, d = 1 + c;

    printf("%d\n%d\n%d\n%d\n", a, b, c, d);

    return 0;
}
