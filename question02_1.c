#include <stdio.h>
void Add(int n1, int n2) {
	printf("���� �� : %d\n", n1 + n2);
}

void Sub(int n1, int n2) {
	printf("�� ��: %d\n", n1 - n2);
}

int Mul(int n1, int n2) {
	return n1 * n2;
}

int Div(int n1, int n2) {
	return n1 / n2;
}

int main() {
	int num1, num2;

	printf("�� �� �Է�: ");
	scanf_s("%d %d", &num1, &num2);

	Add(num1, num2);
	Sub(num1, num2);
	printf("���� �� : %d\n", Mul(num1, num2));
	printf("���� ��: %d\n", Div(num1, num2));
	return 0;
}