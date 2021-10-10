#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int i;
	float f; // 실수

	printf("정수 입력 : ");
	scanf_s("%d", &i);  //scanf_s 로 변경, \n 넣지않기
	printf("%d\n", i);

	printf("실수 입력 : ");
	scanf_s("%f", &f);  
	printf("%f\n", f);


	return 0;



}