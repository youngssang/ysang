#include <stdio.h>

int main() {
	//���̰��� ����� ��� - �����оƵ�, �ʵ��л�, ��,����л�, �Ϲ���
	int age = 20;
	int charge = 0;

	//���̺��� ���� ó��
	if (age < 8) {
		charge = 1000;
		printf("�����оƵ��Դϴ�.");

	}
	else if (age < 14) { // 1 && 1 ( age >= 8 && age < 14 )
		charge = 2000;
		printf("�ʵ��л��Դϴ�.\n");
	}
	else if (age < 20) {
		charge = 2500;
		printf("��,����л��Դϴ�.\n");
	}
	else if (age <= 20) {  //age >= 20
		charge = 3000;
		printf("�Ϲ����Դϴ�.\n");

	}
	printf("������ %d���Դϴ�.\n", charge);

	return 0;
}