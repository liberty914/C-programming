/*
#include<stdio.h> // 산술연산자의 사용(계산기)
int main(void)
{
	float num1, num2;

	printf("계산하고자 하는 두개의 수를 입력하세요. -> ");
	scanf("%f %f", &num1, &num2);
	
	printf("\n\n%f + %f = %f", num1, num2, num1 + num2);
	printf("\n%f - %f = %f", num1, num2, num1 - num2);
	printf("\n%f * %f = %f", num1, num2, num1 * num2);
	printf("\n%f / %f = %f", num1, num2, num1 / num2); // 만약 int로 수를 받았을때, 나눗셈은 실수가 나올수 있다. 정수를 실수로 강제형변환 사용, 출력하고자 하는 숫자를 %f로 표현하고, 계산할 두 수에 (float)을 입력함.
	printf("\n%f %% %f = %d\n\n", num1, num2, (int)num1 % (int)num2); // 나머지는 실수가 될수없다, 그러므로 정수형(int)로 강제형변환을 사용함.
	// %가 2개가 들어가는 이유 - %를 하나만 넣으면 컴파일러가 "뭘 넣을껀데?" 하며 기다리고있음

	return 0;
}
*/



/* 관계연산자
if(a>10) { ... }
"a가 10보다 크다면, 괄호안을 수행하시오" */

/*
#include<stdio.h>
int main(void)
{
	float su1 = 3.01, su2 = 3.0;
	printf("변수 su1과 su2의 크기 비교 결과 : %d\n", su1 <= su2);
	printf("변수 su1과 su2의 크기 비교 결과 : %d\n", su1 >= su2);
	printf("변수 su1과 su2의 크기 비교 결과 : %d\n", su1 == su2);
	printf("변수 su1과 su2의 크기 비교 결과 : %d\n", su1 != su2);

	return 0; // 이 명령문의 결과는, 참일경우 1, 거짓일경우 0을 표현하여 알려준다.
} // 0이 아닌 모든값은 참이다, 다만 1이 대표적인 값일 뿐이다.
*/



/* 복합 대입 연산자 a=a+b ---> a+=b
코드의 연산속도를 빠르게하기 위해, 연산단계를 하나 줄여준다. */

/*
#include<stdio.h>
int main(void)
{
	int su1, su2;
	su1 = su2 = 5;

	printf("su1 + 1 = %d\n", su1 += 1); // su1에다가 1을 더한 값을 su1에다가 저장(대입)
	printf("su1 - 1 = %d\n", su1 -= 1);
	printf("su1 * su2 = %d\n", su1 *= su2);
	printf("su1 / su2 = %d\n", su1 /= su2);
	printf("su1 %% su2 = %d\n", su1 %= su2);

	return 0;
}
*/



/* 논리연산자, 참과 거짓을 판별하는 연산
"or" (||, Shift + \) 는 또는이라는 뜻, +의 의미, 둘중에 하나라도 참이면 참
"and" (&&) 연산은 둘다 참일때만 참을 출력
"not" (!) 은 서로 반대로(1은 0으로, 0은 1로)
"xor" (^, Exclusive or)서로값이 같을때는 거짓(0), 서로값이 다를때는 참(1) */

/*
#include <stdio.h> // 예제
int main(void)
{
	int num1=10;
	int num2=20;
	int result1, result2, result3;

	result1=(num1==10 && num2==12);
	result2=(num1<10 || num2>12);
	result3=(!num1);

	printf("result1 : %d \n", result1);
	printf("result2 : %d \n", result2);
	printf("result3 : %d \n", result3);

	return 0;
}
*/



/* 증감연산자, 값이 1증가 또는 1감소하는기능
   for, 반복문 들어가면 굉장히 많이 씀, 반드시 외울것!
   ++, --의 위치에 따라 처리하는 순서가 달라짐
   전위연산자, 후위연산자 */

