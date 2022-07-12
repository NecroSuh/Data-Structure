#include <stdio.h>

int FN(int n) {
	if (n == 1 || n==2) {
		return 1;
	}
	else {
		return FN(n - 1) + FN(n - 2);
	}
}

int main() {
	// Q2) 피보나치 수열을 구하는 함수(재귀함수)로 구현해보세요.
	//						1, 1, 2, 3, 5, 8, 13, 21, 34...
	//				입력: 6
	//				출력: 8
	int num;
	printf("입력: ");
	scanf("%d", &num);

	printf("출력: %d", FN(num));


	return 0;
}