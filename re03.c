/*
*****
 ****
  ***
   **
	*
	i=1 공란이 0개 별이5개   공란의 공식은 i-1 별의 공식은 6-i
	i=2 공란이 1개 별이4개   맨 처음 출력되는거는 공란이므로 
	i=3 공란이 2개 별이3개  만약 j < i이라면 공란이 출력되고 j<6-i 라면 별이 출력되도록 
	i=4 공란이 3개 별이2개
	i=5 공란이 4개 별이1개
    
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