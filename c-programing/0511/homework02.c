/*
2. 3���� ������ �Է¹޾� ���հ� ����� ���ϴ� �ڵ� �ۼ�
   ���� 3���� �Է� : 54 2 38
	���� : 94
	��� : 31.33  (�Ҽ��� ��°¥�� ���)
*/
#include <stdio.h>
void main(void)
{
	int a, b, c;
	
	printf("���� ������ �Է�:");
	scanf("%d\n%d\n%d", &a, &b, &c);
	printf("����:%d\n", a+b+c);
	printf("���:%.2f", (double)(a+b+c) / 3);
}