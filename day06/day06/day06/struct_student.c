#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//struct ����ü �ڷ��� ����
struct Student {
	int number;  //�л��� ��ȣ. ������ �ƴ϶� �ʱ�ȭ ���� ����. ���� ��
	char name[20];  //�̸�
	double weight;  //������
};

int main() {
	struct Student s1;   //��ü�� ����(�� ���� ���)
	s1.number = 101;
	//s1.name = "���ϴ�";   //����� ���� �� ����.    
	strcpy(s1.name, "���ϴ�");   //�ּ� ? �� ? �� ������
	s1.weight = 62.3;

	struct Student s2;   //��ü�� ����(�� ���� ���)
	s2.number = 106;
	//s1.name = "���ϴ�";   //����� ���� �� ����.    
	strcpy(s2.name, "�뿵��");   //�ּ� ? �� ? �� ������
	s2.weight = 65;


	printf("===1�� �л�===\n", s1.number);
	printf("�й� : %d\n", s1.number);
	printf("�̸� : %s\n", s1.name);
	printf("������ : %3.1lf\n", s1.weight);

	printf("===2�� �л�===\n", s2.number);

	printf("�й� : %d\n", s2.number);
	printf("�̸� : %s\n", s2.name);
	printf("������ : %3.1lf\n", s2.weight);


	return 0;
}