
// ��� [for��] ~�ϴ� ���ȿ�, �ݺ���
// for(�ʱ��; ���ǽ�; ������)
/*
#include <stdio.h> // ��� [for��]
int main(void)
{
	int sum=0;
	int i, num;
	printf("0���� num���� ���� ������ �Է��ϼ��� --> ");
	scanf("%d", &num);

	for(i=0; i<=num; i++)
	{
		sum += i;
	}
	printf("0���� %d������ �� : %d \n", num, sum);
	return 0;
}
*/



// �ݺ��� Ƚ���� �������ִ°�� for
// ���������� ������, ����ڿ� ���� ��� �ݺ����� �˼�������, while

/*
#include <stdio.h> // for���� ��ø

int main(void)
{
	int cur, is;
	
	for(cur=2; cur<10; cur++)
	{
		for(is=1; is<10; is++)
		{
			printf("%d * %d = %d \n", cur, is, cur*is);
		}
		printf("\n");
	}
	return 0;
}
*/



/*
// factorial
// 3! = 1*2*3
5! = 1*2*3*4*5
n!
sum(0�����ʱ�ȭ *= i(1�������ϴº���)*/



/*
#include <stdio.h> // ���� 1. Factorial�� ����ϴ� ���α׷��� �ۼ��غ���. (�Ϸ�)
int main(void)
{
	int factorial, i, sum=1;
	printf("Factorial ����ϱ� --> ");
	scanf("%d", &factorial);
	for(i=1; i<=factorial; i++)
	{
		sum = sum * i;
	}
	printf("%d!�� --> %d \n", factorial, sum);
}
*/

/*
#include <stdio.h> // 1������ ������Ǯ��
int main(void)
{
	int num, i, sum=1;
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		sum*=i;
	}
	printf("%d! = %d\n", num, sum);
	return 0;
}
*/

/*
#include <stdio.h> // ���� 3. ���ﰢ�� ������� (�Ϸ�)
int main(void)
{
	int i, j, a=0, b=5;
	for(i=0; i<5; i++)
	{
		for(j=0; j<b; j++)
		{
			printf(" %2.0d", a+1);
			a++;
		}
		printf("\n");
		b--;
	}
}
*/

/*
#include <stdio.h> // ���� 3. ������ Ǯ��
int main(void)
{
	int a, b, num=1;
	for(a=1; a<=5; a++)
	{
		for(b=a; b<=5; b++)
			printf("%3d", num++); // �ڸ��� 3���� �������
			// num�� ���������������� 1�� �þ
		printf("\n");
	}
}
*/


/*
4�������� ���� (�츮�ݿ��� 3���� Ǯ�� �˷���) - ���� ���� ���ﰢ������ ����ϱ� (�������� ó��Ǯ�� �Ѵްɷ���)
*/


/* ���������� ����
for(	)
{
	for(	)
	{
	}
	for(	)
	{
	}
}
*/