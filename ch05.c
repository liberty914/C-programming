/*
#include <stdio.h> // ���ǹ� if�� ���
int main(void)
{
	int num;
	printf("������ �Է��ϼ��� -> ");
	scanf("%d", &num);

	if(num < 0)
		printf("�Է� ���� 0���� �۴�.\n");
	if(num > 0)
		printf("�Է� ���� 0���� ũ��.\n");
	if(num == 0)
		printf("�Է� ���� 0�̴�.\n");
	return 0;
}
*/



/*
#include <stdio.h> // ���ǹ� if�� ��� & else if�� ���Ͽ���
int main(void)
{
	int opt;
	double num1, num2;
	double result;

	printf("1.����  2.����  3.����  4.������ \n");
	scanf("%d", &opt);
	printf("�� ���� �Ǽ� �Է� : ");
	scanf("%lf %lf", &num1, &num2);

	if (opt==1) // �ܼ� if���� ���� �ϳ��ϳ� �� ��/������ �˻��غ����� ó�������� ������, ������
		result = num1 + num2;
	else if (opt==2) // ���⼭���ʹ� else if�� ����ϸ� ����.
		result = num1 - num2;
	else if (opt==3)
		result = num1 * num2;
	else // else�� �� �� ����Ȳ�� �̾߱��ϴ� ���̹Ƿ�, ���ǹ��� �ʿ����
		result = num1 / num2;

	printf("��� : %0.2f \n\n", result);
	return 0;
} // �׷��� if, else���� �������� ������. ���ǽ��� ������ �������.
*/



/*
#include <stdio.h> // ���ǹ� [if... else if ... else]
int main(void)
{
	int num1, num2;
	printf("�ΰ��� ������ �Է��ϼ��� -> ");
	scanf("%d %d", &num1, &num2);

	if(num1 > num2)
	{
		printf("num1�� num2���� Ů�ϴ�.\n");
		printf("%d > %d \n\n", num1, num2);
	}
	else if(num1 < num2)
	{
		printf("num1�� num2���� �۽��ϴ�.\n");
		printf("%d < %d \n\n", num1, num2);
	}
	else
	{
		printf("�� ���� �����ϴ�.\n");
		printf("%d == %d \n\n", num1, num2);
	}
}
*/



/*
#include <stdio.h> // ���� ������ - "���ǽ��� ���̸� ù��°������, ���ǹ��� �����̸� �ι�° �����͸� �Է��ϼ���"

int main(void)
{
	int num, abs;
	printf("���� �Է� : ");
	scanf("%d", &num);

	abs = num>0 ? num:num*(-1); // �̺κ��� ���׿����� �κ�
// "abs�� ���ǽ��� ���̸�, num�� �����ϰ� / �����̸� num*(-1);�� �����϶�"
	printf("���밪 : %d\n", abs); // ������ ��������(���밪)�� ����ϵ��� ������
	return 0;
} // ���׿����ڴ� ���α׷��ӵ��� ������ ���� ��.
*/



// �� if�� ���� 1.
/*
#include <stdio.h>
int main(void)
{
	int n1, n2;
	printf("�� ���� �Է� --> ");
	scanf("%d %d", &n1,&n2);
	if(n1>n2)
	{printf("%d\n\n", n1-n2);}
	else if(n2>n1)
	{printf("%d\n\n", n2-n1);}
	else
	{printf("�� ���� ���׿�, 0! \n\n");}
}
*/
//gui���α׷���?


// ���� 2.
/*
#include <stdio.h>
int main(void)
{
	int eng, mat, kor, sum;
	double ave;
	char A, B, C, D, E, F, res;
	A='A';
	B='B';
	C='C'; // �̷��� �ϳ��� �ʱ�ȭ�� ���Ϸ��� printf�� �� ���ֵ簡 �ؾ��Ѵ�.
	D='D'; // �׷��� printf�� �� if������ ��� ���ִ°� �� �����ҵ� �ʹ�.
	E='E';
	F='F';
	printf("����, ����, ������ ������ �Է��ϼ��� --> ");
	scanf("%d %d %d", &eng, &mat, &kor);
	sum = eng + mat + kor;
	ave = sum / 3;
	if(ave >= 90)
		res = A;
	else if(ave >= 80)
		res = B;
	else if(ave >= 70)
		res = C;
	else if(ave >= 60)
		res = D;
	else
		res = F;

	printf("�� ������ �հ�� %d�̸�, ����� %0.2f�̸�, %c���� �Դϴ�.\n\n", sum, ave, res);
}
*/



/*
#include <stdio.h> // switch - case���ǹ� ���� (switch - case - break - default)
int main(void) // ** �޴����̳� ���ʸ� �����Ҷ� ���־�, (easy, normal, hard ���)
{
	int num;
	printf("1�̻� 5������ ���� �Է� : ");
	scanf("%d", &num);

	switch(num)
	{ // if���� �� ������ {�߰�ȣ}�� �Է����ִ� �ݸ�, switch���� {�߰�ȣ}�� �ѹ� ����Ѵ�.
	case 1: // case�� �������� �����ݷ�(;)�� ��������ʰ�, �ݷ�(:)�� ����Ѵ�.
		printf("1�� one \n\n");
		break;
	case 2:
		printf("2�� two \n\n");
		break;
	case 3:
		printf("3�� three \n\n");
		break;
	case 4:
		printf("4�� four \n\n");
		break;
	case 5:
		printf("5�� five \n\n");
		break;
	default: // switch�� ���� (������ �̷��� �����⵵ ��)
		printf("I don't know! 1���� 5������ �Է��϶�! ��û��! \n\n");
	}
}
*/
// if���� switch���� ��������, if���� �������� �����Ұ��� ��Ȳ�ӿ��� �˰����� �������ִ°��̰�,
// switch���� ��Ȯ�� ����� ȿ�������� ������

