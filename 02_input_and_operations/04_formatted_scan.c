// 숫자 두 개를 입력받아서 안내문과 함께 출력하기.
#include <stdio.h>

int main() {
	int num1;
	int num2;

	printf("input two numbers, like 'a:13,b:24\n");

	scanf("a:%d,b:%d", &num1, &num2);

	printf("Your inputs: %d, %d\n", num1, num2);

	return 0;
}
