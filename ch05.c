/*
#include <stdio.h> // 조건문 if의 사용
int main(void)
{
	int num;
	printf("정수를 입력하세요 -> ");
	scanf("%d", &num);

	if(num < 0)
		printf("입력 값은 0보다 작다.\n");
	if(num > 0)
		printf("입력 값은 0보다 크다.\n");
	if(num == 0)
		printf("입력 값은 0이다.\n");
	return 0;
}
*/



/*
#include <stdio.h> // 조건문 if의 사용 & else if와 동일예제
int main(void)
{
	int opt;
	double num1, num2;
	double result;

	printf("1.덧셈  2.뺄셈  3.곱셈  4.나눗셈 \n");
	scanf("%d", &opt);
	printf("두 개의 실수 입력 : ");
	scanf("%lf %lf", &num1, &num2);

	if (opt==1) // 단순 if문을 쓰면 하나하나 다 참/거짓을 검사해보느라 처리연산이 많아짐, 느려짐
		result = num1 + num2;
	else if (opt==2) // 여기서부터는 else if문 사용하면 좋음.
		result = num1 - num2;
	else if (opt==3)
		result = num1 * num2;
	else // else는 그 외 모든상황을 이야기하는 것이므로, 조건문이 필요없음
		result = num1 / num2;

	printf("결과 : %0.2f \n\n", result);
	return 0;
} // 그러나 if, else문도 문제점이 존재함. 조건식이 여러개 있을경우.
*/



/*
#include <stdio.h> // 조건문 [if... else if ... else]
int main(void)
{
	int num1, num2;
	printf("두개의 정수를 입력하세요 -> ");
	scanf("%d %d", &num1, &num2);

	if(num1 > num2)
	{
		printf("num1이 num2보다 큽니다.\n");
		printf("%d > %d \n\n", num1, num2);
	}
	else if(num1 < num2)
	{
		printf("num1이 num2보다 작습니다.\n");
		printf("%d < %d \n\n", num1, num2);
	}
	else
	{
		printf("두 수는 같습니다.\n");
		printf("%d == %d \n\n", num1, num2);
	}
}
*/



/*
#include <stdio.h> // 삼항 연산자 - "조건식이 참이면 첫번째데이터, 조건문이 거짓이면 두번째 데이터를 입력하세요"

int main(void)
{
	int num, abs;
	printf("정수 입력 : ");
	scanf("%d", &num);

	abs = num>0 ? num:num*(-1); // 이부분이 삼항연산자 부분
// "abs가 조건식이 참이면, num을 대입하고 / 거짓이면 num*(-1);을 대입하라"
	printf("절대값 : %d\n", abs); // 무조건 양의정수(절대값)만 출력하도록 되있음
	return 0;
} // 삼항연산자는 프로그래머들이 굉장히 많이 씀.
*/



// ★ if문 문제 1.
/*
#include <stdio.h>
int main(void)
{
	int n1, n2;
	printf("두 수를 입력 --> ");
	scanf("%d %d", &n1,&n2);
	if(n1>n2)
	{printf("%d\n\n", n1-n2);}
	else if(n2>n1)
	{printf("%d\n\n", n2-n1);}
	else
	{printf("두 수는 같네요, 0! \n\n");}
}
*/
//gui프로그래밍?


// 문제 2.
/*
#include <stdio.h>
int main(void)
{
	int eng, mat, kor, sum;
	double ave;
	char A, B, C, D, E, F, res;
	A='A';
	B='B';
	C='C'; // 이렇게 하나씩 초기화를 안하려면 printf를 다 써주든가 해야한다.
	D='D'; // 그러나 printf를 각 if문마다 모두 써주는게 더 불편할듯 싶다.
	E='E';
	F='F';
	printf("영어, 수학, 국어의 성적을 입력하세요 --> ");
	scanf("%d %d %d", &eng, &mat, &kor);
	sum = eng + mat + kor;
	ave = sum / 3;
	if(ave >= 90)
		res = A;
	else if(ave >= 80)
		res = B;
	else if(ave >= 70)
		res = C;
	else if(ave >= 60)
		res = D;
	else
		res = F;

	printf("세 과목의 합계는 %d이며, 평균은 %0.2f이며, %c학점 입니다.\n\n", sum, ave, res);
}
*/



/*
#include <stdio.h> // switch - case조건문 예제 (switch - case - break - default)
int main(void) // ** 메뉴얼이나 차례를 선택할때 자주씀, (easy, normal, hard 등등)
{
	int num;
	printf("1이상 5이하의 정수 입력 : ");
	scanf("%d", &num);

	switch(num)
	{ // if문은 각 단위별 {중괄호}를 입력해주는 반면, switch문은 {중괄호}를 한번 사용한다.
	case 1: // case를 쓸때에는 세미콜론(;)을 사용하지않고, 콜론(:)을 사용한다.
		printf("1은 one \n\n");
		break;
	case 2:
		printf("2는 two \n\n");
		break;
	case 3:
		printf("3은 three \n\n");
		break;
	case 4:
		printf("4은 four \n\n");
		break;
	case 5:
		printf("5는 five \n\n");
		break;
	default: // switch의 예외 (면접때 이런게 나오기도 함)
		printf("I don't know! 1에서 5까지만 입력하라구! 멍청아! \n\n");
	}
}
*/
// if문과 switch문의 차이점은, if문은 여러가지 예측불가의 상황속에서 알고리즘을 설정해주는것이고,
// switch문은 명확한 명령을 효율적으로 수행함

