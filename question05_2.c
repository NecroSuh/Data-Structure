#include <stdio.h>

//---- ����ü ������ ----
// ����ü �����͸� �̿��ؼ� �������� ������ ���� �⺻������ ->(�ַο�)�� ����ؼ� �����Ѵ�.
// ������ *�� ����� �� �ִµ� �̶��� �켱���� ������ ��ȣ�� �����ش�.
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

	printf("���: %d %d\n", d.data1, d.data2);

	return 0;
}