#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int is_prime(int num)
{
	int num2;
	int cnt = 0;
	int grade=0;
	for (int num2 = 1; num > num2; num2++)
	{
		if (num % num2 == 0) {
			++cnt;
		}
		if (cnt >= 2)
			grade = 0;
		else grade = 1;
	}
		return grade;
}

void main(void)
{
	for (int num = 2; num <= 100; num++)
	{
		int flag = is_prime(num);
		if (flag)
		{ printf("%d는 소수입니다\n", num); }
		else{ printf
		("%d는 소수가 아닙니다\n", num);
	}
	}
}