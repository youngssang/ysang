#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	//제곱수 계산 - x(입력값) -> x * x
	int x, n1, n2;


	printf("숫자를 입력해 주세요: ");
	scanf_s("%d", &x);
	printf("%d\n", x * x);
	printf("x의 주소값 : 0x%x\n", &x);


	// 두 수의 차이 구하기
	printf("두 수를 입력해 주세요: ");
	scanf_s("%d %d", &n1, &n2);
	printf("%d\n", n1 - n2);
	printf("x의 주소값 : 0x%x\n", &n1);
	printf("x의 주소값 : 0x%x\n", &n2);


	return 0;





}