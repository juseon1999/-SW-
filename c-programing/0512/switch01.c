#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main(void)
{
	int num;
	printf("������ �Է��ϼ���");

	scanf("%d", &num);

	printf("����			����\n");
	printf("----------------------------\n");
	printf("90�� �̻�                 A \n");
	printf("80~89��                   B \n");
	printf("70~79��                   C \n");
	printf("60~69��                   D \n");
	printf("60�� �̸�                 F \n");
	printf("----------------------------\n");
	printf("����� ������\n");
	//char grade;
	//case 6: grade ='b'; break;
	switch (num/10)
	{
	case 10 :
		/*switch (score) {
		case 100:
		}*/
	case 9 :
		printf("A ");
		break;
	case 8:
		printf("B ");
		break;
	case 7:
		printf("C ");
		break;
	case 6:
		printf("D ");
		break;
	default:
		printf("�߸��Է��ϼ̽��ϴ�\n");
	}
	printf("�Դϴ�");
}