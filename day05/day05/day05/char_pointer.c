#include <stdio.h>

int main() {
	char a = 'A';
	printf("a�� ���� %c\n", a);

	char* b;
	b = &a;
	printf("������ b�� ����Ű�� ���� %c\n", *b);

	*b = 'B';    //���� ����
	printf("a�� ���� %c\n", a);   //B

	return 0;
}