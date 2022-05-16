/*
{
	int first = 1, second = 20, third = 3;
	if (first < second && second < third)
	{
		first += 1;
		second += 1;
		third += 1;
		printf("%d,%d,%d\n", first, second, third);
	}
	else
	{
		first += 10;
		second += 10;
		third += 10;
		printf("%d,%d,%d\n", first, second, third);
	}
}
*/
/* ex!!
보유하고있는 책권수 :1
1 book 
보유하고있는 책권수 :5
5 books
*/
/*
#include <stdio.h>

void main(void)
{
	int book;

	printf("보유하고 있는 책 권수 :");
	scanf("%d book", &book);

	if (book > 1)
	{
		printf("s");
	}

}
*/
/*
int main(void)
{
	int A = 3, B = 2;
	if (A > 0 && B < 10)
	{
		printf("%d", A - B);
	}
}

printf("A - B = ",num1, num2);
   if (num1 > 0)
   {
	  if (num2 < 10)
	  {
		 printf("%d", fuck);



void main(void)
{
	int num1, num2;

	scanf("%d %d", &num1, &num2);


	if(num1 > 0 && num2 < 10)
	{
			printf("%d", num1,num2);

	}
}
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(void)
{
	int book;

	printf("보유하고 있는 책 권수");
	scanf("%d",&book);

	if (book == 1)
	{
		printf("%d book", book);
	}
	else
	{
		printf("%d books", book);
	}
}