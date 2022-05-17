//성적 입력//
//학점 구하기
//출력
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
 키보드로 0~100점사이의 성적을 입력받아 호출자에게 전달하는 함수 quest
*/
int quest(void)
{
	int num1, crt=0;
	while (crt != 1) {
		printf("성적을 입력하세요");
		scanf("%d", &num1);
		while (getchar() != '\n');
		if (num1 >= 0 && num1 <= 100)
		{
			return num1;
			++crt;
		}
		else
			printf("다시 ㄱㄱ\n");
	}
}
char quest_2(int num)
{

	char ch;
	switch (num /10)
	{
	case 10: 
	case 9:ch = 'A'; break;
	case 8:ch = 'B'; break;
	case 7:ch = 'C'; break;
	case 6:ch = 'D'; break;
	
	default:ch ='F';
	}
	return ch;
}
void main(void)
{
	int num = quest();
	char ch = quest_2(num);
	printf("%c", ch);
}