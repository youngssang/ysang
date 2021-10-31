#include <stdio.h>

int findMaxIdx(int* a, int len);
int findMax(int*, int);
int main() {
	int arr[] = { 80, 70, 60, 90, 40, 10 };

	//�ִ밪 ���
	int max = findMax(arr, 6);
	printf("�ִ밪 : %d\n", max);

	// �ִ밪�� ��ġ ���
	int maxIdx = findMaxIdx(arr, 6);
	printf("�ִ밪 ��ġ : %d\n", maxIdx);

	return 0;
}

int findMax(int* a, int len) {
	int maxVal = *a; //*(a + 1)  , �迭������ a[0] << a���� 0��° ���
	int i;

	for (i = 1; i < len; i++) {
		if (maxVal < *(a + 1))
			maxVal = *(a + 1);
	}
	return maxVal;
}

int findMaxIdx(int* a, int len) {
	int maxIdx = 0;   //0��° �ڸ� �ε���(ù ��ġ)
	int i;

	for (i = 1; i < len; i++) {
		if (*(a + maxIdx) < *(a + i))
			maxIdx = i;    //��ġ ����
	}
}