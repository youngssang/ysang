#include <stdio.h>

//���������� ���, �Լ�{}�� ���(���� ����� �Ҹ�) - local variable
void ab10(int a, int b) { //ab10 �Լ��� ��������
	a *= 10;   // a = a * 10
	b *= 10;   // b = b * 10
	//a = 10, b = 20
}
int main() {
	int a, b;  //main�� ���� ����

	a = 1;
	b = 2;
	ab10(a, b);  //ab10�� a , b�� �Ҹ���

	printf("a = %d, b = %d", a, b);  //1, 2 main�� a, b��


	return 0;
}