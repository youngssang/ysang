#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//struct 구조체 자료형 정의
struct Student {
	int number;  //학생의 번호. 변수가 아니라 초기화 하지 않음. 선언만 함
	char name[20];  //이름
	double weight;  //몸무게
};

int main() {
	struct Student s1;   //객체의 변수(힙 영역 사용)
	s1.number = 101;
	//s1.name = "강하늘";   //상수는 넣을 수 없음.    
	strcpy(s1.name, "강하늘");   //주소 ? 값 ? 을 정해줌
	s1.weight = 62.3;

	struct Student s2;   //객체의 변수(힙 영역 사용)
	s2.number = 106;
	//s1.name = "강하늘";   //상수는 넣을 수 없음.    
	strcpy(s2.name, "노영상");   //주소 ? 값 ? 을 정해줌
	s2.weight = 65;


	printf("===1번 학생===\n", s1.number);
	printf("학번 : %d\n", s1.number);
	printf("이름 : %s\n", s1.name);
	printf("몸무게 : %3.1lf\n", s1.weight);

	printf("===2번 학생===\n", s2.number);

	printf("학번 : %d\n", s2.number);
	printf("이름 : %s\n", s2.name);
	printf("몸무게 : %3.1lf\n", s2.weight);


	return 0;
}