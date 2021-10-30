#include <stdio.h>

int main() {
	int arr[4] = { 10, 20, 30, 40 };  //1번째, 2번째, 3번째, 4번째
	int i;
	int sum = 0;

	//30 출력
	printf("%d\n", arr[2]);  //2번째에 있는 것을 어레이 해줌
	printf("arr[%d] = %d\n", 2, arr[2]);

	//전체 출력
	for (i = 0; i < 4; i++) {
		printf("%3d", arr[i]);  //%3d에 3은 띄어쓰기 해주는 것
	}

	//합계
	for (i = 0; i < 4; i++) {
		sum += arr[1];    //값을 더하기
	}
	printf("\n합계 : %d", sum);

	return 0;
}