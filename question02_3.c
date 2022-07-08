#include <stdio.h>
void Add(int n1, int n2) {
	printf("´õÇÑ °ª : %d\n", n1 + n2);
}

void Sub(int n1, int n2) {
	printf("»« °ª : %d\n", n1 - n2);
}
int Mul(int n1, int n2) {
	return n1 * n2;
}

int Div(int n1, int n2) {
	return n1 / n2;
}

void Calc(int num1, char oper, int num2) {
	switch (oper) {
	case '+':
		Add(num1, num2);
		break;

	case '-':
		Sub(num1, num2);
		break;
	case '*':
		printf("°öÇÑ °ª: %d\n", Mul(num1, num2));
		break;
	case '/':
		printf("³ª´« °ª: %d\n", Div(num1, num2));

	}
}

int main() {
	int num1, num2;
	char oper;
	printf("¿¬»ê ÀÔ·Â : ");
	scanf("%d %c %d", &num1, &oper, &num2);

	Calc(num1, oper, num2);
	return 0;
}