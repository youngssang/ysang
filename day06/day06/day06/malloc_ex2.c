#include <stdio.h>
#include <stdlib.h>

int main() {
	//���ĺ� �빮�� 26���� ����
	char* cp;
	int i;

	cp = (int*)malloc(sizeof(int) * 50);
	if (cp == NULL) {  //���� ó��(�ʼ�)
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1);   //��� ����
	}

	for (i = 0; i < 50; i++) {
		*(cp + i) = 'A' + i;
	}
	printf("%s", i);     //26
	*(cp + i) = '\0';
	printf("%s", cp);    //���ڿ� ��� %c �ƴ�. %s. ���ڿ��� ���� + 1 �����ϱ�.
	free(cp);

	return 0;
	
	
	/*//������ �����ϱ�
	*(ip + 0) = 10;
	*(ip + 1) = 20;
	*(ip + 2) = 30;
	*(ip + 3) = 40;

	//�迭�� �����ϱ�
	ip[0] = 10;
	ip[1] = 20;
	ip[2] = 30;
	ip[3] = 40;

	//���
	for (i = 0; i < 4; i++) {
		printf("%3d %3d\n", *(ip + i), ip[i]);
	}


	free(ip);   //�޸� ����. û���ؾ���. ��..?  c++���� ���ص���

	return 0;
}*/