#include <stdio.h>

// ---- 포인터와 배열의 관계 ----
// 포인터와 배열은 밀접한 관계를 갖고 있으나, 분명한 차이점이 있다.
// 배열은 선언하게 되면 기본적으로 배열 자기 자신의 시작 주소를 갖고 있다.
// 포인터와 배열은 둘 다 주소를 가지고 연산을 진행하기 때문에 포인터를 배열처럼 인덱스를 통해 접근할 수 있다.
// 배열은 자기 자신의 공간을 사용하고, 포인터는 다른 누군가의 공간을 빌려서 사용한다.


int main() {
	/*char str[100];

	printf("str의 주소: %p\n", &str);
	printf("str의 값: %p\n", str);

	printf("입력: ");
	scanf("%s", str);

	printf("출력: %s\n", str);*/

	char str1[10] = "Hello";
	char* str2 = "Abcde";

	// printf("str1: %s\n", str1);
	// printf("str2: %s\n", str2);

	str1[0] = 'B';
	str2[0] = 'Z';	// 상수 값을 변경하는건 문제 발생.


	printf("str1: %c%c%c%c%c\n", str1[0], str1[1], str1[2], str1[3], str1[4]);
	printf("str2: %c%c%c%c%c\n", str2[0], str2[1], str2[2], str2[3], str2[4]);

	return 0;
}