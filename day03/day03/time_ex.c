#include <stdio.h>
#include <time.h>
#include <windows.h>

int main() {
	long t, start, end;
	//time 
	t = time(NULL);  //1970. 1.1. ���� ���� ������� �ð�
	int i;

	printf("%1d��\n", t);   //%d, %1d(long decimal) 1634441580��

	//1���� 10���� ���(��� �ð��� ����) - ���� �ð� ����
	//Sleep(1000) -> 1��   <windows.h> include
	start = time(NULL);    //���� �ð�

	for (i = 1; i <= 100; i++) {
		printf("%d\n", i);
		Sleep(20);   // 0.02��
	}

	end = time(NULL);

	//double diff_timer = difftime(end, start);
	double diff_timer = (double)(end - start); //����ȯ
	printf("%1f��\n", diff_timer);
	return 0;
}