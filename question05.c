#include <stdio.h>
typedef struct {
	int kor, mat, eng, total;
}Sub;

typedef struct {
	double avg;
}Avg;

typedef struct {
	char grade;
}Grade;

int main() {
	Sub s;
	Avg a;
	Grade g;

	printf("국어, 수학, 영어 입력: ");
	scanf("%d %d %d", &s.kor, &s.mat, &s.eng);

	s.total = s.kor + s.mat + s.eng;
	printf("총합: %d\n", s.total);

	a.avg = (s.total) / 3;
	printf("평균: %.2f\n", a.avg);

	switch ((int)a.avg / 10) {
	case 10:
	case 9:
		g.grade = 'A';
		break;
	case 8:
		g.grade = 'B';
		break;
	case 7:
		g.grade = 'C';
		break;
	case 6:
		g.grade = 'D';
		break;
	default:
		g.grade = 'F';
		break;
	}

	printf("등급: %c", g.grade);

	return 0;
}