/*#include <stdio.h>
#define PI 3.14  //매크로 상수


int main() {
	//const int PI = 3.14;

	//PI = 3.1415;  상수는 변경 불가

	//원의 넓이와 둘레를 계산
	int radius;            //반지름
	double area, circum;    //넓이, 둘레

	printf("반지름을 입력하세요 : ");
	scanf_s("%d", &radius);

	//원의 넓이 = PI * 반지름 * 반지름
	//원의 둘레 = 2 * PI * 반지름

	area = PI * radius * radius;
	circum = 2 * PI * radius;

	printf("원의 넓이 : %1f\n", area);
	printf("원의 둘레 : %1f\n", circum);

	return 0;
}*/