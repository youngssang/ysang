#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//������� ���α׷�
	int sw = 1;  //����ġ ���� - ����, �ߴ��� ����
	int balance = 0;

	while (sw) {
		int selNo;  //���� ����
		int money;  //����� ����

		printf("================================\n");
		printf(" 1. ���� | 2. ��� | 3. �ܰ� | 4. ���� \n");
		printf("================================\n");
		printf("����> ");
		scanf_s("%d", &selNo);


		//����ó��
		//����
		if (selNo == 1) {
			printf("���ݾ�> ");
			scanf_s("%d", &money);
			balance += money;
		}
		else if (selNo == 2) {
			//��ݾ��� �ܾ��� �ʰ��� ��� "�ܾ��� �ʰ��߽��ϴ�. �ٽ� �Է����ּ���."
			while (sw) {
				printf("��ݾ�> ");
				scanf_s("%d", &money);
				if (money > balance) {
					printf("�ܾ��� �ʰ��߽��ϴ�. �ٽ� �Է����ּ���.\n");
				}
				else {
					balance -= money;
					printf("���� ó�� �Ǿ����ϴ�.\n");
					break;
				}

			}
		}
		else if (selNo == 3) {
			printf("�ܰ�> %d\n", balance);
		}
		else if (selNo == 4) {
			sw = 0;    //1 -> 0 ���� ����
			break;    //sw ������ �ִ� ��쿡�� ���� ����.
		}
		else {
			printf("�������� �ʴ� ����Դϴ�.\n");
		}
		}   //while end
		printf("���α׷� ����");

		system("Pause");
		return 0;
	}