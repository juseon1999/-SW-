/*
4. 8530원어치 물건을 사고, 10000원을 지불했을 때의 거스름돈과
거스름돈의 1000원, 500원, 100원, 50원, 10원의 개수 출력

물건값을 입력 : 8530
지불한 액수 입력 : 10000

거스름돈 : 1470원
1000원 : 1개
500원 : 0개
100원 : 4개
50원 : 1개
10원 : 2개
*/
#include <stdio.h>
void main(void)
{
	int price, pay;
	printf("물건값을 입력하세요:\n");
	scanf("%d", &price);
	printf("지불한 액수를 입력하세요\n");
	scanf("%d", &pay);

	int charge = pay - price;
	
	printf("거스름돈:%d\n", charge);
	printf("1000원:%d\n",charge/1000);
	printf("500원:%d\n", (charge %1000)/500);
	printf("100원:%d\n", ((charge %1000)%500)/100);
	printf("50원:%d\n", (((charge % 1000) % 500) % 100)/50);
	printf("10원:%d", ((((charge % 1000) % 500) % 100) % 50)/10);
}