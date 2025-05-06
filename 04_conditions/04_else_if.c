// 두 정수를 입력 받아서 크기를 비교한 결과를 출력하시오.
#include <stdio.h>

int main() {
	int lhs;
	int rhs;

	printf("input two integers\n");
	scanf("%d%d", &lhs, &rhs);

	if (lhs < rhs) {
		printf("%d is less than %d\n", lhs, rhs);
	} else if (lhs == rhs) {
		printf("%d is equal to %d\n", lhs, rhs);
	} else {
		printf("%d is greater than %d\n", lhs, rhs);
	}
	printf("the end of the comparison\n");

	return 0;
}