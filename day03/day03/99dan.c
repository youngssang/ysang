#include <stdio.h>

int main() {
	//������ �� �ܸ� ����ϱ�
	/*int dan = 4;*/
	int i,j;

	/*printf("���� �Է��ϼ���: ");
	scanf_s("%d", &dan);

	for (i = 1; i < 10; i++) {
		printf("%d x %d = %d\n", dan, i, (dan * i));
	}*/
	
	//��ü ������
	for (i = 2; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			printf("%d x %d = %d\n", i, j, (i * j));
		}
		printf("\n");
	}

	return 0;
}