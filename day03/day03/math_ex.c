#include <stdio.h>
#include <math.h>

int main() {
	//���� ���� �Լ��� math.h �� include��
	// ���밪 ����ϱ�
	printf("%d\n", abs(3));   // 3
	printf("%d\n", abs(-3));  // 3

	//�ݿø� - ������ ��� ���������� ����
	printf("%.1f\n", round(2.54));   // 3.0
	printf("%.1f\n", round(2.3));    // 2.0
	printf("%.1f\n", round(-2.3));    // -2.0
	printf("%.1f\n", round(-2.5));    // -3.0

	//����(����) - ������ ��� ���������� ����
	printf("%.1f\n", floor(2.54));   // 2.0
	printf("%.1f\n", floor(2.54));    // 2.0
	printf("%.1f\n", floor(-2.54));    // -3.0
	printf("%.1f\n", floor(-2.54));    // -3.0

	return 0;
}