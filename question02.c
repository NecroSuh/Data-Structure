#include <stdio.h>

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

void mul(int a, int b) {
	printf("���� �� : %d\n", a * b);
}

void dis(int a, int b) {
	printf("���� �� : %d\n", a / b);
}

int main() {
	int result;
	result = add(47, 21);
	int result2;
	result2 = sub(47, 21);

	printf("���� ��: %d\n", result);
	printf("�� ��: %d\n", result2);
	mul(47, 21);
	dis(47, 21);

	return 0;
}