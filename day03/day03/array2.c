#include <stdio.h>

int main() {
	int arr[4] = { 10, 20, 30, 40 };  //1��°, 2��°, 3��°, 4��°
	int i;
	int sum = 0;

	//30 ���
	printf("%d\n", arr[2]);  //2��°�� �ִ� ���� ��� ����
	printf("arr[%d] = %d\n", 2, arr[2]);

	//��ü ���
	for (i = 0; i < 4; i++) {
		printf("%3d", arr[i]);  //%3d�� 3�� ���� ���ִ� ��
	}

	//�հ�
	for (i = 0; i < 4; i++) {
		sum += arr[1];    //���� ���ϱ�
	}
	printf("\n�հ� : %d", sum);

	return 0;
}