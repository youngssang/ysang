#include <stdio.h>
#include <stdlib.h>


int main() {  //���� �޸�

	int num1 = 11;
	int* numPtr1;   //���� ������ ��ġ
	int* numPtr2;   //��(heap) ������ ��ġ


	numPtr1 = &num1;    //4byte
	numPtr2 = (int*)malloc(sizeof(int));    //4byte
	if(numPtr2 == NULL) {   // ���� ó��(�ʼ�)  .  �����ƴ� ��� ���� 0
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1);
	}

	printf("%p\n", numPtr1);
	printf("%p\n", numPtr2);


	free(numPtr2);    //�޸� ����(����) ���� �����.
	return 0;
}