#include <stdio.h>

int main() {
	//1���� n���� ��� - ���ѹݺ���(�ݺ����ǹ�)
	//while ~ if ~ break��
	//1���� ������ �� �� ���� 100�� �Ѵ� �ڿ���
	
	int n = 1;
	int sum = 0;
	while (1) {
		n++;
		sum += n;
		printf("%d\n", n);
		if (sum > 100)  //���๮�� �����̸� {} ���� ����.
			break;
	}
	printf("n=%d\n", n);   //14
	printf("sum=%d\n", sum);  //105

	return 0;
}