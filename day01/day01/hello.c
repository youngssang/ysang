#include <stdio.h> //standard io ?
//전처리기 : 컴파일 수행전에 먼저 처리

int main() { //메인함수(프로그램 시작점)

	printf("Hello~ C!\n");  //stdio.h 에서 연결함
	printf("안녕~ C!\n");
	
	//printf("출력 형식", 출력데이터)
	printf("정수 : %d\n", 4+10); //정수 14를 출력. printf("대용 서식문자", 문자(변수))
	printf("실수 : %.2f\n", 2.54); //실수 2.54 출력
	printf("문자 : %c\n", 'k'); //1개 문자 . 홑따옴표 _

	return 0; //운영체제로 0을 반환해서 프로그램을 종료한다는 뜻
}