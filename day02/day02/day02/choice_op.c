#include <stdio.h>

int main() {
	//���� ������ - ���ǽ� ? �� : ����;
	int value;
	value = (3 > 4) ? 10 : 20;
	printf("��� �� : %d\n", value);

	int fatherAge = 35;
	int motherAge = 38;

	printf("%d\n", fatherAge);   //���� ��
	printf("%x\n", &fatherAge);  //�ּ��� ��. n�ۼ�Ʈ?


	char ch = (fatherAge > motherAge) ? 'T' : 'F';
	printf("��� �� : %c\n", ch);

	return 0;
}