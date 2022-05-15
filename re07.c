//    *             i=1  * 1 4  
//   **             i=2  * 2 3   i가 5까지는 6-i   공란은 5-i 
//  ***             i=3  * 3 2   i가 6부터는 i-4
// ****             i=4  * 4 1
//*****             i=5  * 5 0
// ****             i=6  * 4 1
//  ***             i=7  * 3 2
//   **             i=8  * 2 3
//    *             i=9  * 1 4     공란 i-5 별표 10-i
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main (void) {
	for (int i = 1; i <= 9; i++) {
		if (i <= 5) {
			for (int j = 1; j <= 5 - i; j++) { printf(" "); }
			for (int j = 1; j <= i; j++) { printf("*"); }
		}
		else {
			for (int j = 1;j<=i-5;j++) { printf(" "); }
			for (int j = 1; j <= 10 - i; j++) { printf("*"); }
		}
		printf("\n");
	}
}