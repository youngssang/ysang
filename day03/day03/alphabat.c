#include <stdio.h>

int main() {
	//���� �迭 ����� ���
	char alphabat[26];
	char ch = 'A';
	int i;


	//'A'�� ���
	//printf("%c %d\n", ch, ch);
	//printf("%c %d\n", ch + 1, ch + 1);

	// �迭�� ����
	for (i = 0; i < 26; i++) {
		alphabat[i] = ch;
		ch++;
	}

	//���
	for (i = 0; i < 26; i++) {
		printf("%c, %d \n", alphabat[i], alphabat[i]);
	}

	return 0;
}