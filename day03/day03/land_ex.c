#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int dice, i;
	
	//rand() 함수 - <stdlib.h> include
	//srand(seed) 함께 사용 - seed 배정
	srand(time(NULL)); //시간이 흐르므로 seed값이 변경됨
	printf("%d\n", rand());


	//주사위 만들기 - 10번 던지기
	for (i = 0; i < 10; i++) {
		dice = rand() % 6 + 1; // 1 ~ 6이 생성
		printf("주사위 눈 : %d\n", dice);
	}
	
	return 0;
}