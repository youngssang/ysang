#include <stdio.h>

main() {
	//변수 선언 - 자료형 변수이름;
	int a;  //정수형 변수 a를 선언
	int b;  
	int c = -5;  //선언과 동시에 초기화

	a = 7;  //변수 이름 = 값value(대입) : 초기화
	b = 6;

	a = a + 1;

	//자료형의 크기
	printf("int 형 = %dbyte\n", sizeof(int));  //4byte-32bit

	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("선영이 나이는 %d살이고, 현수 나이는 %d살입니다.", a, b);



}