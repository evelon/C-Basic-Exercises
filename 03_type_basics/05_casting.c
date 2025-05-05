// 정수 60를 문자로 출력하시오.
// char 변수에 '7'를 넣어 문자로 출력하시오.
#include <stdio.h>

int main() {
    int a;
    // int b;
    char p;
    // char q;

    a = 1111111;  // 0x10F447
    p = a;        // 0x47 ('G')

    printf("%d, %c\n", a, p);

    // p = 1111111 => 컴파일 에러
    p = (char)1111111;
    a = p;

    printf("%d, %c\n", a, p);

    return 0;
}
