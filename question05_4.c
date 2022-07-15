#include <stdio.h>

typedef struct {
	int data1;
	int data2;
	int data3;
}Data;

int main() {
	Data d;
	Data* pd;

	pd = &d;

	printf("d의 크기: %d\n", sizeof(d));
	printf("pd의 크기: %d\n", sizeof(pd));

	printf("\npd의 값: %p\n", pd);

	return 0;
}