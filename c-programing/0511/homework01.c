/*1. 두개의 정수를 입력받아 사칙연산 결과를 출력
   첫번째 정수 : 12
   두번째 정수 : 9

	12 + 9 = 21
	12 - 9 = 3
	12 * 9 = 108
	12 / 9 = 1
	12 % 9 = 3
	*/

#include<stdio.h>
void main(void)
{
	
	int a, b;

	printf("첫번째 정수를 입력하세요:\n");
	scanf("%d", &a);
	printf("두번쨰 정수를 입력하세요:\n");
	scanf("%d", &b);
	printf("%d + %d = %d\n", a, b, a+b);
	printf("%d - %d = %d\n", a, b, a-b);
	printf("%d * %d = %d\n", a, b, a*b);
	printf("%d / %d = %d\n", a, b, a/b);
	printf("%d %% %d = %d\n", a, b, a % b);
	printf("%d %% %d = %d\n", a, b, a % b);

}