#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(void)
/*
2. �л� 5���� ������ �Է¹޾� ������ ���� ����ϴ� �ڵ� �ۼ�
1's ���� : 98
2's ���� : 1000
3's ���� : -34
4's ���� : 80
5's ���� : 75

5�� �Է� ��[2]�� �����߻�!!!
���� : 253��
��� : 50.60��(�Ҽ��� ��°�ڸ�)*/
{
	int error = 0;
	int total = 0;
	int cnt = 0;
	int test[6] = { 0 };
	for (int i = 1; i <= 5; i++) {
		printf("%d's �� ���� �Է�:", i);
		scanf("%d", &test[i]);
		if (test[i] >= 0 && test[i] <= 100) {
			total += test[i];
			cnt++;
		}
	}
	error = 5 - cnt;
		printf("5�� �Է� �� [%d]�� �����߻�\n", error);
		printf("����:%d\n",total);
		printf("���: %d", total / 5);
}