#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	char* eng;

	printf("���ܾ� ���� �Է�: ");
	scanf("%d", &num);

	eng = (char*)malloc(sizeof(char) * (num + 1));

	printf("���ܾ� �Է�: ");
	scanf("%s", eng);


	printf("���: ");
	
	for (int i = num - 1; i >= 0; i--) {
		printf("%c", eng[i]);
	}

	printf("\n");

	free(eng);

	return 0;
}