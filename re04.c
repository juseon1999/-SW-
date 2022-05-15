/*
	*     i=1  공란 4개 별1
   **     i=2  공란 3개 별2
  ***	  i=3  공란 2개 별3
 ****   포문은 5번 반복해서 i가 5-i 면 공란 그렇지 않으면 별 출력 i= 별의갯수
*****

 
 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main(void)
{
	for(int i=1;i<=5;i++) //i가 5보다 작거나 같으면 \n출력하고 i의 값을 1 증가시킨다 이후 조건에 충족되면 반복
	{
		for (int j = 5; j > 0; j--) //j가 0보다 크면 문장을 반복시킨다 한번 반복 후 j는 1줄어든다
		{
			if (j<=i)
			{ printf("*"); }
			else 
			{ printf(" "); }
		}
		printf("\n");
	}
	return 0;
}