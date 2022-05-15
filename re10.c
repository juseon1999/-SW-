//    ----*            i=1     공란 4   *  1
//    ---***           i=2     공란 3   *  3
//    --*****          i=3     공란 2   *  5
//    -*******         i=4     공란 1   *  7
//    *********        i=5     공란 0   *  9    >>>이까지는 공란 >> 5-i	 별은 2i-1 
//    -*******         i=6     공란 1   *  7    >>>  공란은 i-5  별은 2(10-i)-1
//    --*****          i=7     공란 2   *  5
//    ---***           i=8     공란 3   *  3
//    ----*            i=9     공란 4   *  1
//                    

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int ct = 0;
void main(void)
{
	for (int i = 1; i <= 9; i++) {
		if (i <= 5) {
			for (int j = 1; j <= 5 - i; j++) { printf(" "); }
			for (int j = 1; j <= 2 * i - 1; j++) { printf("*"); }
		}
		else {
			for (int j = 1; j <= i - 5; j++) { printf(" "); }
			for (int j = 1; j <= 2 * (10 - i) - 1; j++) {
				printf("*");
			}
		}
		printf("\n"); 
		}
	return 0;
}