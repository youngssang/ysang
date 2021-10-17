#include <stdio.h>

int main() {
	int arr[4] = { 10, 20, 30, 40 };
	int i;
	int sum = 0;

	//30 출력
	printf("%d\n", arr[2]);
	printf("arr[%d] = %d\n", 2, arr[2]);

	//전체 출력
	for (i = 0; i < 4; i++) {
		printf("%3d", arr[i]); 
	}

	//합계
	for (i = 0; i < 4; i++) {
		sum += arr[1];    //값을 더하기
	}
	printf("\n합계 : %d", sum);

	return 0;
}