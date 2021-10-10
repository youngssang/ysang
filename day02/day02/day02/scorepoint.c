#include <stdio.h>
int main() {
	//학점을 판정하는 프로그램
	//90점이상 A, 80점 이상 B, 70점 이상 C, 60점 이상 D, 60점 미만 F
	int score = 90;
	char ch;

	//조건 처리
	if (score >= 90) {
		ch = 'A';
		printf("A학점 입니다.\n");
	}
	else if (score > 80 && score < 91) {
		ch = 'B';
		printf("B학점 입니다.\n");
	}
	else if (score > 70 && score < 81) {
		ch = 'C';
		printf("C학점 입니다.\n");
	}
	else if (score > 60 && score < 71) {
		ch = 'D';
		printf("D학점 입니다.\n");
	}
	else if (score < 61) {
		ch = 'F';
		printf("F학점 입니다.\n");
	}
	return 0;

}