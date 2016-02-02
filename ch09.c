/* C언어에서 함수는 아주 중요함.
   함수를 모른다는건 C언어를 모른다는 것. 
   
   함수는 절차지향을 객체지향으로 만들어주는듯. (내생각)

   문제는 반드시 발생하는데, (또는 업데이트 or 수정)
   함수를 사용하면, 함수의 그 부분만 수정해주면 된다.
   실제로 모든 코딩은 함수로 하게됨.

   메인함수에다가 모든걸 입력하면 하나부터 열까지 다 뜯어내봐야한다.
   
   사용자정의함수 , 표준함수 , 메인함수 */


/*
#include <stdio.h>
int Add(int num1, int num2) // 반환형태(return 0가 정수를 반환하기때문에 int), 함수이름(입력형태)
{
	return num1+num2; // 3. 6. 
}

double Div(double num3, double num4)
{
	return num3/num4;
}

int main(void) // 1. 프로그램이 시작되면 가장먼저 main함수를 시작함.
{
	int result;
	double res;
	result = Add(3, 4); // 2. 여기서 실행흐름이 Add함수로 들어감, 3과 4라는 인자를 저장함.
	printf("덧셈결과1 : %d \n", result); // 4. Add함수에서 반환됨
	result = Add(5, 8); // 5. 함수를 한번 정의해놓으면 몇번이고 가져다 쓸수있다.
	printf("덧셈결과2 : %d \n", result); // 7.
	res = Div(3, 2);
	printf("나눗셈결과1 : %0.2f\n", res);
	res = Div(10, 3);
	printf("나눗셈결과2 : %0.2f\n", res);
	return 0;
}
*/



/*
#include <stdio.h>
int Add(int num1, int num2) // 인자전달 0 , 반환 0
{
	return num1+num2;
}

void ShowAddResult(int num) // 인자전달 0 , 반환 x
{
	printf("덧셈결과 출력 : %d \n", num);
}

int ReadNum(void) // 인자전달 x , 반환 0
{
	int num;
	scanf("%d", &num);
	return num;
}

void HowToUseThisProg(void) // 인자전달 x , 반환 x
{
	printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
	printf("자! 그럼 두 개의 정수를 입력하세요. \n");
}

int main(void)
{
	int result, num1, num2; // 지역변수 전역변수의 차이 Add(num1, num2)와는 다른 변수이다.
	HowToUseThisProg(); // 매개변수가 선언받고있지 않음 (void)
	num1=ReadNum();
	num2=ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result); // ShowAddResult(int num)과의 차이는 다음시간에...
	return 0;
}
*/




/* 함수의 선언
   컴파일러에게 미리 알려주는것 --> 함수의 선언, (;)이 들어감.
   구현해주는것 --> 함수의 정의
   
   컴파일러는 위에서 아래로 절차지향으로 컴파일하기때문에,
   main함수 위에 함수를 선언해주거나(int a();) 
   main함수 위에 함수를 정의해 주어야한다.   */


// 선생님 선물

// 문제 1. 두 수중 큰 수를 출력하기
/*
#include <stdio.h>
int Max_fun(int a, int b)
{
	if(a>b)
		return a;
	if(a<b)
		return b;
}

int main(void)
{
	int result1 = Max_fun(7, 4);
	int result2 = Max_fun(2.7, 5.1);
	printf("Max = %d\n", result1);
	printf("Max = %d\n", result2);
}
*/


/*
#include <stdio.h> // 문제 1. 선생님 풀이

void Max_fun(int a, int b)
{
	if(a>b)
		printf("%d\n", a);
	else
		printf("%d\n", b);
}

int main(void)
{
	Max_fun(7, 4);
	Max_fun(2.7, 5.1);
}
*/


/*
#include <stdio.h> // 문제 1 변형, 두 수를 입력받고, 큰수를 출력하기.

int Compare(int a, int b)
{
	if (a>b)
		return a;
	else if (a<b)
		return b;
	else
		return 0;
}

int Scanf(void)
{
	int num;
	scanf("%d", &num);
	return num;
}

void How(void)
{
	printf("두 정수를 비교하는 함수입니다.\n");
	printf("정수를 두 개 입력하세요! --> ");
}

int main(void)
{
	int num1, num2, result;

	How();
	num1 = Scanf();
	num2 = Scanf();
	result = Compare(num1, num2);
	if (result == 0)
		printf("같은 수를 입력하셨군요~ \n");
	else
		printf("두 수 중, 큰 수는 : %d \n", result);
	return 0;
}
*/


