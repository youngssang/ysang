#include <stdio.h>

int main() {
	//�迭�� ����
	char a1[] = "TEN";
	char a2[4]; // a1�� ����
	int i;

	//a1�� a2�� ����
	for (i = 0; i < 4; i++) {
		a2[i] = a1[i];
	}

	//���
	printf("%s\n", a1);
	printf("%s\n", a2);


	//a1�� a2�� �Ųٷ�(������ġ) ����
	for (i = 0; i < 4; i++) {
		a2[i] = a1[2-i];
	}
	a2[3] = '\0';
	//a[0] = a[2] 'N'
	//a[1] = a[1] 'E'
	//a[2] = a[0] 'T'
	printf("%s\n", a2);

	return 0;
}