/*  ����ü
	�����ڷ���?
	"����� ���� �ڷ���"

	������ �����ϴµ�, �������̳� �ɷ�ġ������ �پ�����
	�̵��� ������ �ϳ��� ������

	����ü �ϳ��� �������ָ� ������ �鸸������ �����ؼ� �Ȱ��� �ٷ������.

	������ �����͸� ǥ���� ��
	������ �ü���� ��κ� ����ü�� �̷��������
	����ü�� �𸣸� �м��� �Ҽ�����
	ǥ���ϰ��� �ϴ� ��ü�� ���ؼ� ����ȭ�Ѵ�.

	struct_�̸�
	����ü�� �������� ������, ����ü

	�޸𸮰����� point��� �ڷ����� �����

	struct_point_pos;
	point�� ��������� �ڷ���
	point�ȿ� int xpos
	pos�� ����ü����
	
*/



/*
#include <stdio.h>

struct point // point��� "����� ���� �ڷ���" ����
{
	int xpos; // x�� ����
	int ypos; // y�� ����
};

struct person // person�̶�� "����� ���� �ڷ���" ����
{
	char name[20];	   // �̸� ����
	char phoneNum[20]; // ��ȭ��ȣ ����
	int age;		   // ���� ����
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
#include <math.h> // sqrt()�Լ�, ��Ʈ���� ���ϴ� �Լ�
struct point // point��� ����ü �ڷ����� ����, 
{
	int xpos;
	int ypos; // �ڷ��� ���� ����ü��� ����
};
int main(void)
{
	struct point pos1, pos2; // ����ü���� pos1, pos2�� ����
	double distance;
	fputs("point1 pos : ", stdout);
	scanf("%d %d", &pos1.xpos, &pos1.ypos); // pos1������� �� �Է�
	fputs("point2 pos : ", stdout);
	scanf("%d %d", &pos2.xpos, &pos2.ypos); // pos2������� �� �Է�

	distance = sqrt((double) // ��Ʈ���� ���ϴ� �Լ�
		((pos1.xpos-pos2.xpos) * (pos1.xpos-pos2.xpos)
		+ (pos1.ypos-pos2.ypos) * (pos1.ypos-pos2.ypos)));
	printf("�� ���� �Ÿ��� %g �Դϴ�. \n", distance);

	// pos1�� x, y ���� pos2�� x, y ���� �Է��ϸ�,
	// �� ���� ���̸� �������.

	return 0;
}
*/



/*
#include <stdio.h>
#include <string.h>

struct person // person�̶�� ����ü�ڷ��� ����
{
	char name[20];
	char phoneNum[20];
	int age; // �ڷ��� ���� ����ü��� ����
};

int main(void)
{
	struct person man1, man2; // ����ü���� ����
	strcpy(man1.name, "Rex"); // man1�Ǹ�� name���ٰ� Rex�� ī��
	strcpy(man1.phoneNum, "010-1234-5678");
	man1.age=26;

	printf("�̸� �Է� : "); scanf("%s", man2.name);
	printf("��ȣ �Է� : "); scanf("%s", man2.phoneNum);
	printf("���� �Է� : "); scanf("%d", &(man2.age));

	printf("�̸� : %s \n", man1.name);
	printf("��ȣ : %s \n", man1.phoneNum);
	printf("���� : %d \n", man1.age);

	printf("�̸� : %s \n", man2.name);
	printf("��ȣ : %s \n", man2.phoneNum);
	printf("���� : %d \n", man2.age);
}
*/



