#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1.���� �ΰ� �Է� ���� ū�� ���
//2. 4�� ���� �Է¹޾� ���� ������ ���
void main(void)
{
	int num1,num2,num3,num4;
	printf("���� �װ� �Է�:");
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
	printf("���� ��������: ");
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
// ���ǿ����ڵ� ������ �� 
//����)) int max2=(num3 > num4 ? num3:num4);
/*
*if (num3 > max)
{
	max=num3;
}
 
*/