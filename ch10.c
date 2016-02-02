
/*
�޸𸮿���
Code(�ڵ�)
Date(��������, static���� - ���α׷��� ����ɶ� �Ҵ� / ���α׷� ����ɶ� �Ҹ�)
Heap(�����Ҵ�)
Stack(����������, �Ű����� - �Լ��� ����ɶ� �Ҵ� / �Լ��� ������)
�뵵�� �ٸ���, ������ �����ϸ� ���ؼ�, 

�Լ��� �ٸ���, ������ ���Ƶ� �ٸ������̴�. (��������, ��������)
*/



/*
#include <stdio.h> // �������� ���� 1

int One(void)
{
	int num = 10;
	num++;
	printf("One : %d \n", num);
	return 0;
}

int Two(void)
{
	int num1 = 20;
	int num2 = 30;
	num1++, num2--;
	printf("num1 & num2 : %d %d \n", num1, num2);
	return 0;
}

int main(void) // ���α׷��� ���۵Ǹ� ������� main�Լ��� ã��.
{
	int num = 17;
	One();
	Two();
	printf("main num : %d \n", num);
	return 0;
}
*/


/*	�Լ��� ȣ��ɶ� ���������� �޸��Ҵ��,
	��ȯ�ɶ� ���������� �Ҹ��
	���� main�Լ� �������� �߰�ȣ ���� �ִ� ��� ������ ��������

	Stack���� (last input first out, LIFO, ���þ˹�) - �ڷᱸ�� �ð��� �ڼ��� ���
	
	USB�� ���� �ð��� �˷��� os���� �α׺м��� �ؾ���.
	
	C���, ��, C++, Java�� �⺻

	reversing - �� ������� ���α׷��� ������ ����, �м��ϴ°�

	������ �⺻������ �� ���־����. */


/*
#include <stdio.h> // �������� ���� 2
int main(void)
{
	int a;
	for (a=0; a<3; a++)
	{
		int num = 0;
		num++;
		printf("%d��°, �������� num : %d\n", a+1, num);
	} // for�� ���� ���������̱� ������ �߰�ȣ�� ���������� �Ҹ��.
	// �߰�ȣ Ż���� �����Խ�, �Ҵ��ϰ� �Ҹ�ǰ� �Ҵ��ϰ� �Ҹ�ǰ�...
	// ��� num�ǰ��� 1

	if (a==3)
	{
		int num=7;
		num++;
		printf("if�� �������� num : %d\n", num);
	}
}
*/


/*
#include <stdio.h> // �������� ���� 3
int main(void)
{
	int num=1;
	if (num==1)
	{
		int num=7;
		num += 10;
		printf("if�� �� �������� num : %d \n", num);
	}
	printf("main�Լ� �� �������� num : %d \n", num);
	return 0;
} // ���������� �ܺο� ����� ������ �̸��� ������ ������.
*/



// �������� - ���α׷� �� ������ ����, ����Ҽ� �ִ� ����. (Data����)


/*
#include <stdio.h> // �������� ���� 1
void Add(int val);
int num; // �������� ����, �⺻ 0���� �ʱ�ȭ��
		// (���������� �ʱ�ȭ �����ָ� �����Ⱚ�� ��)

int main(void)
{
	printf("num : %d \n", num);
	Add(3); // Add�Լ� ȣ��/
	printf("num : %d \n", num);
	num++;
	printf("num : %d \n", num);
	return 0;
}

void Add(int val) // �Ű������� 3�� ������ ��
{
	num += val; // 
}
// ���α׷��� ����� �� ���������� �Ҹ��.
*/


/*
#include <stdio.h> // �������� ���� 2

int Add(int val);
int num = 1;

int main(void)
{
	int num = 5;
	printf("num : %d \n", Add(3));
	printf("num : %d \n", num+9);
	return 0;
}

int Add(int val)
{
	int num = 9;
	num += val;
	return num;
}
*/


/*
// ���������� ���������� �켱���� ��
#include <stdio.h>

int num = 1; // �켱���� 3����

int main(void)
{
	int num = 22; // �켱���� 2����
	if (num == 22)
	{
		int num = 77; // �켱���� 1����
		printf("if���� num = %d \n", num);
	}
	printf("main���� num = %d \n", num);
	return 0;
}
*/



/* ����ƽ���� - ����� �����ȿ����� (��������) - Data������ �Ҵ��
				���α׷��� ����ɶ� , ������ �Ҹ� (��������) �� Ư¡�� �� ���������� */

/*
#include <stdio.h>
void SimpleFunc(void)
{
	static int num1=0; // ���α׷��ӵ��� ������ ���� �����, ������ ����
	int num2=0; // ���������� num2�� �߰�ȣ�� ������ �Ҹ��
	num1++, num2++;
	printf("static : %d, local : %d \n", num1, num2);
}

int main(void)
{
	int i;
	for(i=0; i<3; i++)
		SimpleFunc();
	return 0;
}
*/

/*				�뷮	CPU�ӵ�
	register	1		4
	ĳ��		2		3
	Ram			3		2
	Hard Disk	4		1

����ڰ� �������Ϳ� ������ �����Ѵٰ� �ص�, �����Ϸ��� �˾Ƽ� �Ǵ���.
*/

/*
#include <stdio.h> // �������� -> static���� ����
//int total = 0;

int AddToTotal(int n)
{
	static int total=0;
	total += n;
	return total;
}

int main(void)
{
	int num, i;
	for(i=0; i<3; i++)
	{
		printf("�Է� %d : ", i+1);
		scanf("%d", &num);
		printf("���� : %d \n", AddToTotal(num));
		
	}
	return 0;
}
*/



// ����Լ�, �ַ� "�ϳ��� ž" �����͵��� �ۼ���.
/*
#include <stdio.h>

void Recursive(int num)
{
	if (num<=0) // ����� Ż������
		return; // ����� Ż��
	
	printf("����Լ� ȣ�� %d \n", num);
	Recursive(num-1);
}

int main(void)
{
	Recursive(5);
	return 0;
}
*/



#include <stdio.h> // ����Լ� ���丮��

int Factorial(int n)
{
	if (n==0)
		return 1;
	else
		return n * Factorial(n-1);
}

int main(void)
{
	int num;
	printf("���丮�� ���� �Է��ϼ��� -> ");
	scanf("%d", &num);
	Factorial(num);
	printf("%d! = %d \n", num, Factorial(num));
	return 0;
}

