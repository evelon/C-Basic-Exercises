// 세 개의 정수(integer) 변수를 선언하고,
// 각각 123, 456, 789를 대입하고, printf를 한 번만 사용해서 다음과 같이
// 터미널에 출력하시오. (한 줄에 한 개 씩)

// 123
// 456
// 789
#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    // 세 개의 정수 변수 선언 (declaration)

    a = 123;
    b = 456;
    c = 789;
    // 세 개의 정수 변수에 각각 값 대입 (assignment)

    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}
