#include <stdio.h>

int main() {

	// 숫자 자료형의 범위
	char val = -128;   // -128 ~ 127
	printf("%d\n", val);   

	char val2 = 128;   // -128 ~ 127 (범위 초과, 오버플로우)
	printf("%d\n", val2);  //-128

	unsigned char val3 = 128;  // 0 ~ 255
	printf("%d\n", val3);

	//int형 자료
	int iNum = 2147483647;   //-21억 ~ 21억
	printf("%d\n", iNum);

	int iNum2 = 2147483648;   //-21억 ~ 21억  (오버플로우)
	printf("%d\n", iNum2);

	//실수형 정밀도 비교
	float fNum = 1.1234567;
	double dNum = 1.123456789012345;

	printf("%f\n", fNum);
	printf("%.15lf\n", dNum);

	return 0;

}