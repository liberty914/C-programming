
/*
메모리영역
Code(코드)
Date(전역변수, static변수 - 프로그램이 실행될때 할당 / 프로그램 종료될때 소멸)
Heap(동적할당)
Stack(★지역변수, 매개변수 - 함수가 실행될때 할당 / 함수가 끝날때)
용도가 다르고, 나눠서 관리하면 편해서, 

함수가 다르면, 변수가 같아도 다른변수이다. (동명이인, 지역변수)
*/



/*
#include <stdio.h> // 지역변수 예제 1

int One(void)
{
	int num = 10;
	num++;
	printf("One : %d \n", num);
	return 0;
}

int Two(void)
{
	int num1 = 20;
	int num2 = 30;
	num1++, num2--;
	printf("num1 & num2 : %d %d \n", num1, num2);
	return 0;
}

int main(void) // 프로그램이 시작되면 가장먼저 main함수를 찾음.
{
	int num = 17;
	One();
	Two();
	printf("main num : %d \n", num);
	return 0;
}
*/


/*	함수가 호출될때 지역변수도 메모리할당됨,
	반환될때 지역변수는 소멸됨
	같은 main함수 내에서도 중괄호 내에 있는 모든 변수는 지역변수

	Stack영역 (last input first out, LIFO, 접시알바) - 자료구조 시간에 자세히 배움
	
	USB를 뽑은 시간을 알려면 os내의 로그분석을 해야함.
	
	C언어, 웹, C++, Java는 기본

	reversing - 잘 만들어진 프로그램을 역으로 분해, 분석하는것

	뭐든지 기본적으로 언어가 되있어야함. */


/*
#include <stdio.h> // 지역변수 예제 2
int main(void)
{
	int a;
	for (a=0; a<3; a++)
	{
		int num = 0;
		num++;
		printf("%d번째, 지역변수 num : %d\n", a+1, num);
	} // for문 내의 지역변수이기 때문에 중괄호를 빠져나가면 소멸됨.
	// 중괄호 탈출후 재진입시, 할당하고 소멸되고 할당하고 소멸되고...
	// 계속 num의값이 1

	if (a==3)
	{
		int num=7;
		num++;
		printf("if문 지역변수 num : %d\n", num);
	}
}
*/


/*
#include <stdio.h> // 지역변수 예제 3
int main(void)
{
	int num=1;
	if (num==1)
	{
		int num=7;
		num += 10;
		printf("if문 내 지역변수 num : %d \n", num);
	}
	printf("main함수 내 지역변수 num : %d \n", num);
	return 0;
} // 지역변수는 외부에 선언된 동일한 이름의 변수를 가린다.
*/



// 전역변수 - 프로그램 전 역에서 접근, 사용할수 있는 변수. (Data영역)


/*
#include <stdio.h> // 전역변수 예제 1
void Add(int val);
int num; // 전역변수 선언, 기본 0으로 초기화됨
		// (지역변수는 초기화 안해주면 쓰레기값이 됨)

int main(void)
{
	printf("num : %d \n", num);
	Add(3); // Add함수 호출/
	printf("num : %d \n", num);
	num++;
	printf("num : %d \n", num);
	return 0;
}

void Add(int val) // 매개변수에 3이 저장이 됨
{
	num += val; // 
}
// 프로그램이 종료될 때 전역변수도 소멸됨.
*/


/*
#include <stdio.h> // 전역변수 예제 2

int Add(int val);
int num = 1;

int main(void)
{
	int num = 5;
	printf("num : %d \n", Add(3));
	printf("num : %d \n", num+9);
	return 0;
}

int Add(int val)
{
	int num = 9;
	num += val;
	return num;
}
*/


/*
// 전역변수와 지역변수의 우선순위 비교
#include <stdio.h>

int num = 1; // 우선순위 3순위

int main(void)
{
	int num = 22; // 우선순위 2순위
	if (num == 22)
	{
		int num = 77; // 우선순위 1순위
		printf("if안의 num = %d \n", num);
	}
	printf("main안의 num = %d \n", num);
	return 0;
}
*/



/* 스테틱변수 - 선언된 지역안에서만 (지역변수) - Data영역에 할당됨
				프로그램이 실행될때 , 끝날때 소멸 (전역변수) 의 특징을 다 가지고있음 */

/*
#include <stdio.h>
void SimpleFunc(void)
{
	static int num1=0; // 프로그래머들이 굉장히 많이 사용함, 이점이 있음
	int num2=0; // 지역변수인 num2는 중괄호가 끝나면 소멸됨
	num1++, num2++;
	printf("static : %d, local : %d \n", num1, num2);
}

int main(void)
{
	int i;
	for(i=0; i<3; i++)
		SimpleFunc();
	return 0;
}
*/

/*				용량	CPU속도
	register	1		4
	캐시		2		3
	Ram			3		2
	Hard Disk	4		1

사용자가 레지스터에 변수를 저장한다고 해도, 컴파일러가 알아서 판단함.
*/

/*
#include <stdio.h> // 전역변수 -> static변수 문제
//int total = 0;

int AddToTotal(int n)
{
	static int total=0;
	total += n;
	return total;
}

int main(void)
{
	int num, i;
	for(i=0; i<3; i++)
	{
		printf("입력 %d : ", i+1);
		scanf("%d", &num);
		printf("누적 : %d \n", AddToTotal(num));
		
	}
	return 0;
}
*/



// 재귀함수, 주로 "하노이 탑" 같은것들을 작성함.
/*
#include <stdio.h>

void Recursive(int num)
{
	if (num<=0) // 재귀의 탈출조건
		return; // 재귀의 탈출
	
	printf("재귀함수 호출 %d \n", num);
	Recursive(num-1);
}

int main(void)
{
	Recursive(5);
	return 0;
}
*/



#include <stdio.h> // 재귀함수 팩토리얼

int Factorial(int n)
{
	if (n==0)
		return 1;
	else
		return n * Factorial(n-1);
}

int main(void)
{
	int num;
	printf("팩토리얼 수를 입력하세요 -> ");
	scanf("%d", &num);
	Factorial(num);
	printf("%d! = %d \n", num, Factorial(num));
	return 0;
}

