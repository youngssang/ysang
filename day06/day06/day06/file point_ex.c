#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	FILE* fp;   //���� ��Ʈ�� ����  file point  , f�� ������ �� define ����
	fp = fopen("Hello.txt", "w");  //���� ����. w- ������, r- �б���

	fputs("Hello~c!", fp);  //������ �Է�

	fclose(fp);          //���� �ݱ�



	return 0;
}