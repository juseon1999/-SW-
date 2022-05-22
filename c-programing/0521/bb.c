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
		quiz[i] = rand() % 10;  //quiz �迭�� i��°�� ������ ����
		for (int j = 0; j <3; j++) 
		{
		if (quiz[i] == quiz[j] && (i != j)) //quiz i��°�� j��°�� ���ϴµ� i��j�� ���� �޶����
				i--;                            // quiz[1]==quiz[1] ���� ��Ȳ�� ���ϱ� ����											//���� �ٸ������� �迭�� �������� ���´ٸ� ������ -1�ϰ� �� �ٽ�����
		}
	}			
}

//case1 ::��������//
/*
quiz�� ������ �Է��Ѵ� ������ �̿��� ���� �ݺ��Ѵ�
>>����<<
���� �ٸ� ���� �Է¹޾ƾ��ϴµ� �������� �Էµ��� �ʰ� �Ϸ��� ��� �ؾ��ұ�
���ڸ��� �Է��� �ռ� �Է��� ���̶� �ߺ��Ǹ� �ٽ� �ݺ���Ű�� �ؾ��Ѵ�. ���?
�Է��� ���� ���� �����Ű�� �� ���� �ռ� �Էµ� �迭 quiz�� ���ٸ� �ٽ� �ݺ��ϰ� �ؾ��Ѵ�
quiz [0] ���� [1] [2] ���� �����Ѵ�
a��� ������ ����� a�� �������� ������� �Լ��� �񱳸� �غ��� ���� ������ �߰߾ȵȴٸ� ����ִ´�
*/
//case 2 ::�� �Է�// 
//scanf�Լ��� �ݺ����� �̿��� �� �Է��ϱ�//
//����:: �Է��� �����鼭 0~9�� ���� ����� �ٽ� �Է¹ް� �ؾ��Ѵ�
int my_scan(int *const p_answer)
{
	for (int i = 0; i < 3; i++)
	{	
		//getchar(&p_answer[i]);
		//while (getchar() != '\n');
		// int * const (�迭��) ���� �� �Լ� �迭�� ���� ��ĥ�� �ִ�// 
		
		printf("1-9�� ������ �Է��ϼ���\n");
		scanf("%d",&p_answer[i]);
		if (p_answer[i] > 9 || p_answer[i] < 0)
		{
		printf("�ٽ� �Է��ϼ���\n"); i--; 
		}
	}                           

	//const int * (�迭��) ���� �迭�� ���� ��ĥ �� ����								  
	//printf("%d %d %d", p_answer[0], p_answer[1], p_answer[2]);

}

void result(int* quiz, int* answer) // ���� �񱳴ϱ� quiz�� answer�� �����´� 
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
			printf("����");
			break;
		}
		else if (cnt == 0) 
		{
			printf("����");
			break;
		}
		else
		{
			
			printf("�Է��� ��:");
			for (int i = 0; i < 3; i++) 
				{
				printf("%d", answer[i]);
				}
			cnt--;
			printf("\nstrike: %d || ball: %d\n", strike, ball);
			printf("��ȸ : %d\n", cnt);
			ball = 0; strike = 0;
		}
	}
}
//case 3 :: ������ ���� �Էµ� ���� ���ϱ�//
/*
    order �� �� answer ���� �ΰ� �����ͼ� ���ϱ�
	step 1 :: 2�� for�� ��� int i, int j  ///��
	step 2 :: i�� quiz  j�� answer quiz[i] == answer[j] �̸� strike++; //��
	step 3 :: result 2�� ������ �����鼭 i != j �� ball++; //
	step 4 :: �Է��� �� ������ �� strike 2 ball 0 ++, ������ �ƴϸ� ī��Ʈ 1��� �ٽ� �Է��Լ��� 
	step 5 :: �����̶�� ���� ���� ��� ��ȸ ������ ���� ������ �Բ� ���� ��� 
	step 6 :: strike :Ƚ�� ball:Ƚ�� ��� �� ��ȸ���� �����ִٸ� �ٽ� �Է¹����� ���ư��� 

*/