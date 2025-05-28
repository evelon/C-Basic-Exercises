// 07_guess_exercise.md부터 읽으시오.

#include <stdio.h>

int main() {
	int int_input;
	int is_mult;
	char char_input;
	int answer;

	printf("정수를 입력해주세요.\n");
	scanf("%d", &int_input);

	is_mult = !(int_input % 3);

	printf(
		"이 숫자는 3의 배수일까요? 맞다면 t(T), 틀리다면 f(F)를 입력하세요.\n");
	scanf(" %c",
		  &char_input); // %c 앞에 띄어쓰기가 있어야 정상 작동함. 궁금하다면...

	// t(T)와 f(F)를 참/거짓값으로 변환. 다른 경우는 생각하지 않음.

	if (char_input == 't' || char_input == 'T') {
		answer = 1;
	} else if (char_input == 'f' || char_input == 'F') {
		answer = 0;
	}

	// is_mult와 answer이 둘 다 참이거나 둘 다 거짓인 경우 정답.

	if ((is_mult && answer) || (!is_mult && !answer)) {
		printf("맞았습니다.");
	} else {
		printf("틀렸습니다.");
	}

	printf(" %d는 3의 배수가", int_input);

	if (is_mult) {
		printf(" 맞습니다.\n");
	} else {
		printf(" 아닙니다.\n");
	}

	return 0;
}