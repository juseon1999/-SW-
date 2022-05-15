//*****             i=1  * 5
//****              i=2  * 4    i가 5까지는 6-i
//***               i=3  * 3    i가 6부터는 i-4
//**                i=4  * 2
//*                 i=5  * 1
//**                i=6  * 2
//***               i=7  * 3
//****              i=8  * 4
//*****             i=9  * 5
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(void)
{
	for (int i = 1; i <= 9; i++) { 
		if (i <= 5) {
			for (int j = 1;j<=6-i;j++)
			{
				printf("*");
			}
		}
		else {
			for (int j = 1; j <= i - 4; j++)
			{
				printf("*");
			}
		}
		printf("\n"); }
	return 0;
}