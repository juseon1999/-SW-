/*
*****
 ****
  ***
   **
	*
	i=1 ������ 0�� ����5��   ������ ������ i-1 ���� ������ 6-i
	i=2 ������ 1�� ����4��   �� ó�� ��µǴ°Ŵ� �����̹Ƿ� 
	i=3 ������ 2�� ����3��  ���� j < i�̶�� ������ ��µǰ� j<6-i ��� ���� ��µǵ��� 
	i=4 ������ 3�� ����2��
	i=5 ������ 4�� ����1��
    
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main(void)
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j < i; j++)
		{
			printf(" ");
		}
		for (int j = 1; j <= 6-i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}