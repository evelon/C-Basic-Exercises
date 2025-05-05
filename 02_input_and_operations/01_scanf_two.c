// 숫자 두 개를 입력받아서 안내문과 함께 출력하기.
#include <stdio.h>

int main() {
    int num1, num2;

    printf("please input two numbers: ");

    scanf("%d%d", &num1, &num2);

    printf("Your inputs: %d, %d\n", num1, num2);

    return 0;
}
