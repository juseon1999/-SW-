/*
2. 3개의 정수를 입력받아 총합과 평균을 구하는 코드 작성
   정수 3개를 입력 : 54 2 38
	총합 : 94
	평균 : 31.33  (소수점 둘째짜리 출력)
*/
#include <stdio.h>
void main(void)
{
	int a, b, c;
	
	printf("정수 세개를 입력:");
	scanf("%d\n%d\n%d", &a, &b, &c);
	printf("총합:%d\n", a+b+c);
	printf("평균:%.2f", (double)(a+b+c) / 3);
}