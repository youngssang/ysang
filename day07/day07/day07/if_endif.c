/*#include <stdio.h>
#define VER 10    //ġȯ���� �ִ� ��ũ�θ� ����
#define BIT16     //ġȯ���� ���� ��ũ�θ� ����


int main() {
	int MAX = 0;

#if VER >= 10
	printf("������ %d �Դϴ�.\n", VER);
#endif
	
	printf("====================================\n");

#ifdef BIT16
	MAX = 32767;     //��ũ�θ� BIT16�� ���ǵǾ� ������ 
#else
	MAX = 2147483647     //��ũ�θ� BIT16�� ���ǵǾ� ���� ������ 

#endif
	printf("int�� ������ �ִ밪 : %d\n", MAX);

	return 0;
}*/