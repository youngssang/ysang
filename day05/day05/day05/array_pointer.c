#include <stdio.h>

int main() {
	//�迭 ������ ���� �� ���
	int a[4] = { 1, 2, 3, 4 };
	int i;
	int* b;
	//b = &a[0]; �Ʒ��� ����
	b = a;   //a�� �ּҸ� ����


	printf("==�迭 a ���==\n");
	for (i = 0; i < 4; i++) {
		printf("%2d", a[i]);
	}
	printf("\na[0]�� �� : %d\n", a[0]);   // 1
	printf("a[0]�� �� : %d\n", *b + 0);     // 1


	printf("==������ �迭 b ���==\n");
	for (i = 0; i < 4; i++) {
		printf("%2d", *(b + i));
	}
	//*(b + 0) = *b
	//*(b + 1) = *b + 1
	//*(b + 2) = *b + 2
	//*(b + 3) = *b + 3


	return 0;
}