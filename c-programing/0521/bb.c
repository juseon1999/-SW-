#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int nansu(int* quiz);
int my_scan(int* const p_answer);
void result(int* quiz, int* answer);

void main(void)
{
	int quiz[3] = { 0 };
	int answer[3] = { 0 };
	nansu(quiz);
	//my_scan(answer);
	printf("%d %d %d\n", answer[0], answer[1], answer[2]);
	printf("%d %d %d\n", quiz[0], quiz[1], quiz[2]);
	result(quiz, answer);
	
	//printf("%d\n", quiz[0]);
	//printf("%d\n", quiz[1]);
	//printf("%d\n", quiz[2]);
}
int nansu(int *quiz)
{
	//printf("!");
	
	srand((unsigned int)time(NULL));
	
	for (int i = 0; i < 3; i++)
	{
		quiz[i] = rand() % 10;  //quiz 배열의 i번째에 랜덤값 저장
		for (int j = 0; j <3; j++) 
		{
		if (quiz[i] == quiz[j] && (i != j)) //quiz i번째와 j번째를 비교하는데 i와j의 값도 달라야함
				i--;                            // quiz[1]==quiz[1] 같은 상황을 피하기 위함											//만약 다른순번의 배열에 같은값이 나온다면 순번을 -1하고 값 다시저장
		}
	}			
}

//case1 ::변수선언//
/*
quiz에 변수를 입력한다 포문을 이용해 세번 반복한다
>>문제<<
각각 다른 수를 입력받아야하는데 같은수가 입력되지 않게 하려면 어떻게 해야할까
한자리를 입력후 앞서 입력한 값이랑 중복되면 다시 반복시키게 해야한다. 어떻게?
입력한 값을 따로 저장시키고 그 값이 앞서 입력된 배열 quiz랑 같다면 다시 반복하게 해야한다
quiz [0] 부터 [1] [2] 까지 저장한다
a라는 변수를 만들어 a를 랜덤으로 만들어진 함수랑 비교를 해본다 만약 같은게 발견안된다면 집어넣는다
*/
//case 2 ::값 입력// 
//scanf함수와 반복문을 이용해 값 입력하기//
//문제:: 입력을 받으면서 0~9의 값을 벗어나면 다시 입력받게 해야한다
int my_scan(int *const p_answer)
{
	for (int i = 0; i < 3; i++)
	{	
		//getchar(&p_answer[i]);
		//while (getchar() != '\n');
		// int * const (배열명) 쓰면 본 함수 배열의 값을 고칠수 있다// 
		
		printf("1-9의 정수를 입력하세요\n");
		scanf("%d",&p_answer[i]);
		if (p_answer[i] > 9 || p_answer[i] < 0)
		{
		printf("다시 입력하세요\n"); i--; 
		}
	}                           

	//const int * (배열명) 쓰면 배열의 값을 고칠 수 없다								  
	//printf("%d %d %d", p_answer[0], p_answer[1], p_answer[2]);

}

void result(int* quiz, int* answer) // 값의 비교니까 quiz와 answer을 가져온다 
{
	int strike = 0;
	int ball = 0;
	int cnt = 6;
	while (1) 
	{
		my_scan(answer);

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{

				if (quiz[i] == answer[j]) {
					if (i != j)
						ball++;
					else
						strike++;
				}
			}
		}
		if (strike == 3)
		{
			printf("정답");
			break;
		}
		else if (cnt == 0) 
		{
			printf("실패");
			break;
		}
		else
		{
			
			printf("입력한 값:");
			for (int i = 0; i < 3; i++) 
				{
				printf("%d", answer[i]);
				}
			cnt--;
			printf("\nstrike: %d || ball: %d\n", strike, ball);
			printf("기회 : %d\n", cnt);
			ball = 0; strike = 0;
		}
	}
}
//case 3 :: 생성된 값과 입력된 값을 비교하기//
/*
    order 값 과 answer 값을 두개 가져와서 비교하기
	step 1 :: 2중 for문 사용 int i, int j  ///끝
	step 2 :: i는 quiz  j는 answer quiz[i] == answer[j] 이면 strike++; //끝
	step 3 :: result 2의 조건을 가지면서 i != j 면 ball++; //
	step 4 :: 입력한 수 세가지 로 strike 2 ball 0 ++, 정답이 아니면 카운트 1까고 다시 입력함수로 
	step 5 :: 정답이라면 정답 문구 출력 기회 소진시 실패 문구와 함께 정답 출력 
	step 6 :: strike :횟수 ball:횟수 출력 후 기회값이 남아있다면 다시 입력문구로 돌아가기 

*/