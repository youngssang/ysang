#include <stdio.h>

int callByRef(int *i);
int main() {
	int n = 10;
	int result = 0;

	//�����͸� ���� �� ���� �����ϴ� ���
	printf("==callByVal ȣ��==\n");
	result = callByVal(n);
	printf("%d\n", result);  //11
	printf("%d\n", n);  //10
	
	printf("==callByRef ȣ��==\n");
	result = callByRef(&n);
	printf("%d\n", result);  //11
	printf("%d\n", n);  //10
	return 0;
}

int callByVal(int i) {
	i = i + 1;
	return i;
}

int callByRef(int* i) {
	*i = *i + 1;
	return *i;
}