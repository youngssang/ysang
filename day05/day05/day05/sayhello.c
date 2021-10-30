#include <stdio.h>


//배열과 포인터를 사용해 문구 만들기
void sayhello(char name[]) {
	printf("hello~ %s\n", name);
}

void sayhello2(char* name) {
	printf("hello~ %s\n", name);
}

int main() {
	sayhello("sunny");   //배열 호출
	sayhello2("hyunsoo");  //포인터 호출

	return 0;
}