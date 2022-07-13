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
	// Q3) 하노이 탑을 재귀함수로 구현해보세요. (원반 개수 입력)
	//				입력: 3
	//				출력: 1 -> C
	//					  2 -> B
	//					  1 -> B
	//					  3 -> C
	//					  1 -> A
	//					  2 -> C
	//					  1 -> C
	int num;
	printf("입력: ");
	scanf("%d", &num);
	printf("출력: \n");
	Hanoi(num, 'A', 'B', 'C');

	return 0;
}