#include <stdio.h>

struct Three_D {
	//3���� ��ǥ
	int x, y, z;
};

int main() {
	//����ü ��ü ����
	struct Three_D d3;
	struct Three_D d4;

	d3.x = 100;
	d3.y = 200;
	d3.z = 300;

	//����ü ��ü ����  d3�� d4�� ����
	d4 = d3;   //d3�� d4�� �����ϱ�
	
	printf("x��ǥ : %d, y��ǥ : %d, z��ǥ : %d\n", d3.x, d3.y, d3.z);
	printf("x��ǥ : %d, y��ǥ : %d, z��ǥ : %d\n", d4.x, d4.y, d4.z);

	return 0;
}