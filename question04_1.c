#include <stdio.h>

int F(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n * F(n - 1);
	}
}

int main() {
	// Q1) ���丮�� ���� ��ȯ���ִ� �Լ�(����Լ�)�� �����غ�����.
	//				�Է�: 4
	//				���: 24

	int num;
	printf("�Է�: ");
	scanf("%d", &num);
	printf("���: %d", F(num));


	return 0;
}