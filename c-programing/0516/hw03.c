/*
3. ������ ����� ���̴� ���α׷� �ۼ�
1 - 365 : 100
1/1 + 100 : 4/10

1 - 365 : 364
1/1 + 364 : 12/30
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main(void)
{
	int month[13] = {0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int a = 0;
	int day;
	int total=0;
	int cnt = 0;
	printf("1~365 ���� ���� �Է��ϼ���\n");
	scanf("%d",&day);
	/*
	�Է��� ������ �迭��ŭ�� ���� ���� �������� 
	ī��Ʈ�� �ϳ� �����ش�<<�ݺ� �ش� ���� ������ �Է��� ���̺��� Ŀ��������
	�� ī��Ʈ+1�� ��
	���� ������ +1�� ��
	*/
	for (int i = 1; day > total; i++)
	{
		total = total + month[i];
		cnt++;
	}
	total = total - month[cnt];
	a = day - total;
printf("1��1�Ϻ��� +%d��:",day);
printf("%d��%d��\n", cnt,a);
	return 0;
}