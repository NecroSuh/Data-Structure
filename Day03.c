#include <stdio.h>

// ---- 변수의 선언 범위 ----
// 지역 변수: 지역 내부에 새로운 지역에서 같은 이름의 변수가 선언되면
//			외부에 있는 변수보다 내부에 있는 변수가 더 높은 우선순위를 갖게 된다.
// 전역 변수: 전역 변수는 별도의 초기화를 진행하지 않으면 0으로 초기화 된다.
//			전역 변수와 지역 변수가 이름이 같다면 해당 지역에 선언된
//			지역 변수가 더 높은 우선 순위를 갖게 된다.
// 정적 변수: 지역 변수와 전역 변수의 특성을 둘 다 갖고 있다.
//			전역 변수의 특성인 프로그램이 종료될 때 공간이 해제된다는 특성을 갖고 있다.
//			지역 변수의 특성인 블록 내부에서만 유효하다는 특성을 갖고 있다.
// 정적 변수 선언 방법: static 자료형 변수명;

//int num;

//void Func() {
//	printf("num의 값: %d\n", num);
//}

/*void Func() {
	int n1 = 3;
	static int n2 = 3;

	printf("n1: %d, n2: %d\n", n1, n2);
	n1++;
	n2++;
}*/

void Func(int* num) {	// 저장할 공간의 자료형* 변수명
	(*num)++;
}

int main() {
	/*int num = 5;
	int num2 = 7;
	{
		int num = 3;
		printf("num의 값: %d\n", num);
		printf("num2의 값: %d\n", num2);

	}

	printf("num의 값: %d\n", num);*/

	//int num = 3;
	//printf("num의 값: %d\n", num);
	//Func();

	/*Func();
	Func();

	printf("n2의 값: %d\n", n2);*/

	int num = 4;

	Func(&num);

	printf("num의 값: %d\n", num);

	return 0;
}