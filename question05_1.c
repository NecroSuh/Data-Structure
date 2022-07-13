#include <stdio.h>

typedef struct {
	int kor, mat, eng, total;
	double avg;
	char grade;
}Student;

void Total(int kor, int mat, int eng, int* total){
	*total = kor + mat + eng;
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
		*grade = 'B';
		break;
	case 7:
		*grade = 'C';
		break;
	case 6:
		*grade = 'D';
	default:
		*grade = 'F';
		break;
	}
}

int main() {
	Student st;

	printf("����, ����, ���� ���� �Է�: ");
	scanf("%d %d %d", &st.kor, &st.mat, &st.eng);

	Total(st.kor, st.mat, st.eng, &st.total);
	Avg(st.total, &st.avg);
	Grade(st.avg, &st.grade);
	
	printf("����: %d\n", st.total);
	printf("���: %.2f\n", st.avg);
	printf("���: %c\n", st.grade);
	return 0;
}