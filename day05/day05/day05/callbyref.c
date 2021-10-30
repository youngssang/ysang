#include <stdio.h>

int callByRef(int *i);
int main() {
	int n = 10;
	int result = 0;

	//포인터를 썼을 때 값을 유지하는 방법
	printf("==callByVal 호출==\n");
	result = callByVal(n);
	printf("%d\n", result);  //11
	printf("%d\n", n);  //10
	
	printf("==callByRef 호출==\n");
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