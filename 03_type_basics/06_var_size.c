// 정수 60를 문자로 출력하시오.
// char 변수에 '7'를 넣어 문자로 출력하시오.
#include <stdio.h>

int main() {
    int i = 0;
    char c = '0';
    int size1;
    int size2;
    int size3;

    size1 = sizeof(i);
    size2 = sizeof(c);
    size3 = sizeof(i + c);

    printf("%d, %d, %d\n", size1, size2, size3);

    return 0;
}