//    *********  i1 *9  ''0   i-1 Àº °ø¶õ *  
//    -*******   i2 *7  ''1
//    --*****    i3 *5  ''2   
//    ---***     i4 *3  ''3
//    ----*      i5 *1  ''4      10-(2i-1)
//
//
//1=9 2=7 3=5 4=3 5=1
// 
//
//
//


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(void)
{
	for (int i = 1; i <= 5; i++) { 
		for (int j = 1; j <= i-1; j++) { printf(" "); }
		for (int j = 1; j <= 11-(2*i); j++) { printf("*"); }
		
		printf("\n"); }
	return 0;
}