#define MAX 10
#include <stdio.h>


int top = -1;   //stack�� ���� ����
int stack[MAX]; //������ �迭 ũ�⸦ 10���� ����
void push(int n) {   // �ֱ�
	top++;      // ���� top�� 0���� ����
	stack[top] = n;
	printf("%d\n", stack[top]);
}

int pop() {   //������
	if (top < 0) {
		printf("������ ������ϴ�.\n");
		return 0;
	}
	else {
		return stack[top--];
	}
}

int main() {
	printf("==���ÿ� �ڷ� �ֱ�==\n");
	push(10);
	push(20);
	push(30);

	printf("==���ÿ��� �ڷ� ����==\n");
	printf("%d\n", pop());   //30
	printf("%d\n", pop());   //20
	printf("%d\n", pop());   //10
	printf("%d\n", pop());   //10
	
	return 0;
}
