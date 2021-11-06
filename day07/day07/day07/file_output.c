#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	FILE* fp;   //파일 포인터 생성
	fp = fopen("hello.txt", "w");  // 쓰기 모드. "w", "wt"  둘다 사용 가능
	//쓰기 함수 - fputc()-문자 1개, fputs()-문자열
	fputc('H', fp);
	fputc('E', fp);
	fputc('L', fp);
	fputc('L', fp);
	fputc('O', fp);
	fputc('\n', fp);   //개행 - 줄바꿈 문자

	fclose(fp);

	return 0;
}