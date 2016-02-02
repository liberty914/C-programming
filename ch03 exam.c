
// 문제1 - 실수를 입력받아 출력하시오.

#include<stdio.h>
int main(void)
{
    double num;
	printf("소숫점을 포함한 실수를 입력하세요~!\n\n");
	scanf("%lf", &num);
	printf("당신이 입력하신 숫자는 %f 입니다.\n\n", num);
	return 0;
}




/*
// 문제 2 - 자신의 이니셜을 입력받아 출력하시오.

#include<stdio.h>
int main(void)
{
	char ch1, ch2, ch3;

	printf("당신의 이니셜을 3글자만 입력하세요~!\n\n");
	scanf("%c%c%c", &ch1, &ch2, &ch3);
	printf("당신의 이니셜은 %c%c%c 입니다.\n\n", ch1, ch2, ch3);
	return 0;
}
*/



// 문제 3 - 3과목의 성적을 입력받아, 합계와 평균을 구하시오.
/*
#include<stdio.h>
int main(void)
{
	int eng, mat, kor;
	int sum;
	double ave;

	printf("영어, 수학, 국어의 성적을 차례로 입력하세요~!\n\n");
	printf("영어점수 = ");
	scanf("%d", &eng);
	printf("\n수학점수 = ");
	scanf("%d", &mat);
	printf("\n국어점수 = ");
	scanf("%d", &kor);

	sum = eng + mat + kor;
	ave = sum / 3;

	printf("3과목 성적의 합계는 %d이며, 평균점수는 %0.2f입니다.\n\n", sum, ave);
	return 0;
}
*/

