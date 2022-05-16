#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1.정수 두개 입력 가장 큰수 출력
//2. 4개 정수 입력받아 가장 작은수 출력
void main(void)
{
int num1, num2;

printf("정수 두개 입력해 :");
scanf("%d %d", &num1, &num2);
printf("가장 큰 수 :");

if (num1>num2)
{
	printf("%d", num1);
}
else
{
	printf("%d", num2);
}
return 0;
}