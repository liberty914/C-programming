/*
C언어의 문자열표현 방법에는 2가지방법이 있다,

1. 배열을 기반으로 문자열 선언
str1은 배열의 이름이기떄문에, 항상 첫번째요소이니까,
변수가 아닌 상수이니까, Our team으로 바꿀수없음
Your team은 배열str1의 변수형태 문자열


2. 포인터를 기반으로 문자열 선언
상수형태로 되있는 문자열을 가리키고있는것 - 상수형태의 문자열이니까 변경불가능함
포인터변수니까 유어팀에서 아워팀으로 가리키는 '대상'을 바꿀수있음
유어팀 아워팀 자체는 상수형태의 문자열이기 때문에, 각 문자를 바꿀수는 없음

상수형태의 정수, 상수형태의 문자열 == 서로 똑같은것임 정수냐 문자열이냐의 차이일 뿐.


배열의 이름은 상수형태의 포인터

포인터변수는 변수



다음페이지

두번째예에서 포인터변수는 Y만 가르키고있음.
첫문자의 주소만 알고있어도 마지막엔 null이 있기때문에 끝을 알수있는거임
(전부다 저장할 필요가없음, null이 있으니까)


첫번째예는 문자열을 상황에따라 바꿔주고싶을때
두번째예는 문자열을 언제나 고정하고싶을때 

your string의 문자를 바꿔주고싶다하면, 배열을 하나 더 선언해서 your string으로 해주고,
포인터로 그것을 가리키면 변경도 됨.
(배열은 상수이지만, 배열 내부의 문자열은 변수이기때문.)

캐릭터도 str1[] 안에 수를 안써도 알아서 10을 인식함
*/


/*
#include <stdio.h>
int main(void)
{
	char str1[] = "Array String";
	char * str2 = "Pointer String";
	printf("%s %s \n\n", str1, str2);

	str2 = "Our String";
	printf("%s %s \n\n", str1, str2);

	str1[0] = 'X';
	printf("%s %s \n\n", str1, str2);

	return 0;
}
*/



/*
포인터여러개가 나온게 포인터배열

배운것 다 복습해야 알수있다.

포인터배열은 각 주소값을 저장

*/

/*
#include <stdio.h>
int main(void)
{
	int num1=10, num2=20, num3=30;
	int * arr[3] = {&num1, &num2, &num3};

	printf("%d \n", *arr[0]);
	printf("%d \n", *arr[1]);
	printf("%d \n", *arr[2]);

	return 0;
}
// 배열은 그 자체만으로도 포인터로 사용할 수 있지만, 0번째요소만을 가리킨다. (차이점 알아보기)
*/



/*
#include <stdio.h>
int main(void)
{
	char * strArr[3] = {"Simple", "String", "Array"};
	printf("%s \n", strArr[0]);
	printf("%s \n", strArr[1]);
	printf("%s \n", strArr[2]);

	return 0;
}
// 포인터는 첫번쨰S의 주소값 두번째S의 주소값 세번째A의 주소값만 가지고있음.
// 포인터변수는  첫글자의 주소값만 가지기때문에, 상관없음
// 상수의 값중 첫글자의 주소값만 가지기때문에.
// 단어가 다나오는 경우는 \0널문자때문에, 첫글자부터 널문자까지 출력이되는것임.
*/




/* 이중포인터 ★★★ 더블포인터, 포인터의 포인터 다 같은말
   이중, 삼중, 사중도 있는데, 삼중부터는 거의안씀
   이중을 이해하면 나머지는 쉬움, 복잡해질뿐. */
   
/* 넘을 가리키는 방법
   num=3.14
   *ptr=3.14
   **dptr=&ptr
   ***tptr=&dptr */

/*
#include <stdio.h>
int main(void)
{
	double num = 3.14;
	double * ptr = &num;
	double ** dptr = &ptr; // 그럼 포인터는 주소값을 가지고있는데 여긴 왜 &연산자를 씀? - 이중접근, &더블포인터를 사용하는 이유이다.
	double * ptr2;

	printf("%9p %9p \n", ptr, *dptr); // ptr그 자체의 주소값을 출력,
	printf("%9g %9g \n", num, **dptr); // num의 값을 출력
	ptr2 = *dptr; // == ptr2 = &num;
	// ★ *dptr은 ptr이기때문에, ptr에 저장되어있는 값을 ptr2에 저장함(그것은 num의 주소값),
	// 결국 ptr2도 num을 가리키는 형태가 됨. 
	// 초기화해서 주소값을 저장하는데 &연산자는 왜 안씀? --> 포인터를 저장하기떄문에 (포인터는 주소값을 가지고있다.)
	*ptr2 = 10.99;
	printf("%9g %9g \n", num, **dptr);
	return 0;
}
*/



/* num = 3.14;
   * ptr = 3.14;
   * ptr2 = 3.14
   ** dptr = 3.14   */



// 마지막 예제 그림 그려보기.

// 포인터배열과 포인터배열의 포인터 형
#include <stdio.h>
int main(void)
{
	int num1=10, num2=20, num3=30;

	int * ptr1 = &num1;
	int * ptr2 = &num2;
	int * ptr3 = &num3;

	int * ptrArr[] = {ptr1, ptr2, ptr3};
	int ** dptr = ptrArr;

	printf("%d %d %d \n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));
	printf("%d %d %d \n", *(dptr[0]), *(dptr[1]), *(dptr[2]));

	return 0;
}






