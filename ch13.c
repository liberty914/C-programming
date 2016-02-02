/*
30이나 40같은 이름이 없는것이 상수

상수형태로 cpu에 저장이됨

그냥 수를 말하는 듯 (변경되지않는, 5는 5 그대로)

심볼릭상수 = 레벨제한, 경험치제한

심볼릭상수는 대문자로 사용함 - 이것은 약속, 한눈에보기쉽게
초기화하지 않으면 쓰레기값으로 초기화됨
*/

/*
#include <stdio.h>
int main(void)
{
	int arr[3] = {0,1,2};
	printf("첫 번째 요소 : %p \n", &arr[0]);
	printf("두 번째 요소 : %p \n", &arr[1]);
	printf("세 번째 요소 : %p \n", &arr[2]);
	printf("배열의 이름  : %p \n", arr);
}
*/


	/*
	arr가 배열의 첫번째 형태를 가리킨다
	주소 동일, arr은 상수형태의 포인터,
	'항상' 배열의 첫번쨰요소만 가리키고,
	변경이 불가능하기때문에 상수형태의 포인터

	포인터는 변수이기때문에, num1도 가리키고, num2도 가리킬수있다, 변수니까.

	arr은 값 자체로 주소값이기때문에 &연산자가 필요없다.
	&연산자는 

	프로그램이 실행될때마다 메모리변수가 다시할당됨 - 그래서 변경이됨.


	배열의 이름도 역시 포인터이기 때문에 포인터로 사용이 가능함.
	*/



/*
#include <stdio.h>
int main(void)
{
	int arr1[3] = {1,2,3};
	double arr2[3] = {1.1, 2.2, 3.3};

	printf("%d %g \n", *arr1, *arr2); // %g %lf 랑 똑같음 %e(지수형 부동소수점수)도 알아보기
	*arr1 += 100;
	*arr2 += 120.5;
	printf("%d %g \n", arr1[0], arr2[0]);

	// 결국 *arr1 == arr1[0]
	return 0;
}
*/



/*
#include <stdio.h> // 포인터와 배열
int main(void)
{
	int arr[3] = {15, 25, 35};
	int * ptr = &arr[0];

	printf("%d %d \n", ptr[0], arr[0]);
	printf("%d %d \n", ptr[1], arr[1]);
	printf("%d %d \n", ptr[2], arr[2]);
	printf("%d %d \n", *ptr, *arr);
} // (조건)포인터변수가 배열의 0번째요소의 주소를 가리키게 했을때,
// 포인터를 배열의 이름처럼 사용할 수도 있다. (실제로는 이렇게는 잘 쓰지 않음, 이해시키기 위한 방법일뿐)
*/


/*
#include <stdio.h> // 그냥 해본거
int main(void)
{
	int num1=10, num2=20, num3=30;
	int * ptr1 = &num1;
	int * ptr2 = &num2;
	int * ptr3 = &num3;

	(*ptr1)++;
	(*ptr1) += 3;
	(*ptr2) -= 5;
	(*ptr2) = (*ptr1) + 10;

	printf("ptr1 = %d  \n ptr2 = %d \n %d \n", *ptr1, *ptr2, *ptr3);
}
*/



/*
#include <stdio.h> // 포인터 연산
int main(void)
{
	int num1; // 4바이트
	double num2; // 8바이트
	int * ptr1 = &num1;
	double * ptr2 = &num2;

	printf("ptr1   : %p \n", ptr1);
	printf("ptr1+1 : %p \n", ptr1+1); // 4증가
	printf("ptr1+2 : %p \n\n", ptr1+2);

	printf("ptr2   : %p \n", ptr2);
	printf("ptr2+1 : %p \n", ptr2+1); // 8증가
	printf("ptr2+2 : %p \n\n", ptr2+2);

	printf("연산전 ptr1 : %p \n", ptr1);
	printf("연산전 ptr2 : %p \n\n", ptr2);

	ptr1++;
	ptr2++;
	printf("연산후 ptr1 : %p \n", ptr1);
	printf("연산후 ptr2 : %p \n\n", ptr2);

	return 0; // 만약 num에다가 상수를 초기화해주어도 값이아닌 주소값이기 때문에 결과가 다르지않음.
}
*/



/*
#include <stdio.h> // 포인터 연산 (2)
int main(void)
{
	int arr[3] = {11, 22, 33};
	int * ptr = arr;
	printf("%d %d %d \n", *ptr, *(ptr+1), *(ptr+2));

	printf("%d", *ptr); ptr++;
	printf("%d", *ptr); ptr++;
	printf("%d", *ptr); ptr--;
	printf("%d", *ptr); ptr--;
	printf("%d", *ptr);
	printf("\n");

	return 0; // for문을 이용하여 자동출력할수도 있을것같다.
} // 자료형만큼 상승함, int는 4만큼, double은 8만큼
*/


// arr[i] == *(ptr+i)

#include <stdio.h>
int main(void)
{
	int arr[3] = {1, 2, 3};
	int * ptr = arr; // 포인터가 0번째 요소를 가리키게 함

	printf("%d %d %d \n", *(ptr+0), *(ptr+1), *(ptr+2));
	printf("%d %d %d \n", ptr[0], ptr[1], ptr[2]); // 포인터 변수
	printf("%d %d %d \n", *(arr+0), *(arr+1), *(arr+2));
	printf("%d %d %d \n", arr[0], arr[1], arr[2]); // 배열의 이름

	return 0;
}
