#include <stdio.h>

int main() {
	//operator ���� + - * / �� ��� ��Ģ����
	int num1 = 10;
	int num2 = 2;
	char operator = '#';
	int result = 0;
	//switch ~ case�� �ۼ�
	switch (operator) {
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 / num2;
		break;
	default :
		printf("������ �����Դϴ�.\n");
		return;
	}
		

	/*/if (operator == '+') {
		result = num1 + num2;
	}
	else if (operator == '-') {
		result = num1 - num2;
	}
	else if (operator == '*') {
		result = num1 * num2;
	}
	else if (operator == '/') {
		result = num1 / num2;
	}
	else {
		printf("������ �����Դϴ�.\n");
		return;  //��� ���� break �Ⱦ�. (if ~ else)
	}*/
	printf("��� ���� %d�Դϴ�.", result);

	return 0;
}