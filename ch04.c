/*
#include<stdio.h> // ����������� ���(����)
int main(void)
{
	float num1, num2;

	printf("����ϰ��� �ϴ� �ΰ��� ���� �Է��ϼ���. -> ");
	scanf("%f %f", &num1, &num2);
	
	printf("\n\n%f + %f = %f", num1, num2, num1 + num2);
	printf("\n%f - %f = %f", num1, num2, num1 - num2);
	printf("\n%f * %f = %f", num1, num2, num1 * num2);
	printf("\n%f / %f = %f", num1, num2, num1 / num2); // ���� int�� ���� �޾�����, �������� �Ǽ��� ���ü� �ִ�. ������ �Ǽ��� ��������ȯ ���, ����ϰ��� �ϴ� ���ڸ� %f�� ǥ���ϰ�, ����� �� ���� (float)�� �Է���.
	printf("\n%f %% %f = %d\n\n", num1, num2, (int)num1 % (int)num2); // �������� �Ǽ��� �ɼ�����, �׷��Ƿ� ������(int)�� ��������ȯ�� �����.
	// %�� 2���� ���� ���� - %�� �ϳ��� ������ �����Ϸ��� "�� ��������?" �ϸ� ��ٸ�������

	return 0;
}
*/



/* ���迬����
if(a>10) { ... }
"a�� 10���� ũ�ٸ�, ��ȣ���� �����Ͻÿ�" */

/*
#include<stdio.h>
int main(void)
{
	float su1 = 3.01, su2 = 3.0;
	printf("���� su1�� su2�� ũ�� �� ��� : %d\n", su1 <= su2);
	printf("���� su1�� su2�� ũ�� �� ��� : %d\n", su1 >= su2);
	printf("���� su1�� su2�� ũ�� �� ��� : %d\n", su1 == su2);
	printf("���� su1�� su2�� ũ�� �� ��� : %d\n", su1 != su2);

	return 0; // �� ��ɹ��� �����, ���ϰ�� 1, �����ϰ�� 0�� ǥ���Ͽ� �˷��ش�.
} // 0�� �ƴ� ��簪�� ���̴�, �ٸ� 1�� ��ǥ���� ���� ���̴�.
*/



/* ���� ���� ������ a=a+b ---> a+=b
�ڵ��� ����ӵ��� �������ϱ� ����, ����ܰ踦 �ϳ� �ٿ��ش�. */

/*
#include<stdio.h>
int main(void)
{
	int su1, su2;
	su1 = su2 = 5;

	printf("su1 + 1 = %d\n", su1 += 1); // su1���ٰ� 1�� ���� ���� su1���ٰ� ����(����)
	printf("su1 - 1 = %d\n", su1 -= 1);
	printf("su1 * su2 = %d\n", su1 *= su2);
	printf("su1 / su2 = %d\n", su1 /= su2);
	printf("su1 %% su2 = %d\n", su1 %= su2);

	return 0;
}
*/



/* ��������, ���� ������ �Ǻ��ϴ� ����
"or" (||, Shift + \) �� �Ǵ��̶�� ��, +�� �ǹ�, ���߿� �ϳ��� ���̸� ��
"and" (&&) ������ �Ѵ� ���϶��� ���� ���
"not" (!) �� ���� �ݴ��(1�� 0����, 0�� 1��)
"xor" (^, Exclusive or)���ΰ��� �������� ����(0), ���ΰ��� �ٸ����� ��(1) */

/*
#include <stdio.h> // ����
int main(void)
{
	int num1=10;
	int num2=20;
	int result1, result2, result3;

	result1=(num1==10 && num2==12);
	result2=(num1<10 || num2>12);
	result3=(!num1);

	printf("result1 : %d \n", result1);
	printf("result2 : %d \n", result2);
	printf("result3 : %d \n", result3);

	return 0;
}
*/



/* ����������, ���� 1���� �Ǵ� 1�����ϴ±��
   for, �ݺ��� ���� ������ ���� ��, �ݵ�� �ܿ��!
   ++, --�� ��ġ�� ���� ó���ϴ� ������ �޶���
   ����������, ���������� */

