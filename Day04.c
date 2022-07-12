#include <stdio.h>

//---- 재귀함수 ----
// 재귀: 원래의 자리로 되돌아가거나 되돌아옴. 반복, 되풀이
// 재귀 함수: 함수 내에서 자기 자신을 다시 호출하는 함수

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