#include <stdio.h>

//---- 구조체 포인터 ----
// 구조체 포인터를 이용해서 역참조를 진행할 때는 기본적으로 ->(애로우)를 사용해서 진행한다.
// 별도로 *를 사용할 수 있는데 이때는 우선순위 때문에 괄호로 묶어준다.
//				ex) (*d).data1 == d->data1

typedef struct {
	int data1;
	int data2;
}Data;

void Func(Data* d) {
	(*d).data1 = 11;
	d->data2 = 22; // (*d).data2 = 22;
}

int main() {
	Data d;

	d.data1 = 10;
	d.data2 = 20;

	Func(&d);

	printf("출력: %d %d\n", d.data1, d.data2);

	return 0;
}