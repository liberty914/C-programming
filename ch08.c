// 난수 [Random Number] rand() / srand() -> <stdlib.h>
/* seed값 - random중에 대략적인 초기값.
암호학에 쓰임 */

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num=0;
	int i=0;

	for(i=0; i<5; i++)
	{
		num=rand();
		printf("%d \n", num);
	}
	return 0;
}
*/


/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num=0;
	int i=0;
	srand(15);

	for(i=0; i<5; i++)
	{
		num = rand();
		printf("%d \n", num);
	}
	return 0;
}
*/



/*
#include <stdio.h> // printf(), scanf()
#include <stdlib.h> // rand(), srand()
#include <time.h> // time()

int main(void)
{
	int num=0;
	int i=0;
	srand((unsigned)time(NULL)); // 지금 이순간에도 계속해서 변하고있는것! "시간"을 seed값으로 주게되면 끊임없이 다른 난수를 생성가능함!
	//(NULL)은 현재시간을 의미
	//unsigned - 양수만을 사용하겠다. (시간에는 음수가 필요없음)
	
	rand();
	rand(); // seed값을 변경하기 위해서
	rand();

	for(i=0; i<5; i++)
	{
		num = rand(); // seed값이 기본으로 1로 되있어서 모든 pc에게 같은 난수가 발생됨.
		printf("%d \n", num);
	}
	return 0;
}
*/



// 문제 1. (완료)난수 함수에서 원하는 값 생성하기 (랜덤 범위를 구하는 공식 알아볼 것!)
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int fix9, fix15, fix26;
	srand((unsigned)time(NULL));
	fix9 = rand() % 10;
	fix15 = rand() % 15 + 1;
	fix26 = rand() % 7 + 20;

	printf("0~9 랜덤 수 : %d \n", fix9);
	printf("1~15 랜덤 수 : %d \n", fix15);
	printf("20~26 랜덤 수 : %d \n", fix26);
}
*/


/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int num, i, fix;
	srand((unsigned)time(NULL));
	rand();

	for(i=0; i<10; i++)
	{
		num=rand();
		fix=num%10+1;
		// x % 10 = 0~9
		// rand() % 15 + 1 --> 1~15
		// rand() % 7 + 20 --> 20~26
		printf("%d\n", fix);
	}
	return 0;
}
*/


// 문제 2. 동전 앞 뒤 맞추기 게임(완료)
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int a, b;

	srand((unsigned)time(NULL));

	while(1)
	{
		a = rand() % 2 + 1;
		printf("동전이 앞면일까요? 뒷면일까요? \n");
		printf("앞면은 1 ,  뒷면은 2   --->   ");
		scanf("%d", &b);

		if(a==b)
		{
			printf("정답입니다~! 짝짝짝!\n\n");
		}
		else
		{
			printf("틀렸어요ㅠㅠ\n\n");
		}
	}
}
*/



/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h> // cls함수
int main(void)
{
	int a, com;
	srand((unsigned)time(NULL));
	rand();
	rand();
	rand();

	while(1)
	{
		com = rand() % 2 + 1;
		printf("===== 동전 맞추기 게임 =====\n");
		printf("1. 앞면   2. 뒷면 --> ");
		scanf("%d", &a);

		if(a==com)
		{
			printf("정답입니다~!\n\n");
		}
		else
		{
			printf("틀렸습니다~!\n\n");
		}
		Sleep(1000);
		//system("pause");
		system("cls");
	}
}
*/
/* 시스템함수 - 
Sleep(1000); - 1000단위에 1초 <Window.h>
system("pause");
system("cls"); */




// 문제 3. 컴퓨터와 가위, 바위, 보 하는 게임 만들기
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int a, com;
	srand((unsigned)time(NULL));
	rand();
	rand();
	rand();

	while(1)
	{
		printf("===== 가위 바위 보 게임 =====\n");
		printf(" 1. 가위   2. 바위   3. 보 ");
		scanf("%d", &a);
		com = rand()%3 + 1;

		if(a == com)
		{
			printf("맞췄습니다!\n\n");
		}
		else
		{
			printf("틀렸습니다!\n\n");
		}
	}
	return 0;
}




// 추가예제, 반짝반짝 만들어보기












/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int a, com;
	srand((unsigned)time(NULL));
	rand();
	rand();
	rand();

	while(1)
	{
		printf("===== 가위 바위 보 게임 =====\n");
		printf(" 1. 가위   2. 바위   3. 보 ");
		scanf("%d", &a);
		com = rand()%3 + 1;

		if(a == com)
		{
			printf("맞췄습니다!\n\n");
		}
		else
		{
			printf("틀렸습니다!\n\n");
		}
	}
	return 0;
}
*/




// 추가예제, 반짝반짝 만들어보기