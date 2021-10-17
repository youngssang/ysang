#include <stdio.h>

int main() {
	//문자 배열 선언과 사용
	char alphabat[26];
	char ch = 'A';
	int i;


	//'A'를 출력
	//printf("%c %d\n", ch, ch);
	//printf("%c %d\n", ch + 1, ch + 1);

	// 배열에 저장
	for (i = 0; i < 26; i++) {
		alphabat[i] = ch;
		ch++;
	}

	//출력
	for (i = 0; i < 26; i++) {
		printf("%c, %d \n", alphabat[i], alphabat[i]);
	}

	return 0;
}