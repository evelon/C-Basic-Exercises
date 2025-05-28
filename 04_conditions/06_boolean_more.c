// 참, 거짓과 관련된 연산을 boolean 연산이라고 함.
#include <stdio.h>

int main() {
	int boolean;

	// 0 == false
	// 다른 모든 값 == true

	// && '그리고(and)' 연산
	// 1 && 1 외에 다른 조합도 시도해 볼 것.
	boolean = 1 && 1; // false(==0)
	printf("%d", boolean);

	// || '또는(or)' 연산
	// 1 || 0 외에 다른 조합도 시도해 볼 것.
	boolean = 1 && 0; // true(==1)
	printf("%d", boolean);

	// ! '부정(not)' 연산
	boolean = !24; // false(==0)
	printf("%d", boolean);

	return 0;
}