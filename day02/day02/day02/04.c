#include <stdio.h>

int main() {
	 //������ ��ȯ�ѱ�
	int blue = 1;
	int red = 2;
	int yellow;


	printf("===== ��ȯ�� =====\n");
	printf("blue = %d, red = %d\n", blue, red);

	//��ȯ ó��

	yellow = blue;
	blue = red;
	red = yellow;


	printf("===== ��ȯ�� =====\n");
	printf("blue = %d, red = %d\n", blue, red);

	return 0;

}