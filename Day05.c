#include <stdio.h>

//---- ����ü ----
// ���� ���� ������� ��Ƽ� �ϳ��� ���ο� �ڷ����� ����� ����
// ����ü ������ ����� ������ ���� [����ü����.���] �������� �����Ѵ�.
//				ex) struct Data d;
//					d.data1 = 10;
// ����ü�� ũ��� ����ü ������� ��� ���� ũ���̴�.
//
// �⺻ ����ü ���� ����: 
// struct ����ü �̸�{
//		���;
// };

// �⺻ ����ü ����
//struct Data {
//	int data1;	// 4byte
//	int data2;	// 4byte
//	int data3;	// 4byte
//};

// ��Ī ����ü ����
// ��Ī ����ü�� ����ϸ� ����ü �̸�, ��Ī ��� ��� ����
//typedef struct Data {
//	int data1;
//	int data2;
//}Da;

// �͸� ����ü ����
// �͸� ����ü�� ����ϸ� ����ü �̸����� ���� ���� x, ��Ī�� ��� ����
typedef struct {
	int data1;
	int data2;
}Da;

int main() {
	// struct Data d;
	Da d2;	// struct Data d2;

	// d.data1 = 10;
	// d.data2 = 20;

	// printf("���: %d %d\n", d.data1, d.data2);
	// printf("d�� ũ��: %d\n", sizeof(d));	// 12byte


	return 0;
}