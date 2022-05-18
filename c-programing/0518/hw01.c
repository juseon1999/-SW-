#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

int nansu(void);

int pnt_int(int* p_a, int* p_b, int* p_quiz);

void main(void)

{

	int a = 0, b = 101;

	int quiz = nansu();



	int num = pnt_int(&a, &b, &quiz);

	pnt_int(a, b, quiz);

}

int nansu(void)

{

	srand((unsigned int)time(NULL));



	for (int i = 0; i < 20; i++)

	{

		int quiz = rand() % 100 + 1;	// (0+1 ~ 99+1)

		return quiz;

	}

}

int pnt_int(int* p_a, int* p_b, int* p_quiz)

{

	int quiz = *p_quiz;

	int num = 0;

	int a = *p_a;

	int b = *p_b;

	int cnt = 0;

	do {

		{	printf("%d - %d 사이의 정수를 입력하세요\n", a + 1, b - 1);
			scanf("%d", &num); }
			while (getchar() != '\n');

			if (num == quiz) {
				printf("정답입니다 답은%d입니다\n", quiz);
				return cnt == 6;
			}
			else if (cnt == 5) {
				printf("죄송합니다 기회를 다 소진했습니다\n정답은 %d입니다", quiz);
				break;
			}
			else if (num <= a || num >= b) {
				printf("범위 내 숫자를 입력해주세요\n");
			}
			else if (num < quiz && num>a) {
				a = num;
				++cnt;
				printf("더 커야합니다 기회는 %d번 남았습니다\n", 6 - cnt);
			}
			else if (num > quiz && num < b) {
				b = num;
				++cnt;
				printf("더 작아야합니다\n기회는%d번 남았습니다\n", 6 - cnt);}
	} while (num != quiz || cnt != 6);
}



//처음 quiz 라는 난수가 생성되고

/*

 질문을 하면서 질문의 값이 거짓이면 cnt++

 참이면 결과값을 도출한다

 스캔에프로 적은 값이 난수의 값보다 크면

 {

 %d보다 큽니다

 기회는 6-cnt번 남았습니다

 }

 출력하고 cnt==6 quiz의 값을 프린트해야한다

 그리고 반복문이 종료된다

 printf("(작은수)%d+1 ~~~~(큰수)%d+1)사이의 수 입력하라고 뜨게 말하기

>> 입력한 수 >quiz >>cnt++>>(큰수)%d의 값을 입력한 수로 변경

>> 입력한 수 <quiz >>cnt++ >>(작은수)%d의 값을 입력한 수로 변경

>> 입력한 수 == quiz >> 정답입니다 .

 cnt를 적립해서 flag를 0or1로 표현하게 하는 함수 +1





 */



 /*만약 입력한 a가 */