/*
#include <stdio.h> // ����
int main(void)
{
	int num1 = 12;
	int num2 = 12;

	printf("num1 : %d \n", num1);
	printf("num1++ : %d \n", num1++); // ��������
	printf("num1 : %d \n\n", num1);

	printf("num2 : %d \n", num2);
	printf("++num2 : %d \n", ++num2); // ��������
	printf("num2 : %d \n\n", num2);

	return 0;
}
*/



/*
#include<stdio.h>
int main(void)
{
	int num1 = 10;
	int num2 = (num1--) + 2; // ��ȣ�� �����־ ��������ϴ°� �ƴ�, ������

	printf("num1 : %d\n", num1); // int���� �̸� ������ ���±⶧���� 9�� ��µ�
	printf("num2 : %d\n", num2); // ���������� num2�� ���������ڴ� ������� �ʾұ� ������ 12�� ��µ�

	return 0;
}
*/



/*
#include <stdio.h> // �����ϰ� ����� ����
int main(void)
{
	int a=5, b=6, c=10, d;
	d = ++a * b--;
	printf("a = %d, b = %d, d = %d\n\n", a, b, d); // ���� - 6, 5, 36 (����)
	
	d = a++ + ++c - b--;
	printf("a = %d, b = %d, c = %d, d = %d\n\n", a, b, c, d); // ���� - 7, 4, 11, 12 (����)

	a=1;
	b=0;
	d = a++ || ++b * d-- / ++c;
	printf("a = %d, b = %d, c = %d, d = %d\n\n", a,b,c,d); // ���� - 2, 1, 12, 1 (2, 0, 11, 1)

	d = b++ && ++a / ++c * d++;
	printf("a = %d, b = %d, c = %d, d = %d\n\n", a,b,c,d); // ���� - 3, 2, 13, 1 (2, 1, 11, 0)

	return 0;
}
*/



/* ��Ʈ������, 
   "~" ƿ��(Tilde)��� ����, ����ƴ� ����
   "<<, >>" ����Ʈ������ 0011�� 1100���� �ű�ų�, 1100�� 0011�� �ű�, �ڿ� ä�����°� 0���� ä���� */

/*
#include <stdio.h> // ��Ʈ�����ڷ� ����ϱ�
int main(void)
{
	int num1 = 12;
	int num2 = 7;
	int result = num1 | num2;

	printf("su1�� su2�� ���� : %d\n", result);
	//          1100
	// ��Ʈ���� 0111
	//     or = 1111 = 15 ,  and = 0100 = 4 ,  xor = 1011 = 11
	return 0;
}
*/



/*
#include <stdio.h> // ��Ʈ ����������
int main(void)
{
	int su1 = 10;
	su1 = ~su1;
	printf("su1�� ��Ʈ���� : %d\n", su1);
	// 15�� �����ϸ� -15�� �����ʴ´�. 0�� 1�� ���� �ٲ�Ե�.
	return 0;
}   // Q. 1111���� �� 0000�� ���� �ʴ°��ϱ�?
*/



/*
#include <stdio.h> // ��Ʈ �̵�������
int main(void)
{
	int op = 30, result;
	result = op << 3; // 1��Ʈ �������� �̵���ų������ 2�辿 �þ. 30 - 60 - 120 - 240, �������� �̵��ϸ� 1/2�� ������.
	printf("30�� �������� 3��Ʈ �̵���Ų ��� = %d\n", result);
	// 0001 1110 ---> 1111 0000 ���� �̵�
	return 0;
}
*/

/*
#include <stdio.h> // sizeof������ : ũ�⸦ ����Ʈ ������ ǥ��
int main(void)
{
	int a=0, b=0, c=0;
	printf("������ ũ��� %d�Դϴ�. \n", sizeof(int));
	return 0;
}	// int(������)�� 4byte�� ��Ÿ���°�
*/

/*
#include <stdio.h>
main()
{
	int su1 = 123;
	char ch = 'a';
	float su2 = 12.345;

	printf("���� su1�� ũ�� : %d byte\n", sizeof(su1)); // 4����
	printf("������ �ڷ����� ũ�� : %d byte\n", sizeof(char)); // 1���� 
	printf("����(su1+su2)�� ũ�� : %d byte\n", sizeof(su1+su2)); // 8���� (����4) - 4����Ʈ¥���� 4����Ʈ�� ���ϴ�, ���°� ���⶧���� 4����Ʈ�� ����.
	printf("�Ǽ� 1.23456�� ũ�� : %d byte\n", sizeof(1.23456)); // 8���� - �ڵ����� double�� �ν�
	printf("������ ��� 'a'�� ũ�� : %d byte\n", sizeof('a')); // 1���� (����4) - �ҹ���a�� == 97 -> ���������� 4�� ��µ�.
	return 0;
}
*/





