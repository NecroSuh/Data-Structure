#include <stdio.h>

int FN(int n) {
	if (n == 1 || n==2) {
		return 1;
	}
	else {
		return FN(n - 1) + FN(n - 2);
	}
}

int main() {
	// Q2) �Ǻ���ġ ������ ���ϴ� �Լ�(����Լ�)�� �����غ�����.
	//						1, 1, 2, 3, 5, 8, 13, 21, 34...
	//				�Է�: 6
	//				���: 8
	int num;
	printf("�Է�: ");
	scanf("%d", &num);

	printf("���: %d", FN(num));


	return 0;
}