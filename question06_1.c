#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	char* eng;

	printf("영단어 길이 입력: ");
	scanf("%d", &num);

	eng = (char*)malloc(sizeof(char) * (num + 1));

	printf("영단어 입력: ");
	scanf("%s", eng);


	printf("출력: ");
	
	for (int i = num - 1; i >= 0; i--) {
		printf("%c", eng[i]);
	}

	printf("\n");

	free(eng);

	return 0;
}