/*
#include <stdio.h> // 예제
int main(void)
{
	int num1 = 12;
	int num2 = 12;

	printf("num1 : %d \n", num1);
	printf("num1++ : %d \n", num1++); // 후위증가
	printf("num1 : %d \n\n", num1);

	printf("num2 : %d \n", num2);
	printf("++num2 : %d \n", ++num2); // 전위증가
	printf("num2 : %d \n\n", num2);

	return 0;
}
*/



/*
#include<stdio.h>
int main(void)
{
	int num1 = 10;
	int num2 = (num1--) + 2; // 괄호가 쳐져있어도 먼저계산하는건 아님, 낚였음

	printf("num1 : %d\n", num1); // int에서 미리 연산을 끝냈기때문에 9가 출력됨
	printf("num2 : %d\n", num2); // 마찬가지로 num2는 후위연산자는 계산하지 않았기 때문에 12가 출력됨

	return 0;
}
*/



/*
#include <stdio.h> // 복잡하고 어려운 예제
int main(void)
{
	int a=5, b=6, c=10, d;
	d = ++a * b--;
	printf("a = %d, b = %d, d = %d\n\n", a, b, d); // 예상 - 6, 5, 36 (정답)
	
	d = a++ + ++c - b--;
	printf("a = %d, b = %d, c = %d, d = %d\n\n", a, b, c, d); // 예상 - 7, 4, 11, 12 (정답)

	a=1;
	b=0;
	d = a++ || ++b * d-- / ++c;
	printf("a = %d, b = %d, c = %d, d = %d\n\n", a,b,c,d); // 예상 - 2, 1, 12, 1 (2, 0, 11, 1)

	d = b++ && ++a / ++c * d++;
	printf("a = %d, b = %d, c = %d, d = %d\n\n", a,b,c,d); // 예상 - 3, 2, 13, 1 (2, 1, 11, 0)

	return 0;
}
*/



/* 비트연산자, 
   "~" 틸드(Tilde)라고 읽음, 물결아님 ㅋㅋ
   "<<, >>" 시프트연산자 0011을 1100으로 옮기거나, 1100을 0011로 옮김, 뒤에 채워지는건 0으로 채워짐 */

/*
#include <stdio.h> // 비트연산자로 계산하기
int main(void)
{
	int num1 = 12;
	int num2 = 7;
	int result = num1 | num2;

	printf("su1과 su2의 논리합 : %d\n", result);
	//          1100
	// 비트연산 0111
	//     or = 1111 = 15 ,  and = 0100 = 4 ,  xor = 1011 = 11
	return 0;
}
*/



/*
#include <stdio.h> // 비트 부정연산자
int main(void)
{
	int su1 = 10;
	su1 = ~su1;
	printf("su1의 비트부정 : %d\n", su1);
	// 15를 부정하면 -15가 되지않는다. 0과 1이 서로 바뀌게됨.
	return 0;
}   // Q. 1111에서 왜 0000이 되지 않는것일까?
*/



/*
#include <stdio.h> // 비트 이동연산자
int main(void)
{
	int op = 30, result;
	result = op << 3; // 1비트 좌측으로 이동시킬때마다 2배씩 늘어남. 30 - 60 - 120 - 240, 우측으로 이동하면 1/2씩 감소함.
	printf("30을 좌측으로 3비트 이동시킨 결과 = %d\n", result);
	// 0001 1110 ---> 1111 0000 으로 이동
	return 0;
}
*/

/*
#include <stdio.h> // sizeof연산자 : 크기를 바이트 단위로 표기
int main(void)
{
	int a=0, b=0, c=0;
	printf("정수의 크기는 %d입니다. \n", sizeof(int));
	return 0;
}	// int(정수형)의 4byte를 나타내는것
*/

