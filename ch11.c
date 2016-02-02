
/*
배열 - 100개 이상의 정수형을 한번에 선언할수있음.
형이 다르게되면 배열쓸수없음, 그때에는 구조체 사용
배열은 "나란히" 할당이 됨. 따로 선언을 해주면 어디에 선언될지 알수없음
나란히 할당되는데에는 그에대한 이점이 있음
int배열 [4] 일경우 4*4 = 16바이트
더블도 똑같이 곱해짐

[0], [1], [2] = 첨자, index라고함
index는 0부터 시작하기 때문에 0번째요소 라고 읽음. 아주헷갈림 주의 ★
arr[0] = 10; arr0번째요소에다가 10을 저장하겠다

*/



/*
#include <stdio.h>

int main(void)
{
	int arr[5];
	int sum=0, i;

	arr[0]=10, arr[1]=20, arr[2]=30, arr[3]=40, arr[4]=50;

	for(i=0; i<5; i++)
	{
		sum += arr[i];
		// 배열을 쓰는 큰 이유중에 하나.
		// 다른 변수와는 다르게, 반복문을 이용해서 순차적으로 접근이 가능함. (아주 큰 이점!!!)
	}

	printf("합 : %d \n", sum);
	return 0;
}
*/



// 변수도 선언과 동시에 초기화하듯, 배열도 선언하면서 초기화가 가능

// 길이를 자동으로 계산도 해줌

/*
#include <stdio.h>
int main(void)
{
	int arr1[5] = {1,2,3,4,5};
	int arr2[] = {1,2,3,4,5,6,7}; // 배열길이 컴파일러가 자동계산
	int arr3[5] = {1,2}; // arr[2]부터 0으로 초기화 됨
	int len1, len2, len3, i;

	printf("arr1의 크기 : %d \n", sizeof(arr1)); // sizeof연산의 결과로
	printf("arr2의 크기 : %d \n", sizeof(arr2)); // 배열의 크기(byte)를 출력
	printf("arr3의 크기 : %d \n", sizeof(arr3));

	len1 = sizeof(arr1) / sizeof(int); // 20/4=5
	len2 = sizeof(arr2) / sizeof(int); // 28/4=7 배열의 길이를 구하고있음
	len3 = sizeof(arr3) / sizeof(int); // 20/4=5

	for(i=0; i<len1; i++) // 반복문을 이용해 순차적으로 접근이 가능
		printf("%d", arr1[i]);
	printf("\n");

	for(i=0; i<len2; i++) // 배열의 수를 하나씩 출력해주는 중
		printf("%d", arr2[i]);
	printf("\n");

	for(i=0; i<len3; i++)
		printf("%d", arr3[i]);
	printf("\n");
}
*/




#include <stdio.h> // 문제 미완성

int main(void)
{
	int arr[5];
	int max=0, min=0, sum=0, i, n=0;

	printf("5개의 수를 입력하세요...");
	for(i=0; i<5; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	printf("\n");

	max=min=arr[0];

	for(i=1; i<5; i++) // max와 min이 index 0이고, index는 4까지이므로.
	{
		if(max < arr[i])
			max=arr[i];
		if(min > arr[i])
			min=arr[i];
	}

	// if문 많이쓸필요없고 반복문 돌려주면서 자동으로 돌아가게 해주면됨.
	
	printf("최대값 : %d \n", max);
	printf("최소값 ; %d \n", min);
	printf("총 합 : %d \n", sum);
	return 0;
}




/*
#include <stdio.h>
int main(void)
{
	char str[] = "Good Morning!";

	printf("배열의 크기 : %d \n", sizeof(str));
	printf("널 문자 문자형 출력 : %c \n", str[13]); // index는 0부터 시작하기 때문에 널문자는 13임. 14가 아니다. 헷갈림주의
	printf("널 문자 정수형 출력 : %d \n", str[13]); // 널문자는 아스키코드로 '0' 임

	str[12] = '?';
	printf("%s \n", str); // %c가 아니라 문자열은 %s. string의 약자
	// 널문자때문에 14가 됨
	return 0;
}
*/



/*
#include <stdio.h>

int main(void)
{
	char null = '\0';
	char space = ' ';
	printf("%d %d \n", null, space); // 널문자의 아스키코드는 0 // space의 아스키코드는 32
	return 0;
}
*/



// 배열 scanf 쓸때는 &를 쓰지않음 이유는 나중에설명


/*
#include <stdio.h> // NULL문자의 필요성
int main(void)
{
	char str[50];
	int index=0;

	printf("문자열 입력 : "); // Apple 이면 6개 요소 사용, 널까지
	scanf("%s", str);
	printf("입력 받은 문자열 : %s \n", str);

	printf("문자 단위 출력 : ");

	while(str[index] != '\0') // ★이 반복문 조건식 아주 중요함!! 배열과 반복문은 거의 하나의 set임
	{
		printf("%c", str[index]);
		index++;
	}
	printf("\n");
} // 널문자의 존재여부에 따라 문자냐, 문자열이냐가 구분이 됨, 널문자가 있으면 문자열임
*/



/*
#include <stdio.h>
int main(void)
{

	int arr[5];
	int max, min, sum, i;
	printf("입력 : ");

	for(i=0; i<5; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\n");

	max=min=arr[0]; // max와 min을 모두 0으로 초기화한다. (이렇게도 가능)
	for(i=1; i<5; i++) // 반복문을 따로따로 쓸 필요없다,
	{
		if(max < arr[i])
			max=arr[i];
		if(min > arr[i])
			min=arr[i];
		sum =+ arr[i];
	}
	printf("최대값 : %d\n", max);
	printf("최소값 : %d\n", min);
	printf("총 합 : %d \n", sum);
	return 0;
}
*/



/*
#include <stdio.h> // 문제 1. 영단어를 입력받고 길이를 계산하여 출력하기.
int main(void)
{
	char voca[100];
	int len=0;

	printf("영단어 입력 : ");
	scanf("%s", voca); // 문자열 배열은 & 안씀 [100]도 쓰면안됨
	
	while(voca[len] != '\0') //  '\0' 대신 0을 입력해도됨.
	//{
	//	printf("%c", voca[len]);
		len++;
		//a=len;
	//}
	
	//len = sizeof(voca[]) / sizeof(char); 계산할 필요가 없는것. 반복문의 len을 출력해주면 되는것이니까.
	
	printf("입력한 영단어의 길이는 %d 입니다. \n", len);
	return 0;
}
*/



// 11일차 문제 3개 풀어보고, 9일차 마지막문제 써보고 예상하기, 포인터 기초


/*
#include <stdio.h> // 마지막문제, 영단어 역순출력
int main(void)
{
	char voca[100];
	int len=0, i;
	char temp; // 임시변수 a와 b의 값을 서로 변경하기 (스왑)

	printf("intput : ");
	scanf("%s", voca);

	while(voca[len] != '\0')
		len++;

	for(i=0; i<len/2; i++) // 정렬의 방법중에 하나.
	{
		temp = voca[i];
		voca[i] = voca[(len-i)-1];
		voca[(len-i)-1]=temp;
	}
	printf("result :%s \n", voca);
	return 0;
}
*/