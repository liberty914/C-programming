/*
#include <stdio.h> // ★★★★★반복문 while문 예제 [반복문은 크게 while / for / do while]
int main(void)
{
	int num=0;

	while(num<5)
	{
		printf("Hello world %d \n\n", num);
		num++; // num이 5미만일때까지 while의 문장을 반복하며, 5이상이 되는 순간 종료한다.
	}
	return 0;
}
*/



/*
#include <stdio.h> // 반복문 while문 예제2
int main(void)
{
	int dan=0, num=1;
	printf("구구단 몇단? -> ");
	scanf("%d", &dan);

	while(num<10) // ★ while문을 보자마자, 반복횟수를 먼저 구별해야함. - 9번
	{
		printf("%d * %d = %d \n", dan, num, dan*num);
		num++;
	}
	return 0;
}
*/



/*
#include <stdio.h> // ★★★ while 무한루프 - 사용자가 끌때까지 계속해서 해주는것임.
int main(void)
{
	int num=0;

	while(1) // while문의 조건식이 1==참 이라는 의미, 그러므로 계속해서 진행함.
	{
		printf("Hello world %d \n", num);
		num++;
	} // 무한루프를 멈추고자 할때는 control + C
	return 0;
}
*/



/*
#include <stdio.h> // 그냥 만들어본 덧셈 계산기
int main(void)
{
	int n1, n2;
	while(1)
	{
		printf("더하고 싶은 두자리 수를 입력하세요...");
		scanf("%d %d", &n1, &n2);
		printf("\n%d + %d = %d\n\n", n1, n2, n1+n2);
	}
	return 0;
}
*/



/* Brute Force Attack - 무차별 대입 공격 - 비밀번호가 될수있는 모든 경우의수를 때려박는것.
   Dictionary 사전대입공격 - 블로그, 카페 등 DB를 뒤지고, 자주쓰는 것들을 우선적으로 돌려봄. */
// 변수를 선언만해주고 초기화를 해주지않으면, 아무 의미없는 "쓰레기값"이 됨.
// 사용자가 끌때까지 계속해서 해주는것임. - 계산기를 지속적으로 쓸수있게. (반복문 안에 switch가 들어가야함)


// ch5 2번문제 - switch()식을 잘 가공해서 바꿔줘야함, 변수는 하나만 + 30? -30?


// ★ ch6 Exam

// 문제 1. 사용자로부터 양의 정수를 하나 입력받아서, 그 수만큼 "Hello world"를 출력하시오.
/*
#include <stdio.h>
int main(void)
{
	int num1, num2=1;
	printf("양의정수를 하나 입력해봐욤 -> ");
	scanf("%d", &num1);

	while(num2 <= num1) // num1에서 0까지 '마이너스' 시켜주면서 해도 됨.
	{
		printf("Hello world %d \n", num2);
		num2++;
	}
}
*/



// 문제 2. 양의정수를 하나 입력받아서, 그 수만큼 3의배수를 출력하라.
/*
#include <stdio.h>
int main(void)
{
	int num, three=1;
	printf("3의 배수를 몇개까지 알고싶어? --> ");
	scanf("%d", &num);

	while(three <= num) // 사실은 위와 동일한 문제였음.
	{
		printf("%d\n", three*3);
		three++;
	}
}
*/



// 문제 3. 1~10사이의 숫자만 입력받아, 1부터 입력받은 수까지의 합을 구해보자.
/*
#include <stdio.h>
int main(void)
{
	int n1, n2=1, res=0;

	printf("1~10사이의 숫자만 써봐 --> ");
	scanf("%d", &n1);
	if(0<n1 && n1<=10)
	{
		printf("1부터 %d까지의 합은 ==> ", n1);
		while(n2<n1)
		{
			res+=n2;
			n2++;
		}
		// res = res+n1;
		printf("%d\n", res+n1);
	}
	else
	{
		printf("다시입력! \n\n");
	}
	return 0;
} // help 무한루프 씌우면 답이 이상한 이유는?
*/



