#include <stdio.h>

int main() {

	int i = 0, sum = 0;

	for (i = 1; i <= 10; i++) {
		sum = sum + i;
		printf("i = %d, sum = %d\n", i, sum);
	}

	printf("�հ� : %d\n", sum);
	printf("i�� �޸��ּ� : %p\n", &i);
	printf("sum�� �޸��ּ� : %p\n", &sum);


	return 0;
}