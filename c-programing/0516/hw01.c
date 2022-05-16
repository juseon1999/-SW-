#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
1. 짝수 10개를 입력받아 출력하는 코드를 작성
num1 : 10
num2 : 34
num3 : 5
num3 : 20
num4 : 42
num5 : 6
num6 : 9
num6 : 11
num6 : 22
num7 : 4
num8 : 26
num9 : 10
num10 : 8

< PRINT >
0 10  34  20  42  6  22  4  26  10  8
*/
void main(void)
{
	int num[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
			printf("num%d:\n", i+1);
			scanf("%d", &num[i]);
			if (num[i] < 0 || num[i] % 2 != 0) {
				i = i - 1;
		}
	}
	printf("<<<print>>>\n");
	for(int i=0;i<10;i++)
	{
		printf("%d\t",num[i]);
	}
	return 0;
}