/*#include <stdio.h>

int main() {

	FILE* fin;
	FILE* fout;
	int ch = 0;

	fopen_s(&fin, "gugudan.txt", "r");
	fopen_s(&fout, "gugudan2.txt", "w");

	if (fin == NULL) {
		puts("���� ���⿡ �����߽��ϴ�.");
		return -1;
	}

	if (fin == NULL) {
		puts("���� ������ �����߽��ϴ�.");
		return -1;
	}
	puts("***���Ͽ� ������ �Է�***");
	while ((ch = fgetc(fin)) != EOF) {
		fputc(ch, fout);
	}
	/*puts("***���Ͽ� ������ �Է�***");
	while (ch != EOF) {
		ch = fgetc(fin); //���Ͽ��� �о����
		fputc(ch, fout);  //fout�� ����
	}

	fclose(fin);
	fclose(fout);

	return 0;
}*/