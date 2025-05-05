// 숫자를 입력받아서 3으로 나눈 몫과 나머지를 출력하시오.

#include <stdio.h>

int main() {
    int num;

    printf("please input a number: ");

    scanf("%d", &num);

    printf("Quotient: %d, remainder: %d\n", num / 3, num % 3);

    return 0;
}
