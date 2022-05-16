#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(void)
/*
2. 학생 5명의 성적을 입력받아 다음과 같이 출력하는 코드 작성
1's 성적 : 98
2's 성적 : 1000
3's 성적 : -34
4's 성적 : 80
5's 성적 : 75

5명 입력 중[2]번 오류발생!!!
총합 : 253점
평균 : 50.60점(소수점 둘째자리)*/
{
	int error = 0;
	int total = 0;
	int cnt = 0;
	int test[6] = { 0 };
	for (int i = 1; i <= 5; i++) {
		printf("%d's 의 성적 입력:", i);
		scanf("%d", &test[i]);
		if (test[i] >= 0 && test[i] <= 100) {
			total += test[i];
			cnt++;
		}
	}
	error = 5 - cnt;
		printf("5명 입력 중 [%d]번 오류발생\n", error);
		printf("총합:%d\n",total);
		printf("평균: %d", total / 5);
}