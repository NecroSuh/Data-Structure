#include <stdio.h>

//---- ����Լ� ----
// ���: ������ �ڸ��� �ǵ��ư��ų� �ǵ��ƿ�. �ݺ�, ��Ǯ��
// ��� �Լ�: �Լ� ������ �ڱ� �ڽ��� �ٽ� ȣ���ϴ� �Լ�

void Recursive(int n) {
	if (n == 0)
		return;

	printf("Recursive Function!!\n");
	Recursive(n - 1);
}

int main() {
	Recursive(3);

	return 0;
}