#include <stdio.h>


//typedef�� ����ü ������
typedef struct _Three_D {  //_�� �ٿ��� ������ ����.
	int x, y, z;
} Three_D;

int main() {
	Three_D d3;
	Three_D d4;
	
	d3.x = 100;
	d3.y = 200;
	d3.z = 300;

	//����ü ��ü ����  d3�� d4�� ����
	d4 = d3;   //d3�� d4�� �����ϱ�

	printf("x��ǥ : %d, y��ǥ : %d, z��ǥ : %d\n", d3.x, d3.y, d3.z);
	printf("x��ǥ : %d, y��ǥ : %d, z��ǥ : %d\n", d4.x, d4.y, d4.z);

	return 0;
}