#include <stdio.h>

int myabs(int);
int main() {
	int value1 = 
	int value2 = myabs(-4);
	printf("%d\n", value1);
	printf("%d\n", value2);


	return 0;
}

int myabs(int x) {  //������ �����, ����� ����� ����
	if (x < 0) {
		return -x;
	}
	else ( //x >= 0)
		return x;
}

}