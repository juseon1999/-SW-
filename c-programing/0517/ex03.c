//���� �Է�//
//���� ���ϱ�
//���
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
 Ű����� 0~100�������� ������ �Է¹޾� ȣ���ڿ��� �����ϴ� �Լ� quest
*/
int quest(void)
{
	int num1, crt=0;
	while (crt != 1) {
		printf("������ �Է��ϼ���");
		scanf("%d", &num1);
		while (getchar() != '\n');
		if (num1 >= 0 && num1 <= 100)
		{
			return num1;
			++crt;
		}
		else
			printf("�ٽ� ����\n");
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