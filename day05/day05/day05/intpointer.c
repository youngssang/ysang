#include <stdio.h>

int main() {
	//������ ������ ���� �� ����
	int data = 11;

	int* ip = &data;  //����� ���ÿ� ����

	printf("%x %d\n", &data, data);    //data�� �ּ�, ��
	printf("%x %x\n", &ip, ip);        //ip�� �ּ�, data�� �ּ�
	printf("%d %d\n", *ip, data);        //*ip�� ��, data ��

	printf("==������ ����==\n");
	printf("%x %d %d\n", &data, data, *ip);
	printf("%x %d %d\n", &data + 2, data + 2, *ip + 2);



	return 0;
}