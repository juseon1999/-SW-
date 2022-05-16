#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1.정수 두개 입력 가장 큰수 출력
//2. 4개 정수 입력받아 가장 작은수 출력
void main(void)
{
	int num1,num2,num3,num4;
	printf("정수 네개 입력:");
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
	printf("제일 작은수는: ");
	if (num1 < num2 && num1 < num3 && num1 < num4)
	{
		printf("%d", num1);
	}
	else if (num2 < num1 && num2 < num3 && num2 < num4)
	{
		printf("%d", num2);
	}
	else if (num3 < num1 && num3 < num2 && num3 < num4)
	{
		printf("%d", num3);
	}
	else
	{
		printf("%d", num4);
	}
}
// 조건연산자도 쓸수있 음 
//예시)) int max2=(num3 > num4 ? num3:num4);
/*
*if (num3 > max)
{
	max=num3;
}
 
*/