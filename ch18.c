/*  구조체
	구조자료형?
	"사용자 정의 자료형"

	게임을 구현하는데, 아이템이나 능력치같은게 붙어있음
	이들의 변수를 하나로 묶어논것

	구조체 하나만 선언해주면 나머지 백만유저를 복사해서 똑같이 다룰수있음.

	복잡한 데이터를 표현할 때
	윈도우 운영체제는 대부분 구조체로 이루어져있음
	구조체를 모르면 분석을 할수없음
	표현하고자 하는 객체에 대해서 구조화한다.

	struct_이름
	여러체제 관리들을 묶은것, 구조체

	메모리공간에 point라는 자료형이 생기고

	struct_point_pos;
	point는 사용자정의 자료형
	point안에 int xpos
	pos는 구조체변수
	
*/



/*
#include <stdio.h>

struct point // point라는 "사용자 정의 자료형" 정의
{
	int xpos; // x축 저장
	int ypos; // y축 저장
};

struct person // person이라는 "사용자 정의 자료형" 정의
{
	char name[20];	   // 이름 저장
	char phoneNum[20]; // 전화번호 저장
	int age;		   // 나이 저장
};

int main(void)
{
	struct point a, b, c;
	a.xpos = 10;
	a.ypos = 20;
	b.xpos = 30;
	b.ypos = 40;
	c.xpos = 50;
	c.
	printf("%d", a.xpos);

}
*/



/*
#include <stdio.h>
#include <math.h> // sqrt()함수, 루트값을 구하는 함수
struct point // point라는 구조체 자료형을 정의, 
{
	int xpos;
	int ypos; // 자료형 내에 구조체멤버 선언
};
int main(void)
{
	struct point pos1, pos2; // 구조체변수 pos1, pos2를 선언
	double distance;
	fputs("point1 pos : ", stdout);
	scanf("%d %d", &pos1.xpos, &pos1.ypos); // pos1멤버들의 값 입력
	fputs("point2 pos : ", stdout);
	scanf("%d %d", &pos2.xpos, &pos2.ypos); // pos2멤버들의 값 입력

	distance = sqrt((double) // 루트값을 구하는 함수
		((pos1.xpos-pos2.xpos) * (pos1.xpos-pos2.xpos)
		+ (pos1.ypos-pos2.ypos) * (pos1.ypos-pos2.ypos)));
	printf("두 점의 거리는 %g 입니다. \n", distance);

	// pos1의 x, y 값과 pos2의 x, y 값을 입력하면,
	// 두 점의 차이를 출력해줌.

	return 0;
}
*/



/*
#include <stdio.h>
#include <string.h>

struct person // person이라는 구조체자료형 정의
{
	char name[20];
	char phoneNum[20];
	int age; // 자료형 내의 구조체멤버 선언
};

int main(void)
{
	struct person man1, man2; // 구조체변수 선언
	strcpy(man1.name, "Rex"); // man1의멤버 name에다가 Rex를 카피
	strcpy(man1.phoneNum, "010-1234-5678");
	man1.age=26;

	printf("이름 입력 : "); scanf("%s", man2.name);
	printf("번호 입력 : "); scanf("%s", man2.phoneNum);
	printf("나이 입력 : "); scanf("%d", &(man2.age));

	printf("이름 : %s \n", man1.name);
	printf("번호 : %s \n", man1.phoneNum);
	printf("나이 : %d \n", man1.age);

	printf("이름 : %s \n", man2.name);
	printf("번호 : %s \n", man2.phoneNum);
	printf("나이 : %d \n", man2.age);
}
*/



/*
#include<stdio.h> // 문제. 구조체 설계하기
struct man
{
	char name[10];
	char sex[6];
};

struct student
{
	char level[6];
	int age;
};

struct computer
{
	char kind[10];
	char menuf[10];
};

struct moniter
{
	int size;
	char menuf[10];
};

int main(void)
{
	struct man man1, man2;
	struct student s1, s2;
	struct computer c1, c2;
	struct moniter m1, m2;

	printf("이름과 성별을 입력하세요. \n");
	printf("이름 : "); scanf("%s", &man1.name);
	printf("성별 : "); scanf("%s", &man1.sex);

	printf("학년과 나이를 입력하세요. \n");
	printf("학년 : "); scanf("%s", &s1.level);
	printf("나이 : "); scanf("%d", &s1.age);

	printf("사용중인 컴퓨터는? (노트북/데스크탑) \n");
	printf("종류 : "); scanf("%s", &c1.kind);
	printf("제조사 : "); scanf("%s", &c1.menuf);

	printf("사용중인 모니터는? \n");
	printf("인치 : "); scanf("%d", &m1.size);
	printf("제조사 : "); scanf("%s", &m1.menuf);

	printf("\n--%s씨의 정보-- \n성별 : %s \n학년 : %s \n나이 : %d세\n",
			man1.name, man1.sex, s1.level, s1.age);
	printf("종류 : %s \n제조사 : %s \n인치 : %d인치 \n제조사 : %s \n\n",
			c1.kind, c1.menuf, m1.size, m1.menuf);
}
*/


