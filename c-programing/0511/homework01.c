/*1. �ΰ��� ������ �Է¹޾� ��Ģ���� ����� ���
   ù��° ���� : 12
   �ι�° ���� : 9

	12 + 9 = 21
	12 - 9 = 3
	12 * 9 = 108
	12 / 9 = 1
	12 % 9 = 3
	*/

#include<stdio.h>
void main(void)
{
	
	int a, b;

	printf("ù��° ������ �Է��ϼ���:\n");
	scanf("%d", &a);
	printf("�ι��� ������ �Է��ϼ���:\n");
	scanf("%d", &b);
	printf("%d + %d = %d\n", a, b, a+b);
	printf("%d - %d = %d\n", a, b, a-b);
	printf("%d * %d = %d\n", a, b, a*b);
	printf("%d / %d = %d\n", a, b, a/b);
	printf("%d %% %d = %d\n", a, b, a % b);
	printf("%d %% %d = %d\n", a, b, a % b);

}