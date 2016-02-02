

/*	레지스터    - 용량제일작음, 제일빠름
	캐시
	램
	하드디스크   - 용량제일큼, 제일느림 */


// 녹음파일 들어보기

/* fopen = File open 이라는뜻
   
   FILE * fp
   FILE == 구조체를 뜻함 (C언어에서 지원하는 구조체, 따로 선언한적없음, int같은개념)

   write, read모드 */


/*
#include <stdio.h> // 파일 출력 예제

int main(void)
{
	FILE * fp = fopen("data.txt", "wt");
	if(fp==NULL) // 포인터변수로 파일에 간접접근, 가리키는대상이 아무것도 없으면, return-1 비정상종료. 예외처리.
	{
		puts("fail!");
		return -1;
	}

	fputc('A', fp); // 문자A를 fp가 가리키는 파일에 저장
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp); // 파일을 열어줬으니까, 열어줬던 파일 닫으라는 의미
	return 0;
} // 폴더에 메모장이 생기고, 거기에 ABC가 입력됨.
*/


#include <stdio.h> // 파일 입력 예제

int main()
{
	int ch, i;
	FILE * fp = fopen("data.txt", "rt"); // 이미 만들어져있었던것, 위의예제에서
	if(fp==NULL) // 파일이 없으면(널이면) fail출력하고 종료
	{
		puts("fail!");
		return -1;
	}

	for(i=0; i<3; i++) // 파일이 있으니까 for문으로 들어감
	{
		ch = fgetc(fp); // 문자를 하나씩 받음, 내부적으로 주소가 하나씩 증가, fgetc는 c언어에서 만들어진 표준함수, 그런특성(기능)이 있는것임.
		printf("%c \n", ch); // 문자를 하나씩 출력하고 줄을 바꿈
	}
	fclose(fp); // 파일 종료
	return 0;
}



// 녹음파일 들어보기.

// 2진수가 바이너리

// rt는 읽기 텍스트스트림
/* 앞에 f가 붙으면 뒤에 스트림에대한 정보가 들어감. */


/*
#include <stdio.h>
int main(void)
{
	FILE * fp = fopen("simple.txt", "wt");
	if(fp==NULL) {
		puts("파일오픈 실패!");
		return -1;
	}
	fputc('A', fp);
	fputc('B', fp);
	fputs("My name is hong \n", fp);
	fputs("Your name is Yoon \n", fp);
	fclose(fp);
	return 0;
}
*/


/*
#include <stdio.h>
int main(void)
{
	char str[30];
	int ch;
	FILE * fp = fopen("simple.txt", "rt"); // FILE구조체 찾아보기.
	if(fp==NULL) {
		puts("파일오픈 실패!");
		return -1;
	}
	ch=fgetc(fp);
	printf("%c \n", ch);
	ch=fgetc(fp);
	printf("%c \n", ch);

	fgets(str, sizeof(str), fp); // %s가 출력하는건 (엔터)까지
	printf("%s", str);
	fgets(str, sizeof(str), fp); // 차례대로 써주면 알아서 됨.
	printf("%s", str);

	fclose(fp);
	return 0;
}
*/