/*
#include <stdio.h> // 구조체변수의 초기화

struct point
{
	int xpos;
	int ypos;
};

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void)
{
	struct point pos = {10, 20};
	struct person man = {"홍길동", "010-1234-5678", 25};

	printf("pos의 xpos = %d \n", pos.xpos);
	printf("pos의 ypos = %d \n\n", pos.ypos);
	printf("man의 name = %s \n", man.name);
	printf("man의 phoneNum = %s \n", man.phoneNum);
	printf("man의 age = %d \n\n", man.age);

	return 0;
}
*/



/*
#include<stdio.h> // 구조체 배열의 선언과 접근
struct point
{
	int xpos;
	int ypos;
};

int main(void)
{
	struct point arr[3];
	int i;

	for(i=0; i<3; i++)
	{
		printf("점의 좌표 입력 : ");
		scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
	}
	for(i=0; i<3; i++)
		printf("[%d, %d] \n", arr[i].xpos, arr[i].ypos);

	return 0;
}
*/


/*
int main(void)
{
	// 구조체 변수의 초기화
	struct person man = {"홍길동", "010-1234-5678", 26};



	// 구조체 배열의 초기화
	struct person arr[3] = {
		{"홍길동", "010-1234-5678", "26"},
		{"이순신", "010-1111-2222", "51"},
		{"세종대왕", "010-9999-9999", "65"}
	}
}
*/



/*
#include <stdio.h> // 구조체 배열의 초기화
struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void)
{
	struct person arr[3] = {
		{"양현석", "010-1212-ygyg", 46},
		{"이수만", "010-1313-smsm", 64},
		{"박진영", "010-1717-jypj", 44}
	};

	arr[0] = "asdf"; // 왜 안되는지 상세히 다시 알아보기 문자열함수?

	int i;
	for(i=0; i<3; i++)
		printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);

	return 0;
}
*/



// 아주 중요한 구조체 변수와 포인터변수

// -> 화살표를 많이씀, 되도록이면 이렇게쓸것.


/*
#include <stdio.h> // 구조체 변수와 포인터

struct point
{
	int xpos;
	int ypos;
	char name[10];
};

int main(void)
{
	struct point pos1 = {1, 2};
	struct point pos2 = {100, 200};
	struct point * pptr = &pos1;

	(*pptr).xpos += 4;
	(*pptr).ypos += 5;
	printf("[%d, %d] %s\n", pptr->xpos, pptr->ypos, pptr->name);

	pptr = &pos2;
	pptr->xpos += 1;
	pptr->ypos += 2;
	printf("[%d, %d] \n", (*pptr).xpos, (*pptr).ypos);

	return 0;
}
*/

// 자바에 클래스 라는게 구조체와 거의유사함. 잘알고있자


/*
#include <stdio.h> // 구조체 변수와 포인터 (포인터변수를 구조체의 멤버로 선언)

struct point
{
	int xpos;
	int ypos;
};

struct circle
{
	double radius;
	struct point * center; // cen의 자료형이 포인트이기때문에, 얘도 포인트, main이 더 위에있음
};

int main(void)
{
	struct point cen={2, 7};
	double rad=5.5;

	struct circle ring={rad, &cen};
	printf("원의 반지름 : %g \n", ring.radius);
	printf("원의 중심 [%d, %d] \n",
			(ring.center)->xpos, (ring.center)->ypos);
	return 0;
}
*/




#include <stdio.h> // 구조체 변수와 포인터

struct point
{
	int xpos;
	int ypos;
	struct point * ptr;
};

int main(void)
{
	struct point pos1={1, 1}; // pos1={1, 1, &pos2};
	struct point pos2={2, 2};
	struct point pos3={3, 3};

	pos1.ptr = &pos2; // pos1과 pos2를 연결
	pos2.ptr = &pos3;
	pos3.ptr = &pos1;

	printf("--- 점의 연결관계 --- \n");
	printf("[%d, %d]와(과) [%d, %d] 연결 \n",
		pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos);
	printf("[%d, %d]와(과) [%d, %d] 연결 \n",
		pos2.xpos, pos2.ypos, pos2.ptr->xpos, pos2.ptr->ypos);
	printf("[%d, %d]와(과) [%d, %d] 연결 \n",
		pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos);

	return 0;
}



// 배열처럼 구조체변수와 첫번째멤버의 주소값은 동일하다.
// 그렇구나~ 라고 알고만 있으면 됨. 예제한번 써보기.




