// 변수 a가 0이면 "the value is zero\n"이라는 문구를 출력할 것.
#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;
	int c = 1;
	int d = -1;

	printf("b != c: %d\n", b != c);
	printf("a == b: %d\n", a == b);
	printf("c <= d: %d\n", c <= d);
	printf("d >= a: %d\n", d >= a);
	printf("a < b: %d\n", a < b);
	printf("b > c: %d\n", b > c);

	return 0;
}