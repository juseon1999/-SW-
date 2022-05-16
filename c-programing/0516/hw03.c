/*
3. 다음의 결과를 보이는 프로그램 작성
1 - 365 : 100
1/1 + 100 : 4/10

1 - 365 : 364
1/1 + 364 : 12/30
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main(void)
{
	int month[13] = {0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int a = 0;
	int day;
	int total=0;
	int cnt = 0;
	printf("1~365 사이 수를 입력하세요\n");
	scanf("%d",&day);
	/*
	입력한 수에서 배열만큼의 수를 뺴고 뺄때마다 
	카운트를 하나 적어준다<<반복 해당 달의 변수가 입력한 데이보다 커질때까지
	이 카운트+1은 월
	남은 값에서 +1은 일
	*/
	for (int i = 1; day > total; i++)
	{
		total = total + month[i];
		cnt++;
	}
	total = total - month[cnt];
	a = day - total;
printf("1월1일부터 +%d일:",day);
printf("%d월%d일\n", cnt,a);
	return 0;
}