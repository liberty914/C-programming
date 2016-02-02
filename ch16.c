/*
스트림은 os가 지원해줌
단방향, 입력스트림 출력스트림

문자는 문자열이 아님, 문자1개만 putchar 인자를 정수형으로 하나받음
f갑승ㄴ 정수와 주소갑승 ㄹ입력-  스트림에 대한 정보를 받음

겟케릭터는 인자를 전달안함, 
에프겟씨는 스트림에대한 정보를 적어줘야함.(?)

겟케릭터는 문자를 입력받는함수
fgetc는 스트림에대한 정보도 입력해줘야함, 표준입출력 말고 다른것도 적을거임 (파일스트림)

*/

/*
#include <stdio.h>
int main(void)
{
	int ch1, ch2;
	
	ch1 = getchar();	// 문자 입력
	ch2 = fgetc(stdin);	// 엔터키 입력

	putchar(ch1);		// 문자 출력
	fputc(ch2, stdout);	// 엔터키 출력

	return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
	int ch;
		ch = getchar();
		if(ch==EOF)
			return;
		putchar(ch);
	return 0;
}
*/



/* 엔터까지 입력을 받는것. scanf랑은 다르다, 문자하나만 입력받고 출력하는함수. 파일에서 반복문써서 하나씩 입력받을때 많이씀. */

/*  eof end of file 파일의 끝
	eof 파일에 끝에 도달하면 반복문을 끝내는것 */

// 아스키코드 32개차이, 대소문자. if문

//it에서 c언어가 가장쉬움

/*
#include <stdio.h> // 알파벳 바꾸기
int main(void)
{
	int ch1, ch2;

	ch1 = getchar();
	ch2 = fgetc(stdin);
	if('a' <= ch1 && ch1 <= 'z')
		ch1 -= 32; // if문이 대문자로 바뀌고 또 if문이 다시 실행되기때문에 첫번째if문이 작동을 안하는것 '처럼' 보이는것이었음. break를 통해 빠져나가야 하는데!!
	else if('A' <= ch1 && ch1 <= 'Z')
		ch1 += 32; // putchar(ch1+32)로 해줘도 됨!!
	else
		printf("알파벳을 입력하십시오. \n");

	putchar(ch1);
	fputc(ch2, stdout);

	return 0;
}
*/

// f9- f10- f7 디버깅모드 사용해서 찾아보기... 방법을 모름

// 익스크루시브or로 해결가능, 그냥 or는 사용하면안됨. 잘못된경우가 나올수있음.
// 64 + 32 + 1
// xor는 하나라도 참이면 참



// 주소를 전달, fputs 두번째에는 스트림에대한 정보를 출력함
// puts와 fputs는 동일함. fputs를 쓴느 이유는 다른 스트림에 쓰는 것을 정보해주기위함(?) 


/*
#include <stdio.h>
int main(void)
{
	char * str = "simple String";

	printf("1. puts test ----- \n");
	puts(str); // puts함수는 원래 개행문자까지 되있는거임.
	puts("So Simple String");

	printf("2. fputs test ----- \n");
	fputs(str, stdout); // fputs 이것도 자동 개행
	printf("\n");
	fputs("So Simple String", stdout);
	printf("\n");

	return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
	char str[7]; // 7byte의 메모리공간 할당
	gets(str); // 입력받은 문자열을 배열 str에 저장 
	...
}

int main(void)
{
	char str[7];
	fgets(str, sizeof(str), stdin)
	... // stdin으로부터 문자열을 입력받아서 str에 저장
}
*/

// 문자열 입출력함수 왜쓰는걸까? scanf랑 printf를 알고있는데.
// 쓰는용도가 다름. 서식의형태를 지정할수있었음 %d같은
// 단순하게 입출력받을때는 지금의 입출력함수를 사용하면됨. 좀더 경량화 한것임. 짧아서!! 이유 한가지밖에 없음, 짧아서.

// stdin은 표준입력, 키보드를 의미.
// str길이만큼(sizeof(str)) , 배열의이름, 크기, 스트림정보까지)
// scanf는 띄어쓰기를 입력못함.


/*
#include <stdio.h>
int main(void)
{
	char str[7]; // 널문자가 7번째문자에 반드시 들어가야함.
	int i;

	for(i=0; i<3; i++)
	{
		fgets(str, sizeof(str), stdin); // 띄어쓰기와 enter값까지 입력받을수 있음
		printf("Read %d : %s \n", i+1, str);
	}
	return 0;
}
*/


/*
가상의 다리 = 스트림
버퍼라는 임시기억저장소.
버퍼에 차곡차곡 쌓이고 다 쌓이면 한번에 보내줌.


창고에있는 물건들을 리어카에 담아서 한번에 옮기는게 낫다. 그 리어카가 버퍼
scanf를 연달아 쓰면 버퍼의 문제가 발생함.

*/


#include <stdio.h>
int main(void)
{
	char ID[7];
	char name[10];

	fputs("주민번호 앞 6자리 입력 : ", stdout);
	fgets(ID, sizeof(ID), stdin); // 엔터와 널문자까지 7로 부족함.
	fflush(stdin); // 버퍼를 비우는 함수

	fputs("이름 입력 : ", stdout);
	fgets(name, sizeof(name), stdin); // 버퍼에 남아있던 엔터를 입력해버림.

	printf("주민번호 : %s \n", ID);
	printf("이름 : %s \n", name);

	return 0;
} // 주민번호 앞자리만 입력하라했는데 123456-1234657 을 다 입력하는사람도 있기때문에 [8]로 바꿔주면 끊임없이 문제가 발생함.












