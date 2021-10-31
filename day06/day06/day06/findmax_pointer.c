#include <stdio.h>

int findMaxIdx(int* a, int len);
int findMax(int*, int);
int main() {
	int arr[] = { 80, 70, 60, 90, 40, 10 };

	//최대값 계산
	int max = findMax(arr, 6);
	printf("최대값 : %d\n", max);

	// 최대값의 위치 계산
	int maxIdx = findMaxIdx(arr, 6);
	printf("최대값 위치 : %d\n", maxIdx);

	return 0;
}

int findMax(int* a, int len) {
	int maxVal = *a; //*(a + 1)  , 배열에서는 a[0] << a에서 0번째 출력
	int i;

	for (i = 1; i < len; i++) {
		if (maxVal < *(a + 1))
			maxVal = *(a + 1);
	}
	return maxVal;
}

int findMaxIdx(int* a, int len) {
	int maxIdx = 0;   //0번째 자리 인덱스(첫 위치)
	int i;

	for (i = 1; i < len; i++) {
		if (*(a + maxIdx) < *(a + i))
			maxIdx = i;    //위치 변경
	}
}