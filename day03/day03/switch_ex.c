#include <stdio.h>

int main() {
	//������ ���� �Ŵ� ������ �����ϴ� ���ǹ�
	int ranking = 2;
	char medalColor;

	switch (ranking) {
	case 1:
		medalColor = 'G';
		break;
	case 2:
		medalColor = 'S';
		break;
	case 3:
		medalColor = 'B';
		break;
	default:
		medalColor = 'N';
		break;
	} //switch End
	printf("%d�� �޴��� ������ %c", ranking, medalColor);





	return 0;
}