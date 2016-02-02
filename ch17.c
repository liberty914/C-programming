

// 널문자를 떼고 출력이됨.

/*
#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[]) // 배열을 인자로 전달받음. ★이 함수를 잘 알고있어야함
{
	int len=strlen(str);
	str[len-1]=0; // 6-1 = 5를 0으로, 0은 null (★index는 0으로 시작하기때문에)
}

int main(void)
{
	char str[100];
	printf("문자열 입력 : ");
	fgets(str, sizeof(str), stdin); // str에다가 / str의 크기만큼 / 키보드로 입력받음 (개행문자 enter까지)
	printf("길이 : %d, 내용: %s \n", strlen(str), str); // strlen()함수는 하나의 만들어진 표준함수임. 문자열의 길이를 구하는표준함수 <string.h> 헤더파일 안에 있음.

	RemoveBSN(str); // 배열을 인자로 전달함.
	printf("길이 : %d, 내용 %s \n", strlen(str), str); // 엔터가 빠졌음 -1했음.
	return 0;
} // 엔터의 자리에다가 null문자를 삽입해줌.
*/



/*
cpy는 카피 
strcpy(str2, str1); str1을 str2에 복사 진행방향 <<<<

strncpy(str2, str1, sizeof(str2)); sizeof의 크기만큼 복사하세요.
*/



/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20] = "1234567890";
	char str2[20];
	char str3[5];

	strcpy(str2, str1);
	puts(str2);

	strncpy(str3, str1, sizeof(str3)); // 
	puts(str3);

	strncpy(str3, str1, sizeof(str3)-1);
	str3[sizeof(str3)-1] = 0;
	puts(str3);
	
	return 0;
}
*/




/* 풀이
2번쨰 puts에서 널문자가 저장될 공간이 없음, 
3번째는 마지막 = 0 을 해줘서 널문자가 삽입이 되는것임. */

/*
strcat()
다른문자를 덧붙이는것
진행방향 >>>
인자가 3개
널문자부터 덧붙임이 시작됨.
*/

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20] = "First~";
	char str2[20] = "Second";
	
	char str3[20] = "Simple num: ";
	char str4[20] = "1234567890";

	strcat(str1, str2); // str1의 \0자리에 Second삽입
	puts(str1); // Second 다음에 널문자가 존재.

	strncat(str3, str4, 7); // str4의 7개만 복사해줌
	puts(str3); // [20]의 한도 내에서 출력가능함(NULL포함)

	return 0;
}
*/


/*
strcmp() 비교하다 compare
0이아닌값을 받환한다.
같으면 0

동일하면 0
ncnp는 인자가 하나 더있음
*/


/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20];
	char str2[20];
	printf("input1 : ");
	scanf("%s", str1);
	printf("input2 : ");
	scanf("%s", str2);

	if(!strcmp(str1, str2))
	{
		puts("두 문자열은 완벽히 동일하다.");
	}
	else
	{
		puts("두 문자열은 완벽히 동일하지 않다.");
		if(!strncmp(str1, str2, 3))
			// 앞에 3글자만 비교함. 5를 입력하면 5글자를 비교함.
			puts("그러나 앞 세 글자는 동일하다.");
	}
	return 0;
}
*/



/* 램섬웨어, 사생활정보를 다 빼감. 사진이나 개인정보 등 돈줘도 절대 안끝남.
*/



#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[50]; // []괄호를 비워두면 안됨.
	char str2[50];
	char str3[100];
	
	fgets(str1, sizeof(str1), stdin);
	fgets(str2, sizeof(str2), stdin);

	strcpy(str3, str1);
	strcat(str3, str2);

	puts(str3); //또는 printf("%s", str3);
	// fgets는 엔터까지 입력받기때문에 없애주는 작업을 거쳐야됨.
	
	return 0;
}