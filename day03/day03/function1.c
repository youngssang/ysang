#include <stdio.h>
void sayHello(); //������Ÿ��<�ڷ��� �Լ��̸�()> ����� ?
//void �� ��ȯ �ڷᰡ ����.
void sayHello2(char[]);

int main() {


	sayHello(); //�Լ� ȣ��
	sayHello2("C++");
	sayHello2("Python");

	return 0;
}

void sayHello() {  //sayHello ��� �̸��� �Լ� ����.
	printf("Hello~ C!\n");
}

void sayHello2(char lang[]) {
	printf("Hello~ %s\n", lang);

}