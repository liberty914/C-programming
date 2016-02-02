/*
#include <stdio.h> // 변수의 이해

int main(void)
{
	//3+4;
	//return 0; - 명령은 인식하나, 출력해줄 명령어가 없음

	int num; // num이라는 공간에 20을 저장한다. (자료형 int는 정수만을 사용하고, 크기가 4byte) - 변수의 선언
	num = 20;
	printf("%d\n\n", num); // num에 들어있는 값을 %d(10진수정수)의 값으로 출력하세요 - 변수의 초기화

	// int num = 20; - 변수를 선언과 동시에 초기화 하는 법도 있음.

	return 0; // 종료, os에게 반환함.
}
*/



/*
#include<stdio.h> // 변수선언 시 주의사항.
int main(void)
{
	int num1;
	num1 = 10;
	int num2; // 에러발생 - 선언문은 반드시 명령문 전, 앞부분에 위치해야한다.
	num2 = 20;
}
*/



/*
#include<stdio.h> // 예제

int main(void)
{
	int age = 21; // int(정수자료형)에 21을 저장, 4byte // int n1, n2, n3, n4 처럼 같은줄에 쭉 선언가능.
	double weight = 50.0, height = 163.5; // double(실수자료형)에 50.0과 163.5를 저장, 공간의 이름은 weight와 height, 8byte할당

	printf("나의 나이는 %d세 입니다.\n", age);
	printf("나의 몸무게는 %f(kg) 입니다.\n", weight); // 실수의 출력에는 %f가 사용됨
	printf("나의 신장은 %0.2f(cm) 입니다. \n", height); // %0.nf 에서 n의 값만큼 소숫점이 출력됨
}
*/




#include<stdio.h> // 내가 내본 문제, 버퍼문제라고함. 아직 해결못함, scanf에서 넘어간다.
int main(void)
{
	int age;
	double weight, height;
	char name[7], yn; // 7로 하니 '양동호'가 에러없이 입력이된다. 왜그런지는 밝혀내야할듯.

	printf("당신의 이름을 입력하세요! => ");
	scanf("%s", name);
	printf("\n%s님의 나이를 입력하세요! => ", name);
	scanf("%d", &age);
	printf("\n%s님의 키를 입력하세요! => ", name);
	scanf("%lf", &height);
	printf("\n%s님의 몸무게를 입력하세요! => ", name);
	scanf("%lf", &weight);
	printf("\n\n%s님의 나이는 %d세 이며, 키는 %0.1fcm이고, 몸무게는 %0.1fkg입니다. \n\t맞으신가요?\n", name, age, height, weight);
	scanf("%c", &yn);
	printf("\n\n정보가 입력되었습니다. 감사합니다!^^\n\n");

	return 0;
}




/*
#include<stdio.h> // 대입의 개념
int main(void)
{
	int num = 123;
	char ch = 'D'; // char는 문자, 홑따옴표(')로 감싸줘야함, // 문자열은 쌍따옴표(")

	num = num + 1; // C언어에서 = 의 의미는, "오른쪽에 있는 데이터를 왼쪽에 저장하겠다" 라는 뜻, 같다라는 의미가 아니라 '대입한다'는 의미
	ch = 'G'; // 원래 D가 저장되어있었지만, 이번에는 G를 저장하기로 함, 다른문자 저장 가능
	printf("num = %d\n", num);
	printf("ch = %c\n", ch); // char(문자)출력에는 %c를 사용
}
*/



/*
#include<stdio.h>
int main(void)
{
	float height_inch = 70.0;
	float height_cm = height_inch * 2.54; // inch단위를 cm로 변환시키는 작업(*2.54)

	printf("나의 신장은 %0.2f(cm) 입니다. \n", height_cm);
}
*/



