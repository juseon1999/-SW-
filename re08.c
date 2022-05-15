//*****             i=1  * 5  " " 0         1~5까지 *은 6-i 공란은 i-1
// ****             i=2  * 4  " " 1    
//  ***             i=3  * 3  " " 2     
//   **             i=4  * 2  " " 3
//    *             i=5  * 1  " " 4
//   **             i=6  * 2  " " 3          6~9까지 *은 i-4  공란은 9-i 
//  ***             i=7  * 3  " " 2
// ****             i=8  * 4  " " 1
//*****             i=9  * 5  " " 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main(void)
{
	for (int i = 1; i <= 9; i++) {
		if (i <= 5)
		{
			for (int j = 1; j <= i - 1; j++) { printf(" "); }
			for (int j = 1; j <= 6 - i; j++) { printf("*"); }
		}
		else {
			for (int j = 1; j <= 9 - i; j++) { printf(" "); }
			for (int j = 1; j <= i - 4; j++) { printf("*"); }
		}
			printf("\n");
	}
	return 0;
}