// 숫자 두 개를 입력받아서 첫 번째 숫자에서 두 번째 숫자를 뺀 값을 구하기.
#include <stdio.h>

int main() {
    int num1, num2;

    printf("please input two numbers: ");

    scanf("%d%d", &num1, &num2);

    printf("Your inputs: %d\n", num1 - num2);

    return 0;
}