// �� ch4, Exam ��

// 1. ���� �Է� �޾�, Ȧ/¦���� �����Ͽ� ����Ͻÿ�.
/*
#include <stdio.h>
int main(void)
{
	int num;
	printf("���� �Է��ϼ���. --> ");
	scanf("%d", &num);
	if (num%2==0) // if������ ;(����Ŭ��)�� ���� �ͼ��� �ȵȴ�.
	 //(a > 10 > 20) --> (&&������ �̿�)
		printf("%d�� ¦���Դϴ�.\n\n", num);
	if (num%2!=0)
		printf("%d�� Ȧ���Դϴ�.\n\n", num);
}
*/


// 2. ���� �Է� �޾�, 3�� ����̸� ����Ͻÿ�.
/*
#include <stdio.h>
int main(void)
{
	int num;
	printf("3�� ������ �����Ǵ� ���� �Է��ϼ��� --> ");
	scanf("%d", &num);
	if (num % 3 == 0)
	{
		printf("�Է��Ͻ� ���� 3�� ����� �½��ϴ�.\n\n");
	}
	if (num % 3 != 0)
	{
		printf("�Է��Ͻ� ���� 3�� ����� �ƴմϴ�.\n\n");
	}
}
*/


// 3. �� ���� �Է¹޾� ū ���� ����Ͻÿ�.
/*
#include <stdio.h>
int main(void)
{
	int n1, n2;
	printf("���� �� ���� �Է��ϼ��� --> ");
	scanf("%d %d", &n1, &n2);
	if(n1>n2)
	{printf("%d�� �� ũ�׿�\n\n", n1);}
	if(n1<n2)
	{printf("%d�� �� ũ�׿�\n\n", n2);}
	if(n1==n2)
	{printf("%d�� %d�� ���� �� �Դϴ�.\n\n", n1, n2);}
}
*/


// 4. �� ���� �Է¹޾� ū ���� ����Ͻÿ�.
/*
#include <stdio.h>
int main(void)
{
	int n1, n2, n3;
	printf("���� �� ���� �Է��ϼ��� --> ");
	scanf("%d %d %d", &n1,&n2,&n3);
	if(n1 > n2 && n1 > n3)
	{printf("%d�� ���� Ů�ϴ�\n\n", n1);}
	if(n2 > n1 && n2 > n3)
	{printf("%d�� ���� Ů�ϴ�\n\n", n2);}
	if(n3 > n1 && n3 > n2)
	{printf("%d�� ���� Ů�ϴ�\n\n", n3);}
} // ���� �� ������ ����.
*/



// 5. �� ���� �Է¹޾� ū ���� ¦���̸� ����Ͻÿ�.
/*
#include <stdio.h>
int main(void)
{
	int n1, n2;
	printf("�� ���� �Է��ϼ��� --> ");
	scanf("%d %d", &n1, &n2);
	if(n1>n2 && n1 % 2 == 0)
	{
		printf("ū ���� %d�̸�, ¦���׿�!\n\n", n1);
	}
	else if(n2>n1 && n2 % 2 == 0)
	{
		printf("ū ���� %d�̸�, ¦���׿�!\n\n", n2);
	}
	else
	{
		printf("ū ���� Ȧ���ΰ�����?\n\n");
	}
}
*/



// 6. �� ���� �Է¹޾� ���� ¦���̰�, 3�� ����� ���� ����Ͻÿ�.

#include <stdio.h>
int main(void)
{
	int n1, n2, result;
	printf("�� ���� �Է��ϼ��� --> ");
	scanf("%d %d", &n1,&n2);
	result = n1+n2;

	if(result%2 ==0 && result%3 ==0)
	{
		printf("�� ���� ���� ¦���̸�, 3�� ����Դϴ�\n\n");
	}
	else
	{
		printf("�ٸ� ���� �Է��ϼ���.\n\n");
	}
}
