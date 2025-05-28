// 07_guess_exercise.md부터 읽으시오.

#include <stdio.h>

int main() {
	int int_input;
	int is_mult;
	char char_input;
	int answer;

	printf("정수를 입력해주세요.\n");
	scanf("%d", &int_input);

	/*
		입력받은 정수가 3의 배수인지 확인하여 결과값을 in_mult에 할당.
	*/
	printf(
		"이 숫자는 3의 배수일까요? 맞다면 t(T), 틀리다면 f(F)를 입력하세요.\n");
	scanf(" %c",
		  &char_input); // %c 앞에 띄어쓰기가 있어야 정상 작동함. 궁금하다면...

	// t(T)와 f(F)를 참/거짓값으로 변환. 다른 입력은 고려하지 않음.

	/*
		이 주석을 지우고 코드 작성.
	*/

	// is_mult와 answer이 둘 다 참이거나 둘 다 거짓인 경우 정답.

	/*
		이 주석을 지우고 코드 작성.
	*/

	return 0;
}