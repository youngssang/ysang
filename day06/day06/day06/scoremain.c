#include <stdio.h>
#include "students.h"



int main() {
	//�л� 1�� ����
	Students s1 = { 101, "������", {85, 90, 0.0} };

	//��� ���
	s1.score.avg = (double)(s1.score.math + (double)s1.score.eng) / 2;

	//���
	printf("��ȣ : %d\n", s1.number);
	printf("�̸� : %s\n", s1.name);
	printf("��� : %3.1lf\n", s1.score.avg);


	return 0;
}