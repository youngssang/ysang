#include <stdio.h>

int main() {

	FILE* fp;
	char name[10];
	int kor, eng;
	double avg;

	printf("이름 입력 : ");
	fscanf_s(stdin, "%d", name, sizeof(name));  //stdin 은 포인터(주소)
	//stdin 은 포인터(주소)로 버퍼를 가리키며 운영체제가 제공
	//키보드로 입력


	printf("국어 점수 입력 : ");
	fscanf_s(stdin, "%d", &kor);

	printf("영어 점수 입력 : ");
	fscanf_s(stdin, "%d", &eng);

	fopen_s(&fp, "score.txt", "w");
	if (fp == NULL) {
		puts("파일을 생성할 수 없습니다.\n");
		return -1;
	}

	avg = ((double)kor + (double)eng) / 2;
	fprintf(fp, "%s %d %d %3.1lf", name, kor, eng, avg);    //파일에 쓰기
	fprintf(fp, "%s %d %d %3.1lf", name, kor, eng, avg);    //모니터에 쓰기

	fclose(fp);

	return 0;
}