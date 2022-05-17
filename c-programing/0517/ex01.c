#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main(void)
{
	int a;
	int binary[8]={0,};
	do {
		printf("0~255 사이 정수를 입력");
		scanf("%d", &a);
	} while (a < 0 || a>255);
	int i = 7;
	while (a!=0){
		binary[i--] = a % 2;
		a = a/2;
	}
	for (int i = 0; i <=7; i++)
	{
		printf("%d", binary[i]);
	}

}