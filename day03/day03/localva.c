#include <stdio.h>

//지역변수는 제어문, 함수{}에 사용(블럭을 벗어나면 소멸) - local variable
void ab10(int a, int b) { //ab10 함수의 지역변수
	a *= 10;   // a = a * 10
	b *= 10;   // b = b * 10
	//a = 10, b = 20
}
int main() {
	int a, b;  //main의 지역 변수

	a = 1;
	b = 2;
	ab10(a, b);  //ab10의 a , b가 소멸함

	printf("a = %d, b = %d", a, b);  //1, 2 main의 a, b임


	return 0;
}