#include <stdio.h>

int main() {

	FILE* fout;
	fopen_s(&fout, "hello2.txt", "a");  //�߰� ���� - "a" ��� ���
	if (fout == NULL) {
		puts("������ ������ �� �����ϴ�.");
		return -1;      //exit(-1)�� ��� ����
	}

	//rprintf(fout, "�ȳ��ϼ���~\n");
	fprintf(fout, "���� �Ϸ� �Ǽ���~\n");

	fclose(fout);      //���� ����

	return 0;
}