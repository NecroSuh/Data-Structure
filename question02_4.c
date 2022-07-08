#include <stdio.h>

void total(int kor, int math, int eng) {
	int total;
	total = kor + math + eng;
	printf("총합: %d\n", total);
}

void avg(int kor, int math, int eng) {
	float avg =(kor + math + eng) / 3;
	printf("평균 :%.2f\n", avg);
}

void grade(int kor, int math, int eng) {
	float avg = (kor + math + eng) / 3;
	if (avg >= 90) {
		printf("등급: A");
	}
	else if (avg >= 80) {
		printf("등급: B");
	}
	else if (avg >= 70) {
		printf("등급: C");
	}
	else if (avg >= 60) {
		printf("등급: D");
	}
	else {
		printf("등급: F");
	}
}

int main() {
	int kor, math, eng;
	
	printf("국어, 수학, 영어 입력: ");
	scanf("%d %d %d", &kor, &math, &eng);

	total(kor, math, eng);
	avg(kor, math, eng);
	grade(kor, math, eng);
	return 0;
}