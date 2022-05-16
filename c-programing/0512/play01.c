//단순 사칙연산 
/*
a>b
a==b
a<b
각각*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	printf("A와B를 입력하세요");
	scanf("%d%d", &a, &b);
	if (a > b)
	{
		printf("A승리");
	}
	if (a == b)
	{
		printf("무승부");
	}
	if (a < b)
	{
		printf("B승리");
	}

	return 0;
}