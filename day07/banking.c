#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//은행업무 프로그램
	int sw = 1;  //스위치 변수 - 실행, 중단을 구분
	int balance = 0;

	while (sw) {
		int selNo;  //선택 변수
		int money;  //입출금 변수

		printf("================================\n");
		printf(" 1. 예금 | 2. 출금 | 3. 잔고 | 4. 종료 \n");
		printf("================================\n");
		printf("선택> ");
		scanf_s("%d", &selNo);


		//업무처리
		//예금
		if (selNo == 1) {
			printf("예금액> ");
			scanf_s("%d", &money);
			balance += money;
		}
		else if (selNo == 2) {
			//출금액이 잔액을 초과한 경우 "잔액을 초과했습니다. 다시 입력해주세요."
			while(sw) {
				printf("출금액> ");
				scanf_s("%d", &money);
				if (money > balance) {
					printf("잔액을 초과했습니다. 다시 입력해주세요.\n");
				}
			else {
				balance -= money;
				printf("정상 처리 되었습니다.\n");
				break;
			}

			}
		else if (selNo == 3) {
			printf("잔고> %d\n", balance);
		}
		else if (selNo == 4) {
			sw = 0;    //1 -> 0 으로 변경
			break;    //sw 변수가 있는 경우에는 생략 가능.
		}
		else {
			printf("지원되지 않는 기능입니다.\n");
		}
	}   //while end
	printf("프로그램 종료");

	return 0;
}