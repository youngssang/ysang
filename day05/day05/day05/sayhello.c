#include <stdio.h>


//�迭�� �����͸� ����� ���� �����
void sayhello(char name[]) {
	printf("hello~ %s\n", name);
}

void sayhello2(char* name) {
	printf("hello~ %s\n", name);
}

int main() {
	sayhello("sunny");   //�迭 ȣ��
	sayhello2("hyunsoo");  //������ ȣ��

	return 0;
}