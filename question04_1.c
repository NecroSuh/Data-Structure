#include <stdio.h>

int F(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n * F(n - 1);
	}
}

int main() {
	// Q1) 팩토리얼 값을 반환해주는 함수(재귀함수)로 구현해보세요.
	//				입력: 4
	//				출력: 24

	int num;
	printf("입력: ");
	scanf("%d", &num);
	printf("출력: %d", F(num));


	return 0;
}