/*
#include <stdio.h>
main()
{
	int su1 = 123;
	char ch = 'a';
	float su2 = 12.345;

	printf("변수 su1의 크기 : %d byte\n", sizeof(su1)); // 4예상
	printf("문자형 자료형의 크기 : %d byte\n", sizeof(char)); // 1예상 
	printf("수식(su1+su2)의 크기 : %d byte\n", sizeof(su1+su2)); // 8예상 (정답4) - 4바이트짜리에 4바이트를 더하니, 형태가 같기때문에 4바이트가 나옴.
	printf("실수 1.23456의 크기 : %d byte\n", sizeof(1.23456)); // 8예상 - 자동으로 double로 인식
	printf("문자형 상수 'a'의 크기 : %d byte\n", sizeof('a')); // 1예상 (정답4) - 소문자a는 == 97 -> 정수형으로 4가 출력됨.
	return 0;
}
*/





// ★ ch4, Exam ★

// 1. 수를 입력 받아, 홀/짝수를 구분하여 출력하시오.
/*
#include <stdio.h>
int main(void)
{
	int num;
	printf("수를 입력하세요. --> ");
	scanf("%d", &num);
	if (num%2==0) // if문에는 ;(세미클론)이 절대 와서는 안된다.
	 //(a > 10 > 20) --> (&&연산자 이용)
		printf("%d는 짝수입니다.\n\n", num);
	if (num%2!=0)
		printf("%d는 홀수입니다.\n\n", num);
}
*/


// 2. 수를 입력 받아, 3의 배수이면 출력하시오.
/*
#include <stdio.h>
int main(void)
{
	int num;
	printf("3의 배수라고 생각되는 수를 입력하세요 --> ");
	scanf("%d", &num);
	if (num % 3 == 0)
	{
		printf("입력하신 수는 3의 배수가 맞습니다.\n\n");
	}
	if (num % 3 != 0)
	{
		printf("입력하신 수는 3의 배수가 아닙니다.\n\n");
	}
}
*/


// 3. 두 수를 입력받아 큰 수를 출력하시오.
/*
#include <stdio.h>
int main(void)
{
	int n1, n2;
	printf("비교할 두 수를 입력하세요 --> ");
	scanf("%d %d", &n1, &n2);
	if(n1>n2)
	{printf("%d가 더 크네요\n\n", n1);}
	if(n1<n2)
	{printf("%d가 더 크네요\n\n", n2);}
	if(n1==n2)
	{printf("%d와 %d는 같은 수 입니다.\n\n", n1, n2);}
}
*/


// 4. 세 수를 입력받아 큰 수를 출력하시오.
/*
#include <stdio.h>
int main(void)
{
	int n1, n2, n3;
	printf("비교할 세 수를 입력하세요 --> ");
	scanf("%d %d %d", &n1,&n2,&n3);
	if(n1 > n2 && n1 > n3)
	{printf("%d가 가장 큽니다\n\n", n1);}
	if(n2 > n1 && n2 > n3)
	{printf("%d가 가장 큽니다\n\n", n2);}
	if(n3 > n1 && n3 > n2)
	{printf("%d가 가장 큽니다\n\n", n3);}
} // 같을 땐 구멍이 있음.
*/



// 5. 두 수를 입력받아 큰 수가 짝수이면 출력하시오.
/*
#include <stdio.h>
int main(void)
{
	int n1, n2;
	printf("두 수를 입력하세요 --> ");
	scanf("%d %d", &n1, &n2);
	if(n1>n2 && n1 % 2 == 0)
	{
		printf("큰 수는 %d이며, 짝수네요!\n\n", n1);
	}
	else if(n2>n1 && n2 % 2 == 0)
	{
		printf("큰 수는 %d이며, 짝수네요!\n\n", n2);
	}
	else
	{
		printf("큰 수가 홀수인가봐요?\n\n");
	}
}
*/



// 6. 두 수를 입력받아 합이 짝수이고, 3의 배수인 수를 출력하시오.

#include <stdio.h>
int main(void)
{
	int n1, n2, result;
	printf("두 수를 입력하세요 --> ");
	scanf("%d %d", &n1,&n2);
	result = n1+n2;

	if(result%2 ==0 && result%3 ==0)
	{
		printf("두 수의 합은 짝수이며, 3의 배수입니다\n\n");
	}
	else
	{
		printf("다른 수를 입력하세요.\n\n");
	}
}
