#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//���� if��
	//���� 10 �̻� ¦���� ��� 
	//���� 10 �̻� Ȧ���� ���
	//���� 10 ���� ¦���� ���
	//���� 10 ���� Ȧ���� ���

	//if ~ else if~ else

	int num;
	printf("���� �Է��ϼ���: ");
	scanf_s("%d", &num);

	if (num >= 10 && num % 2 == 0) {
		printf("%d�� 10�̻��� ¦���Դϴ�.\n", num);
	}
	else if (num >= 10 && num % 2 != 0) {
		printf("%d�� 10�̻��� Ȧ���Դϴ�.\n", num);
	}
	else if (num < 10 && num % 2 == 0) {
		printf("%d�� 10���� ���� ¦���Դϴ�.\n", num);
	}
	else if (num < 10 && num % 2 != 0) {
		printf("%d�� 10���� ���� Ȧ���Դϴ�.\n", num);
	}
		return 0;

	}


	/*/if (num >= 10) {
		if (num % 2 == 0) {
			printf("%d�� 10�̻��� ¦���Դϴ�.\n", num);
		}
		else {
			printf("%d�� 10�̻��� Ȧ���Դϴ�.\n", num);
		}
	}
	else {
		if (num % 2 == 0) {
			printf("%d�� 10���� ���� ¦���Դϴ�.\n", num);
		}
		else {
			printf("%d�� 10���� ���� Ȧ���Դϴ�.\n", num);
		}
	}*/

