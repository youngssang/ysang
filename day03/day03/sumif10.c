#include <stdio.h>

int main() {

	//1���� n���� ���ϱ�
	int n = 0;    //�ݺ� Ƚ��
	int sum = 0;  //�հ踦 ������ ����
	while (n <= 10) {
		sum += n;  //sum = sum + n
		printf("n=%d, sum=%d\n", n, sum);
		n++;   //n = n + 1


	}

	printf("sum = %d\n", sum);

	/**/n += 1;  //1(sum)
	n += 2; //3
	n += 3; //6
	n += 4; //10



	return 0;
}