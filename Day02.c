#include <stdio.h>

int Add(int n1, int n2) {
	return n1 + n2;
}

void Add2(int n1, int n2) {
	printf("연산 결과 : %d\n", n1 + n2);
}

int main() {
	int result;
	result = Add(12, 18);

	printf("연산 결과 : %d\n\n", result);


	Add2(11, 23);

	return 0;
}