#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char a[10];
	char* b;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%s", a);
	//a[] = "apple"


	b = a;
	printf("����� ���ڿ� : %s\n", b);


	return 0;
}