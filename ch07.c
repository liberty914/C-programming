
// 제어문 [for문] ~하는 동안에, 반복문
// for(초기식; 조건식; 증감식)
/*
#include <stdio.h> // 제어문 [for문]
int main(void)
{
	int sum=0;
	int i, num;
	printf("0부터 num까지 더할 정수를 입력하세요 --> ");
	scanf("%d", &num);

	for(i=0; i<=num; i++)
	{
		sum += i;
	}
	printf("0부터 %d까지의 합 : %d \n", num, sum);
	return 0;
}
*/



// 반복의 횟수가 정해져있는경우 for
// 정해져있지 않을때, 사용자에 따라서 몇번 반복할지 알수없을때, while

/*
#include <stdio.h> // for문의 중첩

int main(void)
{
	int cur, is;
	
	for(cur=2; cur<10; cur++)
	{
		for(is=1; is<10; is++)
		{
			printf("%d * %d = %d \n", cur, is, cur*is);
		}
		printf("\n");
	}
	return 0;
}
*/



/*
// factorial
// 3! = 1*2*3
5! = 1*2*3*4*5
n!
sum(0으로초기화 *= i(1씩증가하는변수)*/



/*
#include <stdio.h> // 문제 1. Factorial을 계산하는 프로그램을 작성해보자. (완료)
int main(void)
{
	int factorial, i, sum=1;
	printf("Factorial 계산하기 --> ");
	scanf("%d", &factorial);
	for(i=1; i<=factorial; i++)
	{
		sum = sum * i;
	}
	printf("%d!은 --> %d \n", factorial, sum);
}
*/

/*
#include <stdio.h> // 1번문제 선생님풀이
int main(void)
{
	int num, i, sum=1;
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		sum*=i;
	}
	printf("%d! = %d\n", num, sum);
	return 0;
}
*/

/*
#include <stdio.h> // 문제 3. 역삼각형 숫자찍기 (완료)
int main(void)
{
	int i, j, a=0, b=5;
	for(i=0; i<5; i++)
	{
		for(j=0; j<b; j++)
		{
			printf(" %2.0d", a+1);
			a++;
		}
		printf("\n");
		b--;
	}
}
*/

/*
#include <stdio.h> // 문제 3. 선생님 풀이
int main(void)
{
	int a, b, num=1;
	for(a=1; a<=5; a++)
	{
		for(b=a; b<=5; b++)
			printf("%3d", num++); // 자릿수 3개를 만들어줌
			// num의 후위연산으로인해 1씩 늘어남
		printf("\n");
	}
}
*/


/*
4번문제가 메인 (우리반에서 3명이 풀면 알려줌) - 별을 먼저 역삼각형으로 출력하기 (선생님은 처음풀때 한달걸렸음)
*/


/* 마지막문제 형식
for(	)
{
	for(	)
	{
	}
	for(	)
	{
	}
}
*/