// 문제 4. while문 안에 1부터 100까지 증가, 그 중에서 7의배수와 9의배수
/*
#include <stdio.h>
int main(void)
{
	int i=1;

	while(i<=100)
	{
		if(i%7==0 || i%9==0) // 양쪽에서 나오는 모든수가 출력됨. &&를 쓰게되면 63하나만 출력됨.
			printf("%d ", i);
		i++;
	}
}
*/



// 문제 5. 입력받은 수의 구구단을 출력하고, 역순으로도 출력해보자.
/*
#include <stdio.h>
int main(void)
{
	int dan=0, num=9;
	printf("몇 단을 외울건가요?\n\n");
	scanf("%d", &dan);

	while(num>0)
	{
		printf("%d * %d = %d\n\n", dan, num, dan*num);
		num--; // 역순으로 출력!
	}
	return 0;
}
*/



// 문제 6. 정수를 입력받고, 사용자가 0을 입력할때까지 계속 더함.
/*
#include <stdio.h>
int main(void)
{
	int num=1, sum=0;
	printf("서로 더하고싶은 모든 수를 입력해보시고, 결과를 보려면 0을 입력하세요\n\n");
	while(num!=0) // 최초에 while로 진입하기위해 num을 1로 선언해줌
	{
		scanf("%d", &num);
		sum+=num;
	}
	printf("입력한 모든 수의 합은 %d입니다.", sum);
	return 0;
}
*/
// 알고리즘을 먼저 그림으로 그려보고, 그 다음에 프로그래밍을 해보는 습관을 기르자
// 예제들 전부다 다시한번 확인하고, 풀어보기



/*
#include <stdio.h> // ★★★★★ 반복문 [while문의 중첩]
int main(void)
{
	int cur=9;
	int is=0;

	while(cur>1)
	{
		is = 9; // 반복문에서 가장 실수하는 부분!, 다시 설정해주지 않으면 반복문은 2단에서 그냥 끝나버림!
		while(is>0)
		{
			printf("%d * %d = %d \n", cur, is, cur*is);
			is--;
		}
		cur--; // 역순으로 출력하는것도 해보기
	}
	return 0;
}
*/



// ★ ch6 Exam

/*
#include <stdio.h> // 문제 1. 별찍기 (해결)
int main(void)
{
	int num1=1, num2=1;

	while(num1<=5)
	{
		num2 = 1;
		while(num2<=num1)
		{
			printf("* ");
			num2++;
		}
	printf("\n");
	num1++;
	}
} 
*/



/*
#include <stdio.h> // 문제 1. 별찍기 2 삼각형 / 역삼각형 (해결)
int main(void)
{
	int a=0, b=0;
	while(a<5)
	{
		while(b>=0)
		{
			printf("★ ");
			b--;
		}
		printf("\n");
		a++;
		b=a;
	}
}
*/




/*
#include <stdio.h> // 선생님의 별찍기 풀이 (역삼각형)
int main(void)
{
	int a, b;
	a=1;
	while(a<=5)
	{
		b=a;				// 핵심!! b=5;
		while(b<=5)			// b>a
		{
			printf("★ ");
			b++;			// b--;
		}
		printf("\n");
		a++;				// 2번째 핵심!!
	}
}
*/



/*
#include <stdio.h> // 문제 2. 끝에만 별찍기 (해결)
int main(void)
{
	int a=0, b=0;
	while(a<5)
	{
		while(b>0)
		{
			printf("O");
			b--;
		}
		printf("*\n");
		a++;
		b=a;
	}
}
*/



/*
#include <stdio.h> // 선생님 끝에만 별찍기 풀이
int main(void)
{
	int i=0, j=0;

	while(i<5)
	{
		while(j<i) // (핵심!!)처음엔 거짓이었기때문에 실행하지 않는다.
		{
			printf("o ");
			j++;
		}
		j=0;
		printf("* \n");
		i++;
	}
	return 0;
}
*/



/*
#include <stdio.h> // 역삼각형 중간띄어 별찍기 (미완성)
int main(void)
{
	int a=0, b=0, c=0;
	while(a<3) // 줄바꿈 변수
	{
		while(b<3) // 띄어쓰기 변수
		{
			while(c<5) // 별 변수
				{
					printf("* ");
					c++;
					if (c>=5)
						printf("\n");
				}
			printf("0 ");
			b++;
		}
		printf("\n");
		a++;
		b++;
		c++;
	}
}
*/