// 문제 2. 구구단을 출력하는 함수를 만들어보자.
/*
#include <stdio.h>

void Gugudan(int dan);

int main(void)
{
	int dan;
	printf("input the dan : ");
	scanf("%d", &dan);
	Gugudan(dan);
}

void Gugudan(int dan)
{
	int a=1;
	while(a<10)
	{
		printf("%d * %d = %d\n", dan, a, dan*a);
		a++;
	}
}
*/
/*
void Gugudan(int dan) // 선생님 풀이, for문을 이용하는 방법도 있음.
{
	int i;
	for(i=1; i<10; i++)
		printf("%d * %d = %d\n", dan, i, dan*i);
}
*/



// 문제 3. 3개의 정수를 받아서 가장 큰수와 가장 작은수를 반환하는 함수를 만들어보자. (완전정답)
/*
#include <stdio.h>
int MaxNum(int n1, int n2, int n3) // 가장 큰수 반환 함수
{
	if(n1>n2 && n1>n3)
		return n1;
	if(n2>n1 && n2>n3)
		return n2;
	if(n3>n1 && n3>n2)
		return n3;
}

int MinNum(int n1, int n2, int n3) // 가장 작은수 반환 함수
{
	if(n1<n2 && n1<n3)
		return n1;
	if(n2<n1 && n2<n3)
		return n2;
	if(n3<n1 && n3<n2)
		return n3;
}

int main()
{
	int num1, num2, num3;
	printf("세 개의 정수 입력 : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("가장 큰 수 : %d \n", MaxNum(num1, num2, num3));
	printf("가장 작은 수 : %d \n", MinNum(num1, num2, num3));
	return 0;
}
*/



// 4번째 절대값문제 어려움 - 두개함수에서 기능을 나눠서 만들것. (비교만 / 절대값만)
/*
#include <stdio.h>

int AbsoCompare(int num1, int num2);
int GetAbsoValue(int num);

int main()
{
	int num1, num2;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &GetAbsoValue(num1), &GetAbsoValue(num2));
	//num1 = GetAbsoValue(num1);
	//num2 = GetAbsoValue(num2);
	printf("%d와 %d중 절대값이 큰 정수 : %d\n", num1, num2, AbsoCompare(num1, num2));
	return 0;
}

int AbsoCompare(int num1, int num2)
{
	if (num1>=num2)
		return num1;
	if (num1<=num2)
		return num2;
}

int GetAbsoValue(int num1, int num2)
{
	num1 = num1>0 ? num1:num1*(-1);
	num2 = num2>0 ? num2:num2*(-1);
	return num1, num2;
}
*/



// 문제 4. 두 수를 입력받아, 절대값이 더 큰 수를 출력하는 함수 (선생님풀이)
#include <stdio.h>
int AbsoCompare(int num1, int num2);
int GetAbsoValue(int num);

int main(void)
{
	int num1, num2;
	printf("두 개의 정수 입력 : ");
	scanf("%d %d", &num1, &num2);
	printf("%d와 %d중 절대값이 큰 정수 : %d \n",
			num1, num2, AbsoCompare(num1, num2));
	return 0;
}

int AbsoCompare(int num1, int num2)
{
	if(GetAbsoValue(num1) > GetAbsoValue(num2))
		return num1;
	else
		return num2;
}

int GetAbsoValue(int num)
{
	int result;
	result=num>0 ? num:num*(-1);
	return result;
} // 함수를 어떻게 설계하느냐에 따라서 프로그래머의 실력이 갈린다.





// 맨 마지막문제는 출력의 결과만 예상해보기, 아직 풀수없음




/*
메모리영역 Code(코드) / Date(전역변수) / Heap(동적할당) / Stack(★지역변수)
용도가 다르고, 나눠서 관리하면 편해서, 

함수가 다르면, 변수가 같아도 다른변수이다. (동명이인, 지역변수)
*/
