#include <stdio.h>
#include "Point_circle.h"

int main() {
	//�� ����
	struct Circle c1;
	c1.p1.x = 5;
	c1.p1.y = 6;
	c1.radius = 4;

	printf("�߽���(%d, %d), ������ : %d", c1.p1.x, c1.p1.y, c1.radius);

	return 0;
}