/* 
#include <stdio.h> // 문제 3. 5개 양의정수 입력 후 합을 출력하는 프로그램
int main(void)
{
	int a=0, b=0, c=0;
	while(a<5)
	{
		while(b<=0)
		{
			printf("수를 입력하세요...");
			scanf("%d", &b);
		}
		c+=b;
		b=0;
		a++;
	}
	printf("합계는 %d", c);
	return 0;
}
*/


	
/*
#include <stdio.h> // 문제 3. 선생님풀이
int main(void)
{
	int sum=0, num=0, i=0;
	while(i<5)
	{
		while(num<=0)
		{
			printf("숫자를 입력하세요...%d  ", i+1);
			scanf("%d", &num);
		}
		sum+=num; // sum = sum + num
		num=0; // 다시 while문으로 재진입 할수 있도록 만들어줌.
		i++;
	}
	printf("총 합 : %d \n", sum);
	return 0;
}
// 반복의 횟수를 파악하는것이 while문의 관건.
// 감이 안잡히면 무조건 순서도를 그려볼 것.
*/



/* 별찍기 힌트.
	반복문이 첫번째 돌아갈때 안쪽 반복문이 다섯번 찍어주면 됨
	바깥쪽 5번, 안쪽 5번	*/


/* 디버깅 커서를 누르고 f9

*/



/*
#include <stdio.h> // 제어문 [do while문]
int main(void)
{
	int num=0;
	
	do // 조건과 관계없이 최초에 1번은 수행함.
	{
		printf("Hello world!! %d\n\n", num);
		num++;
	}while(num<3);
	return 0;
}
*/



/*
#include <stdio.h> // 제어문 [do while문이 자연스러운 상황]
int main(void)
{
	int total=0, num=0;

	do // 무조건 한번은 입력 받아야 할 때, 최초에 한번은 반드시 실행해야할 때 사용한다.
	{
		printf("정수 입력(0 to quit): ");
		scanf("%d", &num);
		total += num;
	}while(num!=0); // do-while문은 조건식 끝에 세미콜론(;)이 오게된다. 주의..!
					// 0 값이 입력되면 합계가 나오면서 프로그램이 종료됨.
					// 그렇지 않으면 계속해서 입력된 값을 더함. (반복영역이 한번 이상 실행될 때 용이하다)
	printf("합계 : %d \n", total);

	return 0;
}
*/



/*
#include <stdio.h> // break문
int main(void)
{
	int sum=0, num=0;
	
	while(1) // 1을 쓰면 값이 참이니, 무한루프
	{
		sum+=num;
		if(sum>5000)
			break; // if문을 빠져나가는것이 아니라, 반복문 빠져나가는 것이다.
					// (감싸고 있는 while문 하나를 빠져나감.)
		num=0;
		num++;
	}
	printf("sum : %d \n", sum);
	printf("num : %d \n", num);
	return 0;
}
*/



/*
#include <stdio.h> // continue문
int main(void)
{
	int num = 1;
	printf("start!!\n\n");

	while(num<20)
	{
		num++;
		if(num%2==0 && num%3==0)
			continue; // "다시 처음부터 진행하세요" - printf출력 안함.
		printf("%d\n", num);
	}
	printf("End!!\n\n");
	return 0;
} // 결과적으로 2의배수와 3의배수가 겹치게되는 수를 제외하고 출력함.
*/



// while, break(j의값이 i보다 더 크면) / continue



// 문제. 구구단을 출력하되 짝수 단만 출력하도록 하자.
//		단 2단은 2*2까지, 4단은 4*4까지, 6단은 6*6까지, 8단은 8*8까지 출력되도록 하자.(해결)

#include <stdio.h>
int main(void)
{
	int a=1, b=1;
	while(a<10)
	{
		a++;
		if (a%2 != 0)
			continue;
		while(b<10)
		{
			printf("\t%d * %d = %d\n", a, b, a*b);
			if(a==b)
				break;
			b++;
		}
		b=1;
	}
}

