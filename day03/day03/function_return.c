#include <stdio.h>

int square(int);
int main() {
	int add(int, int);
	
	int result = square(7);  // square 호출

	int result2 = add(4, 5);  //add 호출

	printf("%d\n", result);
	printf("%d\n", result2);


	return 0;
}
//제곱 수 구하는 함수 - 3 * 3 = 9
int square(int x) {  //return이 있고, 매개변수가 1개인 함수
	return x * x;
}

// 두 수를 곱하는 함수 - 4 * 5 = 20
int add(int x, int y) {
	return x * y;
}