#include <stdio.h>
int main() {
	//������ �����ϴ� ���α׷�
	//90���̻� A, 80�� �̻� B, 70�� �̻� C, 60�� �̻� D, 60�� �̸� F
	int score = 90;
	char ch;

	//���� ó��
	if (score >= 90) {
		ch = 'A';
		printf("A���� �Դϴ�.\n");
	}
	else if (score > 80 && score < 91) {
		ch = 'B';
		printf("B���� �Դϴ�.\n");
	}
	else if (score > 70 && score < 81) {
		ch = 'C';
		printf("C���� �Դϴ�.\n");
	}
	else if (score > 60 && score < 71) {
		ch = 'D';
		printf("D���� �Դϴ�.\n");
	}
	else if (score < 61) {
		ch = 'F';
		printf("F���� �Դϴ�.\n");
	}
	return 0;

}