/*
#include<stdio.h> // ����. ����ü �����ϱ�
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

	printf("�̸��� ������ �Է��ϼ���. \n");
	printf("�̸� : "); scanf("%s", &man1.name);
	printf("���� : "); scanf("%s", &man1.sex);

	printf("�г�� ���̸� �Է��ϼ���. \n");
	printf("�г� : "); scanf("%s", &s1.level);
	printf("���� : "); scanf("%d", &s1.age);

	printf("������� ��ǻ�ʹ�? (��Ʈ��/����ũž) \n");
	printf("���� : "); scanf("%s", &c1.kind);
	printf("������ : "); scanf("%s", &c1.menuf);

	printf("������� ����ʹ�? \n");
	printf("��ġ : "); scanf("%d", &m1.size);
	printf("������ : "); scanf("%s", &m1.menuf);

	printf("\n--%s���� ����-- \n���� : %s \n�г� : %s \n���� : %d��\n",
			man1.name, man1.sex, s1.level, s1.age);
	printf("���� : %s \n������ : %s \n��ġ : %d��ġ \n������ : %s \n\n",
			c1.kind, c1.menuf, m1.size, m1.menuf);
}
*/


/*
#include <stdio.h> // ����ü������ �ʱ�ȭ

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
	struct person man = {"ȫ�浿", "010-1234-5678", 25};

	printf("pos�� xpos = %d \n", pos.xpos);
	printf("pos�� ypos = %d \n\n", pos.ypos);
	printf("man�� name = %s \n", man.name);
	printf("man�� phoneNum = %s \n", man.phoneNum);
	printf("man�� age = %d \n\n", man.age);

	return 0;
}
*/



/*
#include<stdio.h> // ����ü �迭�� ����� ����
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
		printf("���� ��ǥ �Է� : ");
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
	// ����ü ������ �ʱ�ȭ
	struct person man = {"ȫ�浿", "010-1234-5678", 26};



	// ����ü �迭�� �ʱ�ȭ
	struct person arr[3] = {
		{"ȫ�浿", "010-1234-5678", "26"},
		{"�̼���", "010-1111-2222", "51"},
		{"�������", "010-9999-9999", "65"}
	}
}
*/



/*
#include <stdio.h> // ����ü �迭�� �ʱ�ȭ
struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void)
{
	struct person arr[3] = {
		{"������", "010-1212-ygyg", 46},
		{"�̼���", "010-1313-smsm", 64},
		{"������", "010-1717-jypj", 44}
	};

	arr[0] = "asdf"; // �� �ȵǴ��� ���� �ٽ� �˾ƺ��� ���ڿ��Լ�?

	int i;
	for(i=0; i<3; i++)
		printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);

	return 0;
}
*/



// ���� �߿��� ����ü ������ �����ͺ���

// -> ȭ��ǥ�� ���̾�, �ǵ����̸� �̷��Ծ���.


/*
#include <stdio.h> // ����ü ������ ������

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

// �ڹٿ� Ŭ���� ��°� ����ü�� ����������. �߾˰�����


/*
#include <stdio.h> // ����ü ������ ������ (�����ͺ����� ����ü�� ����� ����)

struct point
{
	int xpos;
	int ypos;
};

struct circle
{
	double radius;
	struct point * center; // cen�� �ڷ����� ����Ʈ�̱⶧����, �굵 ����Ʈ, main�� �� ��������
};

int main(void)
{
	struct point cen={2, 7};
	double rad=5.5;

	struct circle ring={rad, &cen};
	printf("���� ������ : %g \n", ring.radius);
	printf("���� �߽� [%d, %d] \n",
			(ring.center)->xpos, (ring.center)->ypos);
	return 0;
}
*/




#include <stdio.h> // ����ü ������ ������

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

	pos1.ptr = &pos2; // pos1�� pos2�� ����
	pos2.ptr = &pos3;
	pos3.ptr = &pos1;

	printf("--- ���� ������� --- \n");
	printf("[%d, %d]��(��) [%d, %d] ���� \n",
		pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos);
	printf("[%d, %d]��(��) [%d, %d] ���� \n",
		pos2.xpos, pos2.ypos, pos2.ptr->xpos, pos2.ptr->ypos);
	printf("[%d, %d]��(��) [%d, %d] ���� \n",
		pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos);

	return 0;
}



// �迭ó�� ����ü������ ù��°����� �ּҰ��� �����ϴ�.
// �׷�����~ ��� �˰� ������ ��. �����ѹ� �Ẹ��.




