#include <stdio.h>
#include <stdlib.h>

int main() {
	//알파벳 대문자 26개를 저장
	char* cp;
	int i;

	cp = (int*)malloc(sizeof(int) * 50);
	if (cp == NULL) {  //에러 처리(필수)
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1);   //즉시 종료
	}

	for (i = 0; i < 50; i++) {
		*(cp + i) = 'A' + i;
	}
	printf("%s", i);     //26
	*(cp + i) = '\0';
	printf("%s", cp);    //문자열 출력 %c 아님. %s. 문자열은 갯수 + 1 생각하기.
	free(cp);

	return 0;
	
	
	/*//역참조 저장하기
	*(ip + 0) = 10;
	*(ip + 1) = 20;
	*(ip + 2) = 30;
	*(ip + 3) = 40;

	//배열로 저장하기
	ip[0] = 10;
	ip[1] = 20;
	ip[2] = 30;
	ip[3] = 40;

	//출력
	for (i = 0; i < 4; i++) {
		printf("%3d %3d\n", *(ip + i), ip[i]);
	}


	free(ip);   //메모리 해제. 청소해야함. 왜..?  c++에선 안해도됌

	return 0;
}*/