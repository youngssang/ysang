#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int i;
	float f; // �Ǽ�

	printf("���� �Է� : ");
	scanf_s("%d", &i);  //scanf_s �� ����, \n �����ʱ�
	printf("%d\n", i);

	printf("�Ǽ� �Է� : ");
	scanf_s("%f", &f);  
	printf("%f\n", f);


	return 0;



}