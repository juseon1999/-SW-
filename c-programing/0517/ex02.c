//Ű����� ����ġ�������� �Է¹��� ���� �Ѳ����� �����ϴ°� �Է¹���
// ��ĵ������ �Է¹��� ��,���ڸ� ���ۿ� �����ϰ� ��ĵ���� ��ɾ ���� �ϳ��� �Һ���
/*
	fflush(stdiu);>>�����߿�>>>������ ��ĵ���� ������ ���
	>>>>crt_secure_no_warnings �� ���� ����
	while(getchar( ) != ('\n');   
	>>> ���� ���͸� ġ�� ���۸� ����ٰž�

	printf("�Է�");
	scanf("%d,&a);
	fflush(stdiu)<<������ȵ�>>
	or
	while(getchar( ) != ('\n');<<�̰� ���
	printf("�Է�");
	scanf("%d,&'ch');
	scanf�� ���� ��(����)�� �Է��� ������ �����ϰ� ����� ������ �ϳ��� ó����
	������ �Է¹޴µ� .���� ���ڰ� �ƴ� ��ȣ�� ����ϸ� �������� �Է��� ������ �����ϰ� ����� ������
	[12][\n][][][][]
	scanf~~ 
	*/
	/*void main()<<<ȣ����
	{ prn_star();<<��ȣ���� �Լ�
	}<<���� �Լ�(ȣ����)�� ���� ������� �Լ�(��ȣ����)
	int main (void) void �� ȣ���ڰ� ��ȣ���ڿ��� ����� ������ ���ؾ��� �Լ� //������ �ִ� ���
	int(��ȯ��or������)�� ��ȣ���ڰ� ȣ���ڿ��� ����� ���������� �Լ� //���ο��� �ִ� ��
	(��ȯ�� or ������) �Լ��̸� (�Ű����� or �Ķ����) {�������}
	(�Ű�����
	ȣ��Ǵ� �Լ��� ���ι� ���� �־���Ѵ� �׷��� #include<stdio.h> �Ʒ� �־���Ѵ�
	
	
	*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int quest(void)
{
	int num;
	printf("������ �Է��ϼ���");
	scanf("%d", &num);
	while (getchar() != '\n');
	return num;
}
int ret(int num1, int num2)
{
	int max;
	if (num1 > num2)
	{max = num1;}
	else 
	{max = num2; }
	return max;
}

int main (void) {
	int num1 = quest();
	int num2 = quest();
	int max = ret(num1,num2);

	printf("%d �� %d �� ū ����: %d", num1, num2, max);
}
