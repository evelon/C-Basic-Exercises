// 숫자를 하나 입력받아서 2의 배수이면 "multiple of 2\n"를 출력하고,
// 3의 배수라면 "multiple of 3\n"을 출력하고,
// 2의 배수도 아니고 3의 배수도 아니라면 "none of those"
#include <stdio.h>

int main() {
	int input;

	printf("input an integer:\n");
	scanf("%d", &input);

	if (input % 2 == 0) {
		printf("multiple of 2\n");
	} else {
		if (input % 3 == 0) {
			printf("multiple of 3\n");
		} else {
			printf("none of those\n");
		}
	}
	return 0;
}