#include <stdio.h>

void price();
int quantity = 2;    //���� ����

int main() {

	printf("%d����\n", quantity);

	price();
	return 0;
}

void price() {
	int price = 10000 * quantity;
	printf("%d���Դϴ�.\n", price);
}