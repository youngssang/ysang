#include <stdio.h>

int main() {
	//�迭 ����� ���
	int arr[3];  //������ �迭���� arr�� 3���� �޸� ���� �Ҵ�
	int i;   //�ݺ� Ƚ��

	//�ڷ� ����
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;

	//1�� ���
	printf("%d\n", arr[0]); //10

	//��ü ���
	for (i = 0; i < 3; i++) {
		printf("%d ", arr[i]);
	}


	return 0;
}