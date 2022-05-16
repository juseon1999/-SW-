#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main(void)
{
	int num;
	printf("성적을 입력하세요");

	scanf("%d", &num);

	printf("성적			학점\n");
	printf("----------------------------\n");
	printf("90점 이상                 A \n");
	printf("80~89점                   B \n");
	printf("70~79점                   C \n");
	printf("60~69점                   D \n");
	printf("60점 미만                 F \n");
	printf("----------------------------\n");
	printf("당신의 성적은\n");
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
		printf("잘못입력하셨습니다\n");
	}
	printf("입니다");
}