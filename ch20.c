
/*
정말 중요한건 맨 나중에함

코드, - 코드 (우리가 작성한것)
데이터,  - 전역변수 static변수
힙, - 동적할당?
스택 - LIFO구조 지역변수, 매개변수 */


/*
#include <stdio.h>

char * ReadUserName(void)
{
	char name[30];
	printf("What's your name? ");
	gets(name);
	return name;
}

int main(void)
{
	char * name1;
	char * name2;
	name1 = ReadUserName();
	printf("name1 : %s \n", name1);
	name2 = ReadUserName();
	printf("name2 : %s \n", name2);

	return 0;
}
*/


/*
말록함수는 힙영ㅇ역에 저장되는데
	어딘지 모름 그래서 포인터변수로 그를 간접접근함
	포인터변수를 쓰는 또다른 이유 
	
	동적할당 자료구조시간에 엄청많이할거임*/

/*
#include <stdio.h>
#include <stdlib.h> // malloc()함수를 쓰기위한 헤더파일
int main(void)
{
	int * ptr1 = (int *)malloc(sizeof(int)); // 힙 영역으로의 메모리 공간 할당 (동적할당)
	int * ptr2 = (int *)malloc(sizeof(int)*7); // int가 4바이트니까.
	int i;

	*ptr1 = 20;

	for(i=0; i<7; i++)
		ptr2[i]=i+1; // ptr2의 index [0]이 1이 되는거임. index[6]까지 초기화시켜줌.

	printf("%d \n", *ptr1);
	
	for(i=0; i<7; i++) // 
		printf("%d", ptr2[i]);

	free(ptr1);
	free(ptr2);
	return 0;
} // 디버깅모드로 확인하면 정확하게 이해할수있을거임, 디버깅모드덕에 공부가 더 수월할수있다.
*/
// 포인터를 배열처럼 쓸수있고, 배열을 포인터처럼 쓸수있다.

// 포인터는 c언어의 꽃, 포인터가없으면 아무것도못함.


/*
#include <stdio.h>
#include <stdlib.h>

char * ReadUserName(void) // 리턴값을 포인터형으로 반환함. char *, name1의 주소값이 들어감. 할당 될때마다 새로운 주소값이 할당됨.
{
	char * name = (char *)malloc(sizeof(char)*30); // 보통 필요할때 말록함수를 선언하고, 바로 지우고 함.(선생님 사용방법)
	printf("What's your name? ");
	gets(name);
	return name;
}

int main(void)
{
	char * name1;
	char * name2;
	name1 = ReadUserName();
	printf("name1 : %s \n", name1);
	name2 = ReadUserName();
	printf("name2 : %s \n", name2);

	printf("again name1 : %s \n", name1);
	printf("again name2 : %s \n", name2);

	free(name1);
	free(name2);
	return 0;
}
*/




// 문자열최대길이 정보 먼저 입력받기.
// 그 길이만큼 메모리공간 동적할당 하기,
// 문자열 입력받기, 단어 역으로출력

// 널문자 +1 이 힌트


/*
#include <stdio.h> // 집에서 해결하기, 선물
#include <stdlib.h>

char * Read(void)
{
	char * read = (char *)malloc(sizeof(char)+1);
	puts("문자열을 입력하세요 --> ");
	scanf("%s", read);
}

int main(void)
{
	int len;

	puts("입력하실 문자열의 최대 길이를 입력하세요! -> ");
	scanf("%d", len);
	
*/


/* f7을 누르면 컴파일과 오프젝트파일을 둘다 만들어줌. */

/*
#include <stdio.h>
#define SQUARE(X) X*X

int main(void)
{
	int num = 20;

	printf("Square of num : %d \n", SQUARE(num));
	printf("Square of num : %d \n", SQUARE(-5));
	printf("Square of num : %g \n", SQUARE(2.5));

	printf("Square of 3+2 : %d \n", SQUARE(3+2)); // 3 + 2 * 3 + 2 연산우선순위에 의해 11이 나옴.
	printf("Square of 3+2 : %d \n", SQUARE((3)+(2)));
	printf("Square of 3+2 : %d \n", SQUARE((3+2)));
	return 0;
}
*/



#include <stdio.h>
#define NAME "홍길동" // 늘 대문자로써줘야함, 약속임. 상수로 시켜주는것
#define AGE 24
#define PRINT_ADDR puts("주소 : 경기도 용인시 \n");

int main(void)
{
	printf("이름 : %s \n", NAME);
	printf("나이 : %d \n", AGE);
	PRINT_ADDR; // 사용자가 편의를 위해서 쓰는것임.
	return 0;
}