/* if     - ���ǽ����� �Ǵ� / ������ ȿ���� /
   switch - ��������� �Ǵ� / ���� �Ұ��� / �޴� �����Ҷ�   */

// while�� for�� ����
// pointer�� �������?



/*
#include <stdio.h> // switch case & break�� ����
int main(void)
{
	char ch;
	printf("M : ����, A : ����, E : ����\n");
	scanf("%c", &ch);

	switch(ch)
	{
	case 'M': // ����Ŭ��(;)�� �ƴ�, Ŭ��(:)��� ����.
	case 'm':
		printf("Morning \n\n");
		break;
	case 'A': // �� break���� '�빮��'���� ���⶧���� '�ҹ���'���� �ν��� �����ϰ���.
	case 'a':
		printf("Afternoon \n\n");
		break;

	case 'E':
	case 'e':
		printf("Evening \n\n");
		break;
	}
}
*/



// �� ch5 Exam

// ���� 1. switch���� �̿��� ��Ģ������ �� �� �ִ� ���⸦ ������.
/*
#include <stdio.h>
int main(void)
{
	int sel, n1, n2;
	printf("�̰� �����. \n\n1. ���ϱ� \n\n2. ���� \n\n3. ���ϱ� \n\n4. ������ \n\n �� �ϰ� �;�? --> ");
	scanf("%d", &sel);
	switch(sel)
	{
	case 1:
		printf("\n\n���ϱ� - �� ���� �Է��ϼ��� --> ");
		scanf("%d %d", &n1, &n2);
		printf("%d + %d = %d\n\n", n1,n2,n1+n2);
		break;
	case 2:
		printf("\n\n���� - �� ���� �Է��ϼ��� --> ");
		scanf("%d %d", &n1, &n2);
		printf("%d - %d = %d\n\n", n1,n2,n1-n2);
		break;
	case 3:
		printf("\n\n���ϱ� - �� ���� �Է��ϼ��� --> ");
		scanf("%d %d", &n1, &n2);
		printf("%d * %d = %d\n\n", n1,n2,n1*n2);
		break;
	case 4:
		printf("\n\n������ - �� ���� �Է��ϼ��� --> ");
		scanf("%d %d", &n1, &n2);
		printf("%d / %d = %0.2f\n\n", n1,n2,(float)n1/(float)n2); // ���������� ��������ȯ ���
		break;

		return 0;
	}
}
*/



// ���� 2. ����ڿ��� ���� �ϳ��� �Է¹��� �� ...
/*
#include <stdio.h>
int main(void)
{
	int num, n;
	printf("���ڸ� �Է��غ�! --> ");
	scanf("%d", &num);
	n=num%10+1; // �� help �����κ�
	switch(n) // switch�� ����� 10���ڸ��� 1�̵Ǵ°�.
	{
	case 1:
		printf("0 �̻� 10�̸��� ���� �Է��ϼ̳׿�~\n\n");
		break;
	case 2:
		printf("10 �̻� 20�̸��� ���� �Է��ϼ̳׿�~\n\n");
		break;
	case 3:
		printf("20 �̻� 30�̸��� ���� �Է��ϼ̳׿�~\n\n");
		break;
	case 4:
		printf("30 �̻� 40�̸��� ���� �Է��ϼ̳׿�~\n\n");
		break;
	default:
		printf("���ڸ� �ٽ� �Է��ϼ���!");
	}
	return 0;
}
*/



/*
	if(0 <= num && num < 10)
	{
		printf("%d�� 0 �̻� 10 �̸��̳�? \n\n", num);
	}
	else if (10 <= num && num < 20)
	{
		printf("%d�� 10 �̻� 20 �̸��̳�? \n\n", num);
	}
	else if (20 <= num && num < 30)
	{
		printf("%d�� 20 �̻� 30 �̸��̱�! \n\n", num);
	}
	else if (30 <= num)
	{
		printf("%d�� 30�̻��̱�. \n\n", num);
	}
	else
	{
		printf("���� �Է���������...Ȯ��!\n\n", num);
	}
	return 0;
}
*/


/*
#include <stdio.h> // goto ��
int main(void)
{
	int num;
	printf("�ڿ��� �Է� : ");
	scanf("%d", &num);

	if (num==1)
		goto one;
	else if (num==2)
		goto two;
	else
		goto other;

one:
	printf("1�� �Է��ϼ̽��ϴ�.\n\n");
	goto end;
two:
	printf("2�� �Է��ϼ̽��ϴ�. \n\n");
	goto end;
other:
	printf("3 Ȥ�� �ٸ� ���� �Է��ϼ̱���.\n\n");
end:
	return 0;
}
*/

// Q. (help) goto����, switch-case���� ���̴� ����?



