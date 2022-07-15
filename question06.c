#include <stdio.h>
#include <stdlib.h>

// ---- 동적 할당 ----
// 프로그램 중간에 메모리 공간의 크기를 지정해서 할당 받고 그 공간을 사용 후, 원하는 시점에 해제하는 방식 
// 메모리 공간을 할당 받을 때는 malloc() 함수를 사용해서 할당 받을 수 있다. memory + allocation
// 이때, 반드시 stdlib.h 헤더파일을 선언해줘야 한다. 
// malloc()함수의 원형: 주소를 저장할 변수 = (저장할 변수의 자료형)malloc(크기);
// 동적 할당을 통해서 할당 받은 메모리 공간은 Heap영역에 해당한다.
// 동적 할당 받은 공간을 해제할 때는 free(해제할 공간의 주소); 형식으로 해제할 수 있다.
// 한 번의 동적 할당에는 반드시 한 번의 동적 해제가 진행되어야 한다.
// malloc() 함수에서 크기를 넘겨줄 때는 기본적으로 sizeof() 연산자를 이용해서 넘겨준다.
// 


int main() {
	/*int* ptr;

	ptr = (int*)malloc(4);	// 반환형 void*

	*ptr = 10;

	printf("출력: %d\n", *ptr);
	 
	 
	free(ptr) // 해제할 주소*/

	int* ptr;

	ptr = (int*)malloc(sizeof(int) * 2);

	ptr[0] = 10;
	ptr[1] = 20;

	printf("출력: %d %d\n", ptr[0], ptr[1]);

	free(ptr);

	return 0;
}