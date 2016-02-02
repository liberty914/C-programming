

// 정보처리기사 = 전자계산기, 데이타통신, 알고리즘... 기능사는 자격증이 아닌 신분증임 ㅋㅋ 기사랑 산업기사를 자격증이라고함.



// 복사되기떄무에 다시돌아와도 age는 변하지않는다.

// 배열은 주소값이기땜누에, 받는애도 포인터가되야한다. (약간 새로운개념)

/*
#include <stdio.h>
int Func(int num);
{
	... ... ...
}

int main(void)
{
	int age = 17;
	Func(age);
	...
}
*/



// 지역변수이기때문에, 스왑함수를 써도 값이 변경이안됨.
// 포인터로 간접접근을 해야함.
// 배문제에서 했던것, 나는해적왕

/*
#include <stdio.h> // 값을 복사한 것
void Swap(int n1, int n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
	printf("n1 n2 : %d %d \n", n1, n2);
}

int main(void)
{
	int num1 = 10;
	int num2 = 20;
	printf("num1 num2 : %d %d \n", num1, num2); // 출력1

	Swap(num1, num2); // 출력2
	printf("num1 num2 : %d %d \n", num1, num2); // 출력3
	return 0;
} // 복사값이기때문에 값의전달이 안됨
*/



/*
#include <stdio.h> // 주소값을 전달한 것
void Swap(int *n1, int *n2)
{
	int temp = *n1; // 스왑에 필요한 변수선언
	*n1 = *n2;
	*n2 = temp;
	printf("n1 n2 : %d %d \n", *n1, *n2);
}

int main(void)
{
	int num1 = 10;
	int num2 = 20;
	//int * pnum1 = &num1;
	//int * pnum2 = &num2;
	printf("num1 num2 : %d %d \n", num1, num2);

	Swap(&num1, &num2);
	printf("num1 num2 : %d %d \n", num1, num2);
	return 0;
}
// 제대로 하나하나 분석해보기.
*/




/*
#include <stdio.h>

void Func2(int * param) // param = parameter (매개변수)의 줄임
{
	printf("%d %d", param[0], param[1]);
}

int main(void)
{
	int arr[3] = {1,2,3};
	Func2(arr);
	...
}
*/



/*
#include <stdio.h>
void ShowArr(int * param, int len)
{
	int i;
	for(i=0; i<len; i++)
		printf("%d", param[i]);
	printf("\n");
}

void AddArr(int * param, int len, int add)
{
	int i;
	for(i=0; i<len; i++)
		param[i] += add;
}

int main(void)
{
	int arr[3] = {1,2,3};
	AddArr(arr, sizeof(arr) / sizeof(int), 1);
	ShowArr(arr, sizeof(arr) / sizeof(int));

	AddArr(arr, sizeof(arr) / sizeof(int), 2);
	ShowArr(arr, sizeof(arr) / sizeof(int));

	AddArr(arr, sizeof(arr) / sizeof(int), 3);
	ShowArr(arr, sizeof(arr) / sizeof(int));

	return 0;
}
*/


/*
#include <stdio.h>
void ShowArr(int * param, int len)
{...}

void AddArr(int * param, int len, int add)
{...} // (1)포인터변수의 형태로 인자값을 전달받았을 때

------------------------------------------

void ShowArr(int param[], int len)
{...}

void AddArr(int param[], int len, int add)
{...} // (2)배열의 형태로 인자값을 전달받았을 때
*/



//다음페이지
// 주소값을 넘겨주니까 간접접근이 됨. 그래서 값이 변경되는것임.

//다음페이지

// 배열은 인자로 받는구나 라는사실을 명확하게 알기때문에 2번째 예로 함.
// 이 함수가 뭘 하는거구나 딱 한눈에 볼수있어야 "좋은 코드"임
// 함수, 변수의 이름이 의미가 있어야함. 바로분석이 가능해야함. 늘 의미있게.
// 오른쪽의 주석은 사용이불가능함. 선언할때는 포인터를 반드시 선언해줘야함. (?)




/* const선언 프로그래머들이 굉장히많이씀
   포인터로 간접접근 불가능함
   변수명앞에 ptr은 첫번째 초기화된것만, 포인터변수를 상수화시킨것.
   프로그램 안정성을 위해서

	const int * const ptr = &num1; 일때.
	* ptr= (안됨)
	ptr = num2 ; (안됨)
	이 경우, ptr은 고정적으로 num1하나밖에 가리킬수 없음.
	프로그램의 안정성을 위해 사용함.

	다음페이지

	값을 고정하려고 했을때, 컴파일 오류가 발생했다는걸 쉽게알수있음.
	혹시라도 실수라도 다른값을 입력했을경우 밤새고 눈빠지고 안구건조증을 유발할수있음
	실수는 100%한다. 실수를 하나라도 안하기위한 방법이 됨.   
	
	다음페이지
	
	Swap과 포인터 이용해 풀기  */


/*
#include <stdio.h>

int main(void)
{
	int num = 20;
	const int * ptr = &num;
	*ptr = 30;	//컴파일 에러, 간접접근 불가.
	num = 40;	//컴파일 성공
	…
}


int main(void)
{
	int num1 = 20;
	int num2 = 30;
	int * const ptr = &num1;
	ptr = &num2; //컴파일 에러, 주소값 변경 불가
	*ptr = 40;	 //컴파일 성공
	…
}
*/




#include <stdio.h> // 문제 1, 서로 뒤바꾸는 함수 만들기

void Swap(int *n1, int *n2, int *n3) // 반환값을 int로 쓰면 왜 반환안하냐고 물어봄.
{
	int temp;
	temp = *n1;
	*n1 = *n3; // 이 경우, 포인터를 main함수에 선언하는게 아니라,
	*n3 = *n2; // Swap함수 내에 선언해야한다.
	*n2 = temp;
}

int main(void)
{
	int num1=10;
	int num2=20;
	int num3=30;

	Swap(&num1, &num2, &num3);

	printf("num1 = %d \n", num1);
	printf("num2 = %d \n", num2);
	printf("num3 = %d \n", num3);
}


// 14번 ppt 마지막예제는 포인터를 이해하는데 아주 중요한 예제.

// 배열은 포인터상수이니까. 더블포인터로 가리킬수가 있다.



// 2차원배열 [행][열] 크기는 3x4x4(int) = 48byte
// 3차원배열은 거의쓰지않음. 있구나 하면 됨.


/*   *ptr = 값(정수) -- 에스크립터연산자 붙으면 포인터가 가리키는 공간에 가서. 값을 대입시킴.
	 ptr = &주소값 -- 별 없으면 주소값을 저장하는것, 포인터'변수'의 역할, 새로 가리킴 */


/*
#include <stdio.h>
int main(void)
{
	int villa[4][2];
	int popu, i, j;
	for(i=0; i<4; i++) // 가구별 거주인원 input
	{
		for(j=0; j<2; j++)
		{
			printf("%d층 %d호 인구수 : ", i+1, j+1);
			scanf("%d", &villa[i][j]);
		}
	}
	for(i=0; i<4; i++) // 빌라의 층별 인구수 output
	{
		popu = 0; // 매 층마다 초기화됨
		popu += villa[i][0]; // 1호을 의미
		popu += villa[i][1]; // 2호을 의미
		printf("%d층 인구수 : %d \n", i+1, popu);
	}
}
*/

// 배열은 공간이 딱정해져있는게 좋음, 그러나 아닌경우도있음, 동적할당이라는게 있음. 메모리 Heap영역할당



/*
스트림은 단방향
	시냇물 */
