//키보드로 엔터치기전까지 입력받은 것을 한꺼번에 저장하는게 입력버퍼
// 스캔에프로 입력받은 수,문자를 버퍼에 저장하고 스캔에프 명령어에 따라 하나씩 소비함
/*
	fflush(stdiu);>>완전중요>>>무조건 스캔에프 다음에 사용
	>>>>crt_secure_no_warnings 를 쓰면 사용됨
	while(getchar( ) != ('\n');   
	>>> 내가 엔터를 치면 버퍼를 비워줄거야

	printf("입력");
	scanf("%d,&a);
	fflush(stdiu)<<현재사용안됨>>
	or
	while(getchar( ) != ('\n');<<이거 사용
	printf("입력");
	scanf("%d,&'ch');
	scanf는 먼저 램(버퍼)에 입력한 정수를 저장하고 저장된 수에서 하나씩 처리함
	정수를 입력받는데 .같은 숫자가 아닌 기호를 사용하면 정수형은 입력이 끝났다 생각하고 명령을 종료함
	[12][\n][][][][]
	scanf~~ 
	*/
	/*void main()<<<호출자
	{ prn_star();<<피호출자 함수
	}<<메인 함수(호출자)에 넣은 문장실행 함수(피호출자)
	int main (void) void 는 호출자가 피호출자에게 명령을 내리기 위해쓰는 함수 //메인이 주는 명령
	int(반환형or리턴형)는 피호출자가 호출자에게 명령을 내리기위한 함수 //메인에게 주는 말
	(반환형 or 리턴형) 함수이름 (매개변수 or 파라미터) {문장실행}
	(매개변수
	호출되는 함수는 메인문 위에 있어야한다 그러나 #include<stdio.h> 아래 있어야한다
	
	
	*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int quest(void)
{
	int num;
	printf("정수를 입력하세요");
	scanf("%d", &num);
	while (getchar() != '\n');
	return num;
}
int ret(int num1, int num2)
{
	int max;
	if (num1 > num2)
	{max = num1;}
	else 
	{max = num2; }
	return max;
}

int main (void) {
	int num1 = quest();
	int num2 = quest();
	int max = ret(num1,num2);

	printf("%d 와 %d 중 큰 수는: %d", num1, num2, max);
}
