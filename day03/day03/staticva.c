#include <stdio.h>

//���� ���� - local variable - ���, �Լ�{}�� ���(���� ����� �Ҹ�)
//�������� - global variable - ��ü �������� ���(���α׷� ����Ǹ� �Ҹ�)
//�������� - static variable - ���� ����, ����(���α׷� ����� �Ҹ�)

void count() {
	int x = 0;  //���������� ���� ����� �Ҹ�
	static int y = 0;  //����(����) ����(static Ű���� ���)
	x += 1;
	y += 1;
	printf("x = %d, y = %d\n", x, y);

}
int main() {
	count();
	count();
	count();
	count();


	return 0;
}