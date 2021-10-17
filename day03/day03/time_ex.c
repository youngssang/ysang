#include <stdio.h>
#include <time.h>
#include <windows.h>

int main() {
	long t, start, end;
	//time 
	t = time(NULL);  //1970. 1.1. 자정 이후 현재까지 시간
	int i;

	printf("%1d초\n", t);   //%d, %1d(long decimal) 1634441580초

	//1부터 10까지 출력(대기 시간을 도입) - 수행 시간 측정
	//Sleep(1000) -> 1초   <windows.h> include
	start = time(NULL);    //시작 시간

	for (i = 1; i <= 100; i++) {
		printf("%d\n", i);
		Sleep(20);   // 0.02초
	}

	end = time(NULL);

	//double diff_timer = difftime(end, start);
	double diff_timer = (double)(end - start); //형변환
	printf("%1f초\n", diff_timer);
	return 0;
}