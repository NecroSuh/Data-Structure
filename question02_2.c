#include <stdio.h>
void Add(int n1, int n2) {
	printf("���� �� : %d\n", n1 + n2);
}

void Sub(int n1, int n2) {
	printf("�� �� : %d\n", n1 - n2);
}

void Mul(int n1, int n2) {
	printf("���� �� : %d\n", n1 * n2);
}

void Div(int n1, int n2) {
	printf("���� �� : %d\n", n1 / n2);
}
int main() {
	int num1, num2;
	char sign;
	printf("���� �Է� : ");
	scanf("%d %c %d", &num1, &sign, &num2);
	if (sign == '+') {
		Add(num1, num2);
	}
	else if (sign == '-') {
		Sub(num1, num2);
	}
	else if (sign == '*') {
		Mul(num1, num2);
	}
	else if (sign == '/') {
		Div(num1, num2);
	}
	else {
		printf("�Է� ����");
	}
	return 0;
}