#include <stdio.h>

int main() {
	int ranking = 2;
	char medalColor;

	switch (ranking) {
	case 1 :
		medalColor = "Gold";
		break;
	case 2:
		medalColor = "Silver";
		break;
	case 3:
		medalColor = "Bronze";
		break;
	default:
		medalColor = "None";
		break;
	}
	printf("%d�� �޴��� ������ %c�Դϴ�.", ranking, medalColor);

	return 0;
}