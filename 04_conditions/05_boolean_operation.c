// 하나의 정수를 입력받아서 홀수이며 3으로 나눈 나머지가 1일 경우에만
// "The right number\n"를 출력하시오.
#include <stdio.h>

int main() {
	int num;

	printf("input an integers\n");
	scanf("%d", &num);

	if (num % 2 == 1 && num % 3 == 1) {
		printf("The right number\n");
	}

	return 0;
}