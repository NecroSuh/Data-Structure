#include <stdio.h>

int Add(int n1, int n2) {
	return n1 + n2;
}

void Add2(int n1, int n2) {
	printf("���� ��� : %d\n", n1 + n2);
}

int main() {
	int result;
	result = Add(12, 18);

	printf("���� ��� : %d\n\n", result);


	Add2(11, 23);

	return 0;
}