#include <stdio.h>

int Sum(int n) {
	if (n == 1)
		return 1;
	else
		return n + Sum(n-1);
}

int main() {
	int num;

	printf("�Է�: ");
	scanf("%d", &num);

	printf("���: %d\n",Sum(num));
	return 0;
}