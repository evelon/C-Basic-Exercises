// 숫자를 하나 입력받아서 2보다 크면 "greater than 2\n"를 출력하고
// 2보다 작거나 같으면 "less then or equal to 2\n"
#include <stdio.h>

int main() {
	int input;

	printf("input an integer:\n");
	scanf("%d", &input);

	if (input > 2) {
		printf("greater than 2\n");
	} else {
		printf("less then or equal to 2\n");
	}
	return 0;
}