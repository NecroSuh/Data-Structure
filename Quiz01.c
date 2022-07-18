#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int data1;
	int data2;
}Data1;

void Func1(Data1** p) {
	(*p)->data1 = 100;
}

void Func2(Data1* p) {
	p->data2 = 200;
}

int main()
{
	Data1* p = (Data1*)malloc(sizeof(Data1));

	Func1(&p);
	//Func1()함수를 만들어서 Func1()안에서 data1에 100을 넣으세요.
	Func2(p);
	//Func2()함수를 만들어서 Func2()안에서 data2에 200을 넣으세요.	
	printf("data1: %d, data2: %d\n", p->data1, p->data2);
	//data1과 data2를 출력하세요.
	free(p);
	// 동적해제 코드를 추가하세요.
	
	return 0;
}