#include <stdio.h>

int main() {
	int arr[4] = { 10, 20, 30, 40 };
	int i;
	int sum = 0;

	//30 ���
	printf("%d\n", arr[2]);
	printf("arr[%d] = %d\n", 2, arr[2]);

	//��ü ���
	for (i = 0; i < 4; i++) {
		printf("%3d", arr[i]); 
	}

	//�հ�
	for (i = 0; i < 4; i++) {
		sum += arr[1];    //���� ���ϱ�
	}
	printf("\n�հ� : %d", sum);

	return 0;
}