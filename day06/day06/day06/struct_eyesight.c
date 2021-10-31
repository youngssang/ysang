#include <stdio.h>
#include "eyesight.h"

struct Eyesight swap(struct Eyesight sight);

int main() {
	struct Eyesight eye = { 1.5, 1.2 };

	//�÷� ��ȯ
	eye = swap(eye);   //��ü�� �Ű������� ����(ȣ��)

	printf("���ʴ� �÷� : %3.1lf\n", eye.left);
	printf("������ �÷� : %3.1lf\n", eye.right);

	return 0;
}

struct Eyesight swap(struct Eyesight sight) {
	double temp;
	temp = sight.left;
	sight.left = sight.right;
	sight.right = temp;

	return sight;
}