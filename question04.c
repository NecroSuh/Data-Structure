#include <stdio.h>

int Sum(int n) {
	if (n == 1)
		return 1;
	else
		return n + Sum(n-1);
}

int main() {
	int num;

	printf("입력: ");
	scanf("%d", &num);

	printf("출력: %d\n",Sum(num));
	return 0;
}
