#include <stdio.h>

int main() {

	FILE* fp;
	fopen_s(&fp, "hello.txt", "r");   //�б� ���. "r", "rt" ���
	if (fp == NULL) {   //����ó�� �ʼ�
		puts("������ �� �� �����ϴ�.");   // puts(���ڿ�)
		return -1;
	}

	int ch = 0;
	while ((ch = fgetc(fp)) != EOF) { // -1�� �ƴѵ��� ��������
		putchar(ch);
	}

	/*while (1) {
		int ch = fgetc(fp);  //�� ���� ��������
		if (ch == EOF) break; // EOF = -1
		//putchar(ch);         //�� ���� ����ϱ�
		printf("%c", ch);
	}*/

	fclose(fp);


	return 0;
}