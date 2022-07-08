#include <stdio.h>
int Total(int kor, int mat, int eng) {
	return kor + mat + eng;
}
double Avg(int total) {
	return total / 3.0;
}

char Grade(double avg) {
	switch ((int)avg / 10) {
	case 10:
	case 9:
		return 'A';
		break;
	case 8:
		return 'B';
		break;
	case 7:
		return 'C';
		break;
	case 6:
		return 'D';
		break;
	default:
		return 'F';
		break;
	}
}

int main() {
	int kor, mat, eng, total;
	double avg;
	char grade;

	printf("국어, 수학, 영어 성적 입력: ");
	scanf("%d %d %d", &kor, &mat, &eng);

	total = Total(kor, mat, eng);
	printf("총합: %d\n", total);

	avg = Avg(total);
	printf("평균: %.2f\n", avg);

	grade = Grade(avg);
	printf("등급: %c", grade);
	return 0;
}