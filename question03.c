#include <stdio.h>

void Total(int kor, int math, int eng, int* total) {
	*total = kor + math + eng;
}

void Avg(int total, double* avg) {
	*avg = total / 3.0;
}

void Grade(double avg, char* grade) {

	switch ((int)avg / 10) {
	case 10:
	case 9:
		*grade = 'A';
		break;
	case 8:
		*grade =  'B';
		break;
	case 7:
		*grade = 'C';
		break;
	case 6:
		*grade = 'D';
		break;
	default:
		*grade = 'F';
		break;
	}
}

int main() {
	int kor, math, eng, total;
	double avg;
	char grade;

	printf("����, ���� , ���� ���� �Է�: ");
	scanf("%d %d %d", &kor, &math, &eng);

	Total(kor, math, eng, &total);
	printf("����: %d\n", total);

	Avg(total, &avg);
	printf("���: %.2f\n", avg);

	Grade(avg, &grade);
	printf("���: %c\n", grade);

	return;
}