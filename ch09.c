/* C���� �Լ��� ���� �߿���.
   �Լ��� �𸥴ٴ°� C�� �𸥴ٴ� ��. 
   
   �Լ��� ���������� ��ü�������� ������ִµ�. (������)

   ������ �ݵ�� �߻��ϴµ�, (�Ǵ� ������Ʈ or ����)
   �Լ��� ����ϸ�, �Լ��� �� �κи� �������ָ� �ȴ�.
   ������ ��� �ڵ��� �Լ��� �ϰԵ�.

   �����Լ����ٰ� ���� �Է��ϸ� �ϳ����� ������ �� �������Ѵ�.
   
   ����������Լ� , ǥ���Լ� , �����Լ� */


/*
#include <stdio.h>
int Add(int num1, int num2) // ��ȯ����(return 0�� ������ ��ȯ�ϱ⶧���� int), �Լ��̸�(�Է�����)
{
	return num1+num2; // 3. 6. 
}

double Div(double num3, double num4)
{
	return num3/num4;
}

int main(void) // 1. ���α׷��� ���۵Ǹ� ������� main�Լ��� ������.
{
	int result;
	double res;
	result = Add(3, 4); // 2. ���⼭ �����帧�� Add�Լ��� ��, 3�� 4��� ���ڸ� ������.
	printf("�������1 : %d \n", result); // 4. Add�Լ����� ��ȯ��
	result = Add(5, 8); // 5. �Լ��� �ѹ� �����س����� ����̰� ������ �����ִ�.
	printf("�������2 : %d \n", result); // 7.
	res = Div(3, 2);
	printf("���������1 : %0.2f\n", res);
	res = Div(10, 3);
	printf("���������2 : %0.2f\n", res);
	return 0;
}
*/



/*
#include <stdio.h>
int Add(int num1, int num2) // �������� 0 , ��ȯ 0
{
	return num1+num2;
}

void ShowAddResult(int num) // �������� 0 , ��ȯ x
{
	printf("������� ��� : %d \n", num);
}

int ReadNum(void) // �������� x , ��ȯ 0
{
	int num;
	scanf("%d", &num);
	return num;
}

void HowToUseThisProg(void) // �������� x , ��ȯ x
{
	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�. \n");
	printf("��! �׷� �� ���� ������ �Է��ϼ���. \n");
}

int main(void)
{
	int result, num1, num2; // �������� ���������� ���� Add(num1, num2)�ʹ� �ٸ� �����̴�.
	HowToUseThisProg(); // �Ű������� ����ް����� ���� (void)
	num1=ReadNum();
	num2=ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result); // ShowAddResult(int num)���� ���̴� �����ð���...
	return 0;
}
*/




/* �Լ��� ����
   �����Ϸ����� �̸� �˷��ִ°� --> �Լ��� ����, (;)�� ��.
   �������ִ°� --> �Լ��� ����
   
   �����Ϸ��� ������ �Ʒ��� ������������ �������ϱ⶧����,
   main�Լ� ���� �Լ��� �������ְų�(int a();) 
   main�Լ� ���� �Լ��� ������ �־���Ѵ�.   */


// ������ ����

// ���� 1. �� ���� ū ���� ����ϱ�
/*
#include <stdio.h>
int Max_fun(int a, int b)
{
	if(a>b)
		return a;
	if(a<b)
		return b;
}

int main(void)
{
	int result1 = Max_fun(7, 4);
	int result2 = Max_fun(2.7, 5.1);
	printf("Max = %d\n", result1);
	printf("Max = %d\n", result2);
}
*/


/*
#include <stdio.h> // ���� 1. ������ Ǯ��

void Max_fun(int a, int b)
{
	if(a>b)
		printf("%d\n", a);
	else
		printf("%d\n", b);
}

int main(void)
{
	Max_fun(7, 4);
	Max_fun(2.7, 5.1);
}
*/


/*
#include <stdio.h> // ���� 1 ����, �� ���� �Է¹ް�, ū���� ����ϱ�.

int Compare(int a, int b)
{
	if (a>b)
		return a;
	else if (a<b)
		return b;
	else
		return 0;
}

int Scanf(void)
{
	int num;
	scanf("%d", &num);
	return num;
}

void How(void)
{
	printf("�� ������ ���ϴ� �Լ��Դϴ�.\n");
	printf("������ �� �� �Է��ϼ���! --> ");
}

int main(void)
{
	int num1, num2, result;

	How();
	num1 = Scanf();
	num2 = Scanf();
	result = Compare(num1, num2);
	if (result == 0)
		printf("���� ���� �Է��ϼ̱���~ \n");
	else
		printf("�� �� ��, ū ���� : %d \n", result);
	return 0;
}
*/


