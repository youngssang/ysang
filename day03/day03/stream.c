#include <stdio.h>

int main() {
	//���ڿ� �迭 ����� ���
	char fruit1[] = { 'a', 'p', 'p', 'l', 'e', '\0'}; //'\0' - null �������
	//���� ���� ���
	char fruit2[] = "apple";
	char name[20];


	printf("%s\n", fruit1);
	//���� ���� ���
	printf("%s\n", fruit2);

	//�̸� ��� ��
	printf("����� �̸��� �����ΰ���?");
	scanf_s("%s", name, sizeof(name)); // �迭�� ���(���Ĺ���, �迭, �迭�� ũ��)
	printf("����� �̸��� %s�̱���.", name);


	return 0;
}