#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int data3;
	int data4;
}Data2;

typedef struct {
	int data1;
	int data2;
	Data2* p;
}Data1;

void Func2(Data2* p) {
	p->data3 = 100;
}

void Func3(Data1*** p) {
	(**p)->p->data4 = 200;
}

void Func1(Data1** p)
{
	Data2* p2 = (Data2*)malloc(sizeof(Data2));
	(*p)->p = p2;

	Func2((*p)->p);
	//Func2()함수를 만들어서 Func2()안에서 data3에 100을 넣으세요. 
	Func3(&p);
	//Func3()함수를 만들어서 Func3()안에서 data4에 200을 넣으세요.
}


int main()
{
	Data1* p = (Data1*)malloc(sizeof(Data1));

	Func1(&p);

	printf("data3: %d, data4: %d\n", p->p->data3, p->p->data4);
	//data3와 data4를 출력하세요.

	free(p->p);
	free(p);

	return 0;
}