/*
#include<stdio.h> // ASCII코드, 문자의 정수출력
int main(void)
{
	char ch = 'A';
	int num = 5, ret; // ret을 char로 옮기고 아래를 %c로 바꿔서도 출력해보자.

	ret = ch + num; // A는 문자이지만 ASCII코드로는 65로 표현이 됨.
	printf("ret = %d\n", ret);
}
*/



/*
#include<stdio.h>
int main(void)
{
	int num1;
	float num2 = 367.78;

	num1 = num2;
	printf("num1 = %d\n", num1); // 실수를 정수형으로 출력하기때문에, 소숫점이 자동으로 삭제됨. (혼동하면 원하지 않은 결과가 도출되어 당황할수 있음)
}
*/



/*
#include<stdio.h> // 강제 형변환 예제
int main(void)
{
	int num1 = 25, num2 = 3;

	printf("num1 / num2 = %d\n", num1/num2);
	printf("num1 / num2 = %f\n", (double)num1/(double)num2); // 원래 정수로 선언한 num값을 double로 강제형변환하여 출력값을 만들어냄.
	printf("num1 * num2 = %d\n", num1*num2);

	return 0;
}
*/



/*
#include<stdio.h> // 자리수 지정, 소수점 자리수 조정
int main(void)
{
	int int1 = 10;
	double double1 = 1234567890.123456789012345;

	printf("%d\n", int1); // 기본대로 출력
	printf("%5d\n", int1); // 공간을 5개를 두고 오른쪽정렬로 출력
	printf("%-5d\n", int1); // 공간을 5개를 두고 왼쪽정렬로 출력

	printf("%f\n", double1); // 기본 소수점 6자리까지
	printf("%20.3f\n", double1); // 공간을 20개, 소숫점 3개를 두고 오른쪽정렬
	printf("%-10.4f\n\n", double1); // 공간을 10개, 소숫점 4개를 두고 왼쪽정렬

	return 0;
}
*/



/*
#include<stdio.h> // scanf사용
int main(void)
{
	int num1, num2, sum;

	printf("정수 2개를 입력하세요~^^\n");
	scanf("%d%d", &num1, &num2); // %d와 %d사이에 스페이스를 넣거나, 엔터를 치면 입력이 됨
	sum = num1 + num2;
	printf("두 수의 합은 %d 입니다.", sum);
}
*/



/*
#include <stdio.h> // 문자열 입력방법, 예제
int main(void)
{
	char name1[30], name2[30]; // 문자열의 최대 자리수를 입력해준다, [30]은 30글자까지 입력할수 있다.

	printf("이름을 입력하세요! ");
	scanf("%s", name1); // %s에서, '&'는 입력해도 되고, 입력하지 않아도 된다.
	printf("\n다른 이름을 입력하세요! ");
	scanf("%s", &name2);
	printf("\n첫번째 이름은 %s, 두번째 이름은 %s 입니다.\n\n", name1, name2);

	return 0;
}
*/



/* 변수의 개념 - 사물에 비유하면 "컵"과 같음

   컴퓨터는 0과 1이기때문에 문자를 입력할수없음, ASCII Code를 이용하여 표현함. */





// 문제1 - 실수를 입력받아 출력하시오.
/*
#include<stdio.h>
int main(void)
{
    double num;
	printf("소숫점을 포함한 실수를 입력하세요~!\n\n");
	scanf("%lf", &num);
	printf("당신이 입력하신 숫자는 %0.3f 입니다.\n\n", num);
	return 0;
}
*/




// 문제 2 - 자신의 이니셜을 입력받아 출력하시오.
/*
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



/*
#include <stdio.h> // 마지막 예제, 데이터 입력받아 출력하기
int main(void)
{
	char name[7];
	int age;
	printf("당신의 이름은 무엇입니까? ");
	scanf("%s", name);
	printf("\n%s님의 나이는 몇살입니까? ", name);
	scanf("%d", &age);
	printf("\n\n%s님의 나이는 %d살 이군요!\n\n", name, age);

	return 0;
}
*/
