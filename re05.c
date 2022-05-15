//*                 i=1  *=1
//**                i=2  *=2                  
//***               i=3  *=3
//****              i=4  *=4
//*****             i=5  *=5      if i<=5  i == *
//****              i=6  *=4      if i>5  10-i
//***               i=7  *=3
//**                i=8  *=2
//*                 i=9  *=1

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main(void)
{
	for(int i=1;i<=9;i++)
	{
			if(i<=5)
			{
				for (int j = 1; j <= i; j++)
					printf("*");
			}
			else
			{
				for(int j=1; j<=10-i ; j++)
				{
					printf("*");
				}
			}
		printf("\n");
	}
		return 0;
}