#include <stdio.h>

void total(int kor, int math, int eng) {
	int total;
	total = kor + math + eng;
	printf("����: %d\n", total);
}

void avg(int kor, int math, int eng) {
	float avg =(kor + math + eng) / 3;
	printf("��� :%.2f\n", avg);
}

void grade(int kor, int math, int eng) {
	float avg = (kor + math + eng) / 3;
	if (avg >= 90) {
		printf("���: A");
	}
	else if (avg >= 80) {
		printf("���: B");
	}
	else if (avg >= 70) {
		printf("���: C");
	}
	else if (avg >= 60) {
		printf("���: D");
	}
	else {
		printf("���: F");
	}
}

int main() {
	int kor, math, eng;
	
	printf("����, ����, ���� �Է�: ");
	scanf("%d %d %d", &kor, &math, &eng);

	total(kor, math, eng);
	avg(kor, math, eng);
	grade(kor, math, eng);
	return 0;
}