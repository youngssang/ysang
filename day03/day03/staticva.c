#include <stdio.h>

//지역 변수 - local variable - 제어문, 함수{}에 사용(블럭을 벗어나면 소멸)
//전역변수 - global variable - 전체 범위에서 사용(프로그램 종료되면 소멸)
//정적변수 - static variable - 값을 공유, 누적(프로그램 종료시 소멸)

void count() {
	int x = 0;  //지역변수는 블럭을 벗어나면 소멸
	static int y = 0;  //정적(고정) 변수(static 키워드 사용)
	x += 1;
	y += 1;
	printf("x = %d, y = %d\n", x, y);

}
int main() {
	count();
	count();
	count();
	count();


	return 0;
}