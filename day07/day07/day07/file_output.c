#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	FILE* fp;   //���� ������ ����
	fp = fopen("hello.txt", "w");  // ���� ���. "w", "wt"  �Ѵ� ��� ����
	//���� �Լ� - fputc()-���� 1��, fputs()-���ڿ�
	fputc('H', fp);
	fputc('E', fp);
	fputc('L', fp);
	fputc('L', fp);
	fputc('O', fp);
	fputc('\n', fp);   //���� - �ٹٲ� ����

	fclose(fp);

	return 0;
}