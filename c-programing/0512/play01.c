//�ܼ� ��Ģ���� 
/*
a>b
a==b
a<b
����*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	printf("A��B�� �Է��ϼ���");
	scanf("%d%d", &a, &b);
	if (a > b)
	{
		printf("A�¸�");
	}
	if (a == b)
	{
		printf("���º�");
	}
	if (a < b)
	{
		printf("B�¸�");
	}

	return 0;
}