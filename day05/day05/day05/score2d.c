#include <stdio.h>

int main() {
	/* �л� 5���� ����, ���� ���� ����*/

	int x, y;  //�ݺ� ����
	int score[5][2] = {
		{75, 80},
		{85, 95},
		{90, 100},
		{70, 90},
		{85, 55}
	};
	int total[2] = { 0};       //�հ� ����  , �ʱ�ȭ �� 0�� 1���� ǥ���ص� ��
	double avg[2] = { 0.0 };  //��� ����

	//���
	for (x = 0; x < 5; x++) {
		for (y = 0; y < 2; y++) {
			printf("%3d", score[x][y]);
		}
		printf("\n");
	}

	//�հ� ���
	for (x = 0; x < 5; x++) {   //5����
		total[0] += score[x][0];  //���� ���� �հ�
		total[1] += score[x][1];  //���� ���� �հ�
	}

	//��� ���
	avg[0] = (double)total[0] / 5;
	avg[1] = (double)total[1] / 5;

	printf("%���� �հ� : %d\n", total[0]);
	printf("%���� �հ� : %d\n", total[1]);
	printf("%���� ��� : %3.1lf\n", avg[0]);    // lf = ���,  3.1f �Ҽ��� ��ġ ����
	printf("%���� ��� : %3.1lf\n", avg[1]);    // lf = ���,  3.1f �Ҽ��� ��ġ ����



	return 0;
}