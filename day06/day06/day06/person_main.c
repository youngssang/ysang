#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "person.h"
#include <stdlib.h>
#include <string.h>

int main() {
	//��ü �������� ����
	Person* p1 = (Person*)malloc(sizeof(Person));  //���� �޸� ?
	if (p1 == NULL) {
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1);
	}

	//�ڷ� ����
	strcpy(p1->name, "������");
	p1->age = 31;
	strcpy(p1->address, "����� ����� ��赿");

	//�ڷ� ���
	printf("�̸� : %s\n", p1->name);
	printf("���� : %d\n", p1->age);
	printf("�ּ� : %s\n", p1->address);



	return 0;
}