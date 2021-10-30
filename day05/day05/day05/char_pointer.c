#include <stdio.h>

int main() {
	char a = 'A';
	printf("a의 값은 %c\n", a);

	char* b;
	b = &a;
	printf("포인터 b가 가르키는 값은 %c\n", *b);

	*b = 'B';    //값을 변경
	printf("a의 값은 %c\n", a);   //B

	return 0;
}