#include <stdio.h>
int main() {
	int num;
	printf("���ڸ� �����ÿ�.: ");
	scanf("%d", &num);
	int* ptr;
	ptr = &num;

	printf("�Է� : %d\n", *ptr);
	printf("��� : %d", num);
}