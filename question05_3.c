#include <stdio.h>

typedef struct {
	int kor, mat, eng, total;
	double avg;
	char grade;
}St;

void Total(St* s) {
	s->total = s->kor + s->mat + s->eng;
}

void Avg(St* s) {
	s->avg = s->total / 3.0;
}

void Grade(St* s) {
	switch ((int)s->avg / 10) {
	case 10:
	case 9:
		s->grade = 'A';
		break;
	case 8:
		s->grade = 'B';
		break;
	case 7:
		s->grade = 'C';
		break;
	case 6:
		s->grade = 'D';
	default:
		s->grade = 'F';
		break;
	}
}

int main() {
	St s;

	printf("����, ����, ���� �Է�: ");
	scanf("%d %d %d", &s.kor, &s.mat, &s.eng);

	Total(&s);
	Avg(&s);
	Grade(&s);

	printf("����: %d\n", s.total);
	printf("���: %.2f\n", s.avg);
	printf("���: %c\n", s.grade);
	
	return 0;
}