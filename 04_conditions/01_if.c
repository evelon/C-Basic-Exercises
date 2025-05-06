// 여러 값을 조건절에 넣어보기
#include <stdio.h>

int main() {
	int a = 1;
	int b = -4;

	if (1) {
		printf("print this\n");
	}
	if (0) {
		printf("do not print this\n");
	}
	if (b) {
		printf("print this\n");
	}
	if (a != 0) {
		printf("the value is not zero\n");
	}
	return 0;
}