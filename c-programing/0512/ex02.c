#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1.���� �ΰ� �Է� ���� ū�� ���
//2. 4�� ���� �Է¹޾� ���� ������ ���
void main(void)
{
int num1, num2;

printf("���� �ΰ� �Է��� :");
scanf("%d %d", &num1, &num2);
printf("���� ū �� :");

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