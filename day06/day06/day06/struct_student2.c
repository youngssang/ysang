#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//struct 구조체 자료형 정의   //배열을 이용해 정리하기
struct Student {
	int number;  //학생의 번호. 변수가 아니라 초기화 하지 않음. 선언만 함
	char name[20];  //이름
	double weight;  //몸무게
};

int main() {
	//배열 객체 변수(힙 영역 사용)
	struct Student s[3] = {
		{101, "강하늘", 50.2},
		{102, "서우주", 61.5},
		{103, "이은하", 66.5}
	};
	int i;

	for (i = 0; i < 3; i++) {
		printf("===106반===\n", s[i].number);
		printf("학번 : %d\n", s[i].number);
		printf("이름 : %s\n", s[i].name);
		printf("몸무게 : %3.1lf\n", s[i].weight);

	}
	return 0;
}