#include <stdio.h>
void Hanoi(int n, char from, char temp, char to) {
	if (n == 1) {
		printf("1 -> %c\n", to);
	}
	else {
		Hanoi(n - 1, from, to, temp);
		printf("%d -> %c\n", n, to);
		Hanoi(n - 1, temp, from, to);
	}
}
int main() {
	// Q3) �ϳ��� ž�� ����Լ��� �����غ�����. (���� ���� �Է�)
	//				�Է�: 3
	//				���: 1 -> C
	//					  2 -> B
	//					  1 -> B
	//					  3 -> C
	//					  1 -> A
	//					  2 -> C
	//					  1 -> C
	int num;
	printf("�Է�: ");
	scanf("%d", &num);
	printf("���: \n");
	Hanoi(num, 'A', 'B', 'C');

	return 0;
}