// ���� 2. �������� ����ϴ� �Լ��� ������.
/*
#include <stdio.h>

void Gugudan(int dan);

int main(void)
{
	int dan;
	printf("input the dan : ");
	scanf("%d", &dan);
	Gugudan(dan);
}

void Gugudan(int dan)
{
	int a=1;
	while(a<10)
	{
		printf("%d * %d = %d\n", dan, a, dan*a);
		a++;
	}
}
*/
/*
void Gugudan(int dan) // ������ Ǯ��, for���� �̿��ϴ� ����� ����.
{
	int i;
	for(i=1; i<10; i++)
		printf("%d * %d = %d\n", dan, i, dan*i);
}
*/



// ���� 3. 3���� ������ �޾Ƽ� ���� ū���� ���� �������� ��ȯ�ϴ� �Լ��� ������. (��������)
/*
#include <stdio.h>
int MaxNum(int n1, int n2, int n3) // ���� ū�� ��ȯ �Լ�
{
	if(n1>n2 && n1>n3)
		return n1;
	if(n2>n1 && n2>n3)
		return n2;
	if(n3>n1 && n3>n2)
		return n3;
}

int MinNum(int n1, int n2, int n3) // ���� ������ ��ȯ �Լ�
{
	if(n1<n2 && n1<n3)
		return n1;
	if(n2<n1 && n2<n3)
		return n2;
	if(n3<n1 && n3<n2)
		return n3;
}

int main()
{
	int num1, num2, num3;
	printf("�� ���� ���� �Է� : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("���� ū �� : %d \n", MaxNum(num1, num2, num3));
	printf("���� ���� �� : %d \n", MinNum(num1, num2, num3));
	return 0;
}
*/



// 4��° ���밪���� ����� - �ΰ��Լ����� ����� ������ �����. (�񱳸� / ���밪��)
/*
#include <stdio.h>

int AbsoCompare(int num1, int num2);
int GetAbsoValue(int num);

int main()
{
	int num1, num2;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &GetAbsoValue(num1), &GetAbsoValue(num2));
	//num1 = GetAbsoValue(num1);
	//num2 = GetAbsoValue(num2);
	printf("%d�� %d�� ���밪�� ū ���� : %d\n", num1, num2, AbsoCompare(num1, num2));
	return 0;
}

int AbsoCompare(int num1, int num2)
{
	if (num1>=num2)
		return num1;
	if (num1<=num2)
		return num2;
}

int GetAbsoValue(int num1, int num2)
{
	num1 = num1>0 ? num1:num1*(-1);
	num2 = num2>0 ? num2:num2*(-1);
	return num1, num2;
}
*/



// ���� 4. �� ���� �Է¹޾�, ���밪�� �� ū ���� ����ϴ� �Լ� (������Ǯ��)
#include <stdio.h>
int AbsoCompare(int num1, int num2);
int GetAbsoValue(int num);

int main(void)
{
	int num1, num2;
	printf("�� ���� ���� �Է� : ");
	scanf("%d %d", &num1, &num2);
	printf("%d�� %d�� ���밪�� ū ���� : %d \n",
			num1, num2, AbsoCompare(num1, num2));
	return 0;
}

int AbsoCompare(int num1, int num2)
{
	if(GetAbsoValue(num1) > GetAbsoValue(num2))
		return num1;
	else
		return num2;
}

int GetAbsoValue(int num)
{
	int result;
	result=num>0 ? num:num*(-1);
	return result;
} // �Լ��� ��� �����ϴ��Ŀ� ���� ���α׷����� �Ƿ��� ������.





// �� ������������ ����� ����� �����غ���, ���� Ǯ������




/*
�޸𸮿��� Code(�ڵ�) / Date(��������) / Heap(�����Ҵ�) / Stack(����������)
�뵵�� �ٸ���, ������ �����ϸ� ���ؼ�, 

�Լ��� �ٸ���, ������ ���Ƶ� �ٸ������̴�. (��������, ��������)
*/
