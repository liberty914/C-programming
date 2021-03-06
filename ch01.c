/*
제목 : 나의 첫 프로그램
// 기능 : Hello World 출력
날짜 : 2015.02.03 (화) 08:00 ~ 10:00
작성자 : 양동호
*/

#include <stdio.h> // 헤더파일 선언, #으로 시작하는 문장을 '전처리기(preprocessor)라고 부름, "미리 무언가를 처리한다."
/* #include라는 것은 "어떤것을 포함하는것을 처리하라" --> "<stdio.h>를 포함하는것을 처리하라"
   <stdio.h>는 STanDard Input Output. Header file이라는 의미
   프로그램 작성시 필요한 헤더파일을 입력하면 됨
   항상 프로그램의 맨 위에 적어야한다. 
   
   printf()라는 라이브러리 함수는 오로지 stdio.h헤더파일에만 있기떄문에, stdio.h를 사용하는것. */


int main(void) // main 함수의 시작, 함수란, "특정한 작업을 수행하는 코드의 집합", int main(void)는 "아무것도 입력받지 않고 출력은 정수로 하겠다"
/* 1. int는 반환(형을 의미함. main함수는 C언어의 표준에 맞게 void를 적지않고 int를 적음. (약속, 표준)
   void main을 사용해도 작동은 되나, 표준을 쓰는것이 오류방지를 위하여 좋음.
   C 언어 자체가 UNIX에서 만들어졌고, 기본 반환형은 int 였으며, 0 이상 값을 정상값, 0 미만 값을 비정상값으로 처리하는 것이 기본이었기 때문
   그래서 int는 native타입, default타입이라고도 함. int끼리 연산을 하면 아무런 변환과정이 필요없어서, 연산속도가 빠름.
   다른 여러종류의 반환형들이 있음.
   
   2. main은 함수의 이름을 의미, 이름은 자유롭게 바꿔쓸수 있다.(하지만 보통 약속처럼 main을 씀)
   main()이라는 빈 박스가 있다고 가정해보자, 화장품을 넣으면 화장품박스, 노트북을 넣으면 노트북박스.
   여기다가는 void라는 아무것도 없는 
   그러나, 거기다가 아래의 printf()라는 출력함수를 넣었기 떄문에, main함수는 출력의 기능을 수행하는 함수가 된다.
   *** main함수는 프로그램 내에 무조건 존재해야하지만, 딱 1개만 있어야한다.
       main함수는 C언어 프로그램에서 하나의 '기준점' 이라고 할수있다.

   3. ()속의 void의 위치는 '입력의 형태' 를 말함, void는 "따로 입력을 받지 않는다"라는 뜻.
   int main() = int main(void), 서로 동일한 의미며, 어느것을 써도 무방하다. void는 생략가능하지만, 확실하게 써두는것이 좋음. */

{ // main함수 프로그램 입력
	printf("Hello world \n"); // 문자열 (Hello world)를 출력, printf는 출력함수 라고 함.
/* 세미클론(;)은 문장의 끝에는 반드시 입력해야한다. 그래야 컴파일러가 문장의 끝임을 인식한다.
   \n은 개행문자, 줄바꿈을 의미, enter와 같음. */
	printf("%d * %d = %d \n", 4, 5, 20);
	printf("%d * %d = %d \n\n", 7, 9, 63);

	printf("Decimal : %d \n", 173); // 10진수 변환
	printf("Decimal : %d \n", 0255);
	printf("Decimal : %d \n", 0xAD);

	printf("Octal : %o \n", 173); // 8진수 변환
	printf("Octal : %o \n", 0255);
	printf("Octal : %o \n", 0xAD);

	printf("Hexadecimal : %x \n", 173); // 16진수 변환
	printf("Hexadecimal : %x \n", 0255);
	printf("Hexadecimal : %x \n\n", 0xAD);

	printf("===================================================\n");
	printf("이름\t\t나이\t\t주소\n");
	printf("===================================================\n");
	printf("홍길동\t\t20\t\t산골짜기 %d동 %d호\n", 102, 205);
	printf("이순신\t\t28\t\t명량 수심 %dm\n\n", 2000);

	return 0; // main함수가 정상적으로 종료, 함수를 빠져나온다는 의미. 사실 안써도 되지만 써주는것이 좋다.(?)
} // main함수의 끝.


/* 위의 문장들을 간단하게 정리하면,

   "출력을 담당하는 printf함수를 써야하는데, 그 함수는 stdio.h 헤더파일에 있으니,
    include라는 전처리기 명령어를 통해, 헤더파일을 불러와라.

	printf함수로 출력을 한 다음, 우리는 컴퓨터에게 정상적으로 종료했다는것을 알려줘야하니 0을 줘야한다.

	0은 정수이기 떄문에 반환형(자료형)은 int(정수형) 이다." */
