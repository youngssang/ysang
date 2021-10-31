#include <stdio.h>
#include <stdlib.h>


int main() {  //동적 메모리

	int num1 = 11;
	int* numPtr1;   //스택 영역에 위치
	int* numPtr2;   //힙(heap) 영역에 위치


	numPtr1 = &num1;    //4byte
	numPtr2 = (int*)malloc(sizeof(int));    //4byte
	if(numPtr2 == NULL) {   // 에러 처리(필수)  .  변수아닌 상수 숫자 0
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1);
	}

	printf("%p\n", numPtr1);
	printf("%p\n", numPtr2);


	free(numPtr2);    //메모리 해제(삭제) 쓰고 지운다.
	return 0;
}