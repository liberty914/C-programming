
/*
포인터

메모리는 1바이트 단위로 주소가 할당되어있음
에스크립터?
&num - 넘의 주소값을 의미
포인터변수는 주소를 저장하기위한 변수 (16진수형태) %p로 출력하면 알수있음.
(Q. 왜 %x(16진수)와 같은값을 지니는 것인지는 아직 궁금하다)

int * ptr
int* ptr 둘중에하나만 쓰자

int num = 10 ; 
int * ptr = &num; 선언과 동시에 초기화
ptr = &num1; // 포인터변수 자체를 의미, 주소를 저장할수있다. 변수이니까 값을 바꿀수있다.(num->num1)
*ptr = 30(num1) // 포인터변수가 가르키는 변수로 가라는 뜻. 정수를 저장할수 있다.


*/

/*
#include <stdio.h>
main()
{
	int num=10;	// 정수형변수 num 메모리 할당
	int * pit;	// 포인터변수 pit 메모리 할당
	pit = &num;	// num의 주소를 pit에 저장
}
*/


/*
#include <stdio.h>
main()
{
	int num=10;
	int * pit = &num;	// 선언과 동시에 초기화
	
	*pit = 50;	// 포인터변수 pit가 가리키는 곳에 50을 저장

	printf("정수형 변수 num값 : %d \n", num);
	printf("포인터 변수 pit값 : %d \n", *pit);
}
*/



/*
#include <stdio.h>
int main(void)
{
	int num1 = 100, num2 = 100;
	int * pit;

	pit = &num1;	// 포인터 pit이 num1을 가리킴 (num1의 주소값을 저장하고있다.)
	(*pit) += 30;	// num1 += 30; 과 동일

	pit = &num2;	// 포인터 pit이 num2를 가리킴
	(*pit) -= 30;	// num2 -= 30; 과 동일

	printf("num1 : %d \n", num1);
	printf("num2 : %d \n", num2);
	return 0;
}
*/



/*
// 잘못된 포인터의 사용

#include <stdio.h>
int main(void) // 잘못된 예 1
{
	int * pit;
	*pit = 100;
}
// 포인터변수 pit은 쓰레기값으로 초기화 됨
// 따라서 100이 저장되는 위치는 어디인지 알 수 없음



int main(void) // 잘못된 예 2
{
	int * pit = 250;
	*pit = 10;
}
// 포인터변수에 250을 저장한다?
// 포인터변수는 주소를 저장하는 변수이며, 수는 저장 불가능하다.
// 주소를 저장할 때는 & 연산자가 필요함



int main(void) // 잘못된 예 3
{
	int num;
	int pit = &num;
}
// 포인터변수가 아닌 일반변수는 주소를 저장할수 없다.
// 에스크립터(*) 을 빼먹었다.



int main(void) // 잘못된 예 4
{
	int num1;
	double * pit1 = &num1;

	// 또는

	double num2;
	int * pit2 = &num2;

	// 또는

	unsigned int num3;
	int * pit3 = &num3;
}
// 포인터변수가 연결할 변수와 똑같은 자료형 이어야 한다.
*/



/*

포인터변수에는 무조건 변수로 초기화시켜야한다. 숫자로 초기화할수없다

1문제 . 안된다.
// 일반변수는 주소값인지 정수인지 판단못함, 무조건 정수로만 받아들임, 주소값의 형태도 정수로만 받아들임. 그러니까 문제가 발생됨.

2문제. 사용이 되긴되는데, int를 double에 넣으면 괜찮지만, double을 int에 넣으면 소수점이 짤린다.
- 이렇게 사용하면 안됨.




마지막문제
배게임
소멸이되고, 출력이됨.
반환값은 하나밖에 안됨 - 포인터로 해결할수 있음.


*/

/*
#include <stdio.h> // 면접 단골질문 - 포인터를 왜 씁니까?

void go_south_east(int *lat, int *lon)
{
	*lat = *lat - 1;
	*lon = *lon + 1;
}

int main()
{
	int latitude = 32;
	int longitude = -64;
	//int * lat = &latitude;
	//int * lon = &longitude;
	
	go_south_east(&latitude, &longitude); // 주소값을 넘겨주고있음. int *lat = &latitude
	printf("현재 위치 : [%d, %d]\n", latitude, longitude);

	return 0;
} // 개념이해 필요할듯.
*/


/*
scanf함수는 num의 주소값을 넘겨주게되면 입력을 받고, 입력받은걸 num변수에 저장함.
&의 비밀

배열 앞에다가는 &를 쓰지않았음

*/




#include <stdio.h>
int main(void)
{
	int num = 10;
	int * ptr1 = &num;
	int * ptr2 = ptr1;

	(*ptr1)++; // 괄호를 안치면 증감식이 적용이안된다.
	(*ptr2)++; // 왜??

	printf("%d \n", num); // num대신 *ptr1)으로 해줘도 됨.
	return 0;
}




/* num=20
   *ptr1=20;
   *ptr2=20; 3가지방법으로 num에게 접근할수있다. */




/*
#include <stdio.h>
int main(void)
{
	int num1 = 10;
	int num2 = 20;
	int * ptr1 = &num1;
	int * ptr2 = &num2;
	// int a=0;

	*ptr1 += 10; // 괄호를 치나 안치나 결과는 같다.
	*ptr2 -= 10; // 왜???

	// ptr1 = &a;
	ptr1 = &num2;
	ptr2 = &num1;

	printf("*ptr1 = %d \n", *ptr1);
	printf("*ptr2 = %d \n", *ptr2);
}
*/