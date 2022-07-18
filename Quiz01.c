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
	//Func1()�Լ��� ���� Func1()�ȿ��� data1�� 100�� ��������.
	Func2(p);
	//Func2()�Լ��� ���� Func2()�ȿ��� data2�� 200�� ��������.	
	printf("data1: %d, data2: %d\n", p->data1, p->data2);
	//data1�� data2�� ����ϼ���.
	free(p);
	// �������� �ڵ带 �߰��ϼ���.
	
	return 0;
}