#include <stdio.h>

int main() {

	// ���� �ڷ����� ����
	char val = -128;   // -128 ~ 127
	printf("%d\n", val);   

	char val2 = 128;   // -128 ~ 127 (���� �ʰ�, �����÷ο�)
	printf("%d\n", val2);  //-128

	unsigned char val3 = 128;  // 0 ~ 255
	printf("%d\n", val3);

	//int�� �ڷ�
	int iNum = 2147483647;   //-21�� ~ 21��
	printf("%d\n", iNum);

	int iNum2 = 2147483648;   //-21�� ~ 21��  (�����÷ο�)
	printf("%d\n", iNum2);

	//�Ǽ��� ���е� ��
	float fNum = 1.1234567;
	double dNum = 1.123456789012345;

	printf("%f\n", fNum);
	printf("%.15lf\n", dNum);

	return 0;

}