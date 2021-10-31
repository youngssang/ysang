#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	FILE* fp;   //파일 스트림 생성  file point  , f가 붙으면 다 define 해줌
	fp = fopen("Hello.txt", "w");  //파일 생성. w- 쓰기모드, r- 읽기모드

	fputs("Hello~c!", fp);  //데이터 입력

	fclose(fp);          //파일 닫기



	return 0;
}