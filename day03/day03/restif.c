#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//내부 if문
	//수가 10 이상 짝수인 경우 
	//수가 10 이상 홀수인 경우
	//수가 10 이하 짝수인 경우
	//수가 10 이하 홀수인 경우

	//if ~ else if~ else

	int num;
	printf("수를 입력하세요: ");
	scanf_s("%d", &num);

	if (num >= 10 && num % 2 == 0) {
		printf("%d는 10이상의 짝수입니다.\n", num);
	}
	else if (num >= 10 && num % 2 != 0) {
		printf("%d는 10이상의 홀수입니다.\n", num);
	}
	else if (num < 10 && num % 2 == 0) {
		printf("%d는 10보다 작은 짝수입니다.\n", num);
	}
	else if (num < 10 && num % 2 != 0) {
		printf("%d는 10보다 작은 홀수입니다.\n", num);
	}
		return 0;

	}


	/*/if (num >= 10) {
		if (num % 2 == 0) {
			printf("%d는 10이상의 짝수입니다.\n", num);
		}
		else {
			printf("%d는 10이상의 홀수입니다.\n", num);
		}
	}
	else {
		if (num % 2 == 0) {
			printf("%d는 10보다 작은 짝수입니다.\n", num);
		}
		else {
			printf("%d는 10보다 작은 홀수입니다.\n", num);
		}
	}*/

