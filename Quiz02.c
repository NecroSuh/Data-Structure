#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char name[20];
	int score;
}Element;

typedef struct {
	int data1;
	int data2;
	Element p;
}Data1;

int main()
{
	Data1* p = (Data1*)malloc(sizeof(Data1));

	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", p->p.name);
	//scanf()�� �̿��� name�� �̸��� �Է� ��������.
	
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &p->p.score);
	//scanf()�� �̿��� score�� ������ �Է� ��������.
	
	printf("�̸��� %s, ������ %d ���̴�.\n", p->p.name, p->p.score);
	//�Է¹��� ���� ����ϼ���.

	free(p);
	//���� ���� �ڵ带 �߰��ϼ���.

	return 0;
}