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

		{	printf("%d - %d ������ ������ �Է��ϼ���\n", a + 1, b - 1);
			scanf("%d", &num); }
			while (getchar() != '\n');

			if (num == quiz) {
				printf("�����Դϴ� ����%d�Դϴ�\n", quiz);
				return cnt == 6;
			}
			else if (cnt == 5) {
				printf("�˼��մϴ� ��ȸ�� �� �����߽��ϴ�\n������ %d�Դϴ�", quiz);
				break;
			}
			else if (num <= a || num >= b) {
				printf("���� �� ���ڸ� �Է����ּ���\n");
			}
			else if (num < quiz && num>a) {
				a = num;
				++cnt;
				printf("�� Ŀ���մϴ� ��ȸ�� %d�� ���ҽ��ϴ�\n", 6 - cnt);
			}
			else if (num > quiz && num < b) {
				b = num;
				++cnt;
				printf("�� �۾ƾ��մϴ�\n��ȸ��%d�� ���ҽ��ϴ�\n", 6 - cnt);}
	} while (num != quiz || cnt != 6);
}



//ó�� quiz ��� ������ �����ǰ�

/*

 ������ �ϸ鼭 ������ ���� �����̸� cnt++

 ���̸� ������� �����Ѵ�

 ��ĵ������ ���� ���� ������ ������ ũ��

 {

 %d���� Ů�ϴ�

 ��ȸ�� 6-cnt�� ���ҽ��ϴ�

 }

 ����ϰ� cnt==6 quiz�� ���� ����Ʈ�ؾ��Ѵ�

 �׸��� �ݺ����� ����ȴ�

 printf("(������)%d+1 ~~~~(ū��)%d+1)������ �� �Է��϶�� �߰� ���ϱ�

>> �Է��� �� >quiz >>cnt++>>(ū��)%d�� ���� �Է��� ���� ����

>> �Է��� �� <quiz >>cnt++ >>(������)%d�� ���� �Է��� ���� ����

>> �Է��� �� == quiz >> �����Դϴ� .

 cnt�� �����ؼ� flag�� 0or1�� ǥ���ϰ� �ϴ� �Լ� +1





 */



 /*���� �Է��� a�� */

