/*#include <stdio.h>

int main() {

	FILE* fout;
	int i, j;
	fopen_s(&fout, "gugudan.txt", "w");  //�߰� ���� - "a" ��� ���
	if (fout == NULL) {
		puts("������ ������ �� �����ϴ�.");
		return -1;      //exit(-1)�� ��� ����
	}

	//������ ����

	for (i = 2; i < 20; i++) {
		for (j = 1; j < 10; j++) {
			fprintf(fout, "%d x %d = %d\n", i, j, (i * j));
		}
		fprintf(fout, "\n");  //���ڿ��� ǥ�� - '\n' ������ ����!!
	}
	fclose(fout);   //���� ����

	return 0;

}*/