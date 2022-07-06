#include <stdio.h>
int main() {
	int num;
	printf("숫자를 적으시오.: ");
	scanf("%d", &num);
	int* ptr;
	ptr = &num;

	printf("입력 : %d\n", *ptr);
	printf("출력 : %d", num);
}