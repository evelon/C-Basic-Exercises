// 두 개의 format specifier(형식 지정자) %d를 이용하여
// "67890, 12345!" 라는 string(문자열) 출력
#include <stdio.h>

int main() {
    printf("%d, %d\n", 67890, 12345);  // %d 여러 개 가능.
    return 0;
}