/* if     - 조건식으로 판단 / 범위에 효율적 /
   switch - 상수값으로 판단 / 범위 불가능 / 메뉴 구성할때   */

// while과 for의 차이
// pointer의 사용이유?



/*
#include <stdio.h> // switch case & break문 예제
int main(void)
{
	char ch;
	printf("M : 오전, A : 오후, E : 저녁\n");
	scanf("%c", &ch);

	switch(ch)
	{
	case 'M': // 세미클론(;)이 아닌, 클론(:)사용 주의.
	case 'm':
		printf("Morning \n\n");
		break;
	case 'A': // ★ break문이 '대문자'에는 없기때문에 '소문자'까지 인식이 가능하게함.
	case 'a':
		printf("Afternoon \n\n");
		break;

	case 'E':
	case 'e':
		printf("Evening \n\n");
		break;
	}
}
*/



// ★ ch5 Exam

// 문제 1. switch문을 이용해 사칙연산을 할 수 있는 계산기를 만들어보자.
/*
#include <stdio.h>
int main(void)
{
	int sel, n1, n2;
	printf("이건 계산기야. \n\n1. 더하기 \n\n2. 빼기 \n\n3. 곱하기 \n\n4. 나누기 \n\n 뭐 하고 싶어? --> ");
	scanf("%d", &sel);
	switch(sel)
	{
	case 1:
		printf("\n\n더하기 - 두 수를 입력하세요 --> ");
		scanf("%d %d", &n1, &n2);
		printf("%d + %d = %d\n\n", n1,n2,n1+n2);
		break;
	case 2:
		printf("\n\n빼기 - 두 수를 입력하세요 --> ");
		scanf("%d %d", &n1, &n2);
		printf("%d - %d = %d\n\n", n1,n2,n1-n2);
		break;
	case 3:
		printf("\n\n곱하기 - 두 수를 입력하세요 --> ");
		scanf("%d %d", &n1, &n2);
		printf("%d * %d = %d\n\n", n1,n2,n1*n2);
		break;
	case 4:
		printf("\n\n나누기 - 두 수를 입력하세요 --> ");
		scanf("%d %d", &n1, &n2);
		printf("%d / %d = %0.2f\n\n", n1,n2,(float)n1/(float)n2); // 나눗셈에는 강제형변환 사용
		break;

		return 0;
	}
}
*/



// 문제 2. 사용자에게 숫자 하나를 입력받은 후 ...
/*
#include <stdio.h>
int main(void)
{
	int num, n;
	printf("숫자를 입력해봐! --> ");
	scanf("%d", &num);
	n=num%10+1; // ★ help 막힌부분
	switch(n) // switch로 만들기 10의자리가 1이되는것.
	{
	case 1:
		printf("0 이상 10미만의 수를 입력하셨네요~\n\n");
		break;
	case 2:
		printf("10 이상 20미만의 수를 입력하셨네요~\n\n");
		break;
	case 3:
		printf("20 이상 30미만의 수를 입력하셨네요~\n\n");
		break;
	case 4:
		printf("30 이상 40미만의 수를 입력하셨네요~\n\n");
		break;
	default:
		printf("숫자를 다시 입력하세요!");
	}
	return 0;
}
*/



/*
	if(0 <= num && num < 10)
	{
		printf("%d는 0 이상 10 미만이네? \n\n", num);
	}
	else if (10 <= num && num < 20)
	{
		printf("%d는 10 이상 20 미만이네? \n\n", num);
	}
	else if (20 <= num && num < 30)
	{
		printf("%d는 20 이상 30 미만이군! \n\n", num);
	}
	else if (30 <= num)
	{
		printf("%d는 30이상이군. \n\n", num);
	}
	else
	{
		printf("음수 입력하지마라...확마!\n\n", num);
	}
	return 0;
}
*/


/*
#include <stdio.h> // goto 문
int main(void)
{
	int num;
	printf("자연수 입력 : ");
	scanf("%d", &num);

	if (num==1)
		goto one;
	else if (num==2)
		goto two;
	else
		goto other;

one:
	printf("1을 입력하셨습니다.\n\n");
	goto end;
two:
	printf("2를 입력하셨습니다. \n\n");
	goto end;
other:
	printf("3 혹은 다른 값을 입력하셨군요.\n\n");
end:
	return 0;
}
*/

// Q. (help) goto문과, switch-case문의 차이는 뭘까?



