/*
3. 초를 입력받아 시, 분, 초로 출력하는 코드 작성
초를 입력 : 3704
3704초 : 1시간 1분 44초
*/

#include <stdio.h>
void main(void)
{
	int a;
	printf("초를 입력하세요");
	scanf("%d",&a);
	printf("%d초: %d시간 %d분 %d초",a, a/3600,(a%3600)/60,a%60);
}