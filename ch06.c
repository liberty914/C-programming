/*
#include <stdio.h> // �ڡڡڡڡڹݺ��� while�� ���� [�ݺ����� ũ�� while / for / do while]
int main(void)
{
	int num=0;

	while(num<5)
	{
		printf("Hello world %d \n\n", num);
		num++; // num�� 5�̸��϶����� while�� ������ �ݺ��ϸ�, 5�̻��� �Ǵ� ���� �����Ѵ�.
	}
	return 0;
}
*/



/*
#include <stdio.h> // �ݺ��� while�� ����2
int main(void)
{
	int dan=0, num=1;
	printf("������ ���? -> ");
	scanf("%d", &dan);

	while(num<10) // �� while���� ���ڸ���, �ݺ�Ƚ���� ���� �����ؾ���. - 9��
	{
		printf("%d * %d = %d \n", dan, num, dan*num);
		num++;
	}
	return 0;
}
*/



/*
#include <stdio.h> // �ڡڡ� while ���ѷ��� - ����ڰ� �������� ����ؼ� ���ִ°���.
int main(void)
{
	int num=0;

	while(1) // while���� ���ǽ��� 1==�� �̶�� �ǹ�, �׷��Ƿ� ����ؼ� ������.
	{
		printf("Hello world %d \n", num);
		num++;
	} // ���ѷ����� ���߰��� �Ҷ��� control + C
	return 0;
}
*/



/*
#include <stdio.h> // �׳� ���� ���� ����
int main(void)
{
	int n1, n2;
	while(1)
	{
		printf("���ϰ� ���� ���ڸ� ���� �Է��ϼ���...");
		scanf("%d %d", &n1, &n2);
		printf("\n%d + %d = %d\n\n", n1, n2, n1+n2);
	}
	return 0;
}
*/



/* Brute Force Attack - ������ ���� ���� - ��й�ȣ�� �ɼ��ִ� ��� ����Ǽ��� �����ڴ°�.
   Dictionary �������԰��� - ��α�, ī�� �� DB�� ������, ���־��� �͵��� �켱������ ������. */
// ������ �������ְ� �ʱ�ȭ�� ������������, �ƹ� �ǹ̾��� "�����Ⱚ"�� ��.
// ����ڰ� �������� ����ؼ� ���ִ°���. - ���⸦ ���������� �����ְ�. (�ݺ��� �ȿ� switch�� ������)


// ch5 2������ - switch()���� �� �����ؼ� �ٲ������, ������ �ϳ��� + 30? -30?


// �� ch6 Exam

// ���� 1. ����ڷκ��� ���� ������ �ϳ� �Է¹޾Ƽ�, �� ����ŭ "Hello world"�� ����Ͻÿ�.
/*
#include <stdio.h>
int main(void)
{
	int num1, num2=1;
	printf("���������� �ϳ� �Է��غ��� -> ");
	scanf("%d", &num1);

	while(num2 <= num1) // num1���� 0���� '���̳ʽ�' �����ָ鼭 �ص� ��.
	{
		printf("Hello world %d \n", num2);
		num2++;
	}
}
*/



// ���� 2. ���������� �ϳ� �Է¹޾Ƽ�, �� ����ŭ 3�ǹ���� ����϶�.
/*
#include <stdio.h>
int main(void)
{
	int num, three=1;
	printf("3�� ����� ����� �˰�;�? --> ");
	scanf("%d", &num);

	while(three <= num) // ����� ���� ������ ��������.
	{
		printf("%d\n", three*3);
		three++;
	}
}
*/



// ���� 3. 1~10������ ���ڸ� �Է¹޾�, 1���� �Է¹��� �������� ���� ���غ���.
/*
#include <stdio.h>
int main(void)
{
	int n1, n2=1, res=0;

	printf("1~10������ ���ڸ� ��� --> ");
	scanf("%d", &n1);
	if(0<n1 && n1<=10)
	{
		printf("1���� %d������ ���� ==> ", n1);
		while(n2<n1)
		{
			res+=n2;
			n2++;
		}
		// res = res+n1;
		printf("%d\n", res+n1);
	}
	else
	{
		printf("�ٽ��Է�! \n\n");
	}
	return 0;
} // help ���ѷ��� ����� ���� �̻��� ������?
*/



// ���� 4. while�� �ȿ� 1���� 100���� ����, �� �߿��� 7�ǹ���� 9�ǹ��
/*
#include <stdio.h>
int main(void)
{
	int i=1;

	while(i<=100)
	{
		if(i%7==0 || i%9==0) // ���ʿ��� ������ ������ ��µ�. &&�� ���ԵǸ� 63�ϳ��� ��µ�.
			printf("%d ", i);
		i++;
	}
}
*/



// ���� 5. �Է¹��� ���� �������� ����ϰ�, �������ε� ����غ���.
/*
#include <stdio.h>
int main(void)
{
	int dan=0, num=9;
	printf("�� ���� �ܿ�ǰ���?\n\n");
	scanf("%d", &dan);

	while(num>0)
	{
		printf("%d * %d = %d\n\n", dan, num, dan*num);
		num--; // �������� ���!
	}
	return 0;
}
*/



// ���� 6. ������ �Է¹ް�, ����ڰ� 0�� �Է��Ҷ����� ��� ����.
/*
#include <stdio.h>
int main(void)
{
	int num=1, sum=0;
	printf("���� ���ϰ���� ��� ���� �Է��غ��ð�, ����� ������ 0�� �Է��ϼ���\n\n");
	while(num!=0) // ���ʿ� while�� �����ϱ����� num�� 1�� ��������
	{
		scanf("%d", &num);
		sum+=num;
	}
	printf("�Է��� ��� ���� ���� %d�Դϴ�.", sum);
	return 0;
}
*/
// �˰����� ���� �׸����� �׷�����, �� ������ ���α׷����� �غ��� ������ �⸣��
// ������ ���δ� �ٽ��ѹ� Ȯ���ϰ�, Ǯ���



/*
#include <stdio.h> // �ڡڡڡڡ� �ݺ��� [while���� ��ø]
int main(void)
{
	int cur=9;
	int is=0;

	while(cur>1)
	{
		is = 9; // �ݺ������� ���� �Ǽ��ϴ� �κ�!, �ٽ� ���������� ������ �ݺ����� 2�ܿ��� �׳� ��������!
		while(is>0)
		{
			printf("%d * %d = %d \n", cur, is, cur*is);
			is--;
		}
		cur--; // �������� ����ϴ°͵� �غ���
	}
	return 0;
}
*/



// �� ch6 Exam

/*
#include <stdio.h> // ���� 1. ����� (�ذ�)
int main(void)
{
	int num1=1, num2=1;

	while(num1<=5)
	{
		num2 = 1;
		while(num2<=num1)
		{
			printf("* ");
			num2++;
		}
	printf("\n");
	num1++;
	}
} 
*/



/*
#include <stdio.h> // ���� 1. ����� 2 �ﰢ�� / ���ﰢ�� (�ذ�)
int main(void)
{
	int a=0, b=0;
	while(a<5)
	{
		while(b>=0)
		{
			printf("�� ");
			b--;
		}
		printf("\n");
		a++;
		b=a;
	}
}
*/




/*
#include <stdio.h> // �������� ����� Ǯ�� (���ﰢ��)
int main(void)
{
	int a, b;
	a=1;
	while(a<=5)
	{
		b=a;				// �ٽ�!! b=5;
		while(b<=5)			// b>a
		{
			printf("�� ");
			b++;			// b--;
		}
		printf("\n");
		a++;				// 2��° �ٽ�!!
	}
}
*/



/*
#include <stdio.h> // ���� 2. ������ ����� (�ذ�)
int main(void)
{
	int a=0, b=0;
	while(a<5)
	{
		while(b>0)
		{
			printf("O");
			b--;
		}
		printf("*\n");
		a++;
		b=a;
	}
}
*/



/*
#include <stdio.h> // ������ ������ ����� Ǯ��
int main(void)
{
	int i=0, j=0;

	while(i<5)
	{
		while(j<i) // (�ٽ�!!)ó���� �����̾��⶧���� �������� �ʴ´�.
		{
			printf("o ");
			j++;
		}
		j=0;
		printf("* \n");
		i++;
	}
	return 0;
}
*/



/*
#include <stdio.h> // ���ﰢ�� �߰���� ����� (�̿ϼ�)
int main(void)
{
	int a=0, b=0, c=0;
	while(a<3) // �ٹٲ� ����
	{
		while(b<3) // ���� ����
		{
			while(c<5) // �� ����
				{
					printf("* ");
					c++;
					if (c>=5)
						printf("\n");
				}
			printf("0 ");
			b++;
		}
		printf("\n");
		a++;
		b++;
		c++;
	}
}
*/



/* 
#include <stdio.h> // ���� 3. 5�� �������� �Է� �� ���� ����ϴ� ���α׷�
int main(void)
{
	int a=0, b=0, c=0;
	while(a<5)
	{
		while(b<=0)
		{
			printf("���� �Է��ϼ���...");
			scanf("%d", &b);
		}
		c+=b;
		b=0;
		a++;
	}
	printf("�հ�� %d", c);
	return 0;
}
*/


	
/*
#include <stdio.h> // ���� 3. ������Ǯ��
int main(void)
{
	int sum=0, num=0, i=0;
	while(i<5)
	{
		while(num<=0)
		{
			printf("���ڸ� �Է��ϼ���...%d  ", i+1);
			scanf("%d", &num);
		}
		sum+=num; // sum = sum + num
		num=0; // �ٽ� while������ ������ �Ҽ� �ֵ��� �������.
		i++;
	}
	printf("�� �� : %d \n", sum);
	return 0;
}
// �ݺ��� Ƚ���� �ľ��ϴ°��� while���� ����.
// ���� �������� ������ �������� �׷��� ��.
*/



/* ����� ��Ʈ.
	�ݺ����� ù��° ���ư��� ���� �ݺ����� �ټ��� ����ָ� ��
	�ٱ��� 5��, ���� 5��	*/


/* ����� Ŀ���� ������ f9

*/



/*
#include <stdio.h> // ��� [do while��]
int main(void)
{
	int num=0;
	
	do // ���ǰ� ������� ���ʿ� 1���� ������.
	{
		printf("Hello world!! %d\n\n", num);
		num++;
	}while(num<3);
	return 0;
}
*/



/*
#include <stdio.h> // ��� [do while���� �ڿ������� ��Ȳ]
int main(void)
{
	int total=0, num=0;

	do // ������ �ѹ��� �Է� �޾ƾ� �� ��, ���ʿ� �ѹ��� �ݵ�� �����ؾ��� �� ����Ѵ�.
	{
		printf("���� �Է�(0 to quit): ");
		scanf("%d", &num);
		total += num;
	}while(num!=0); // do-while���� ���ǽ� ���� �����ݷ�(;)�� ���Եȴ�. ����..!
					// 0 ���� �ԷµǸ� �հ谡 �����鼭 ���α׷��� �����.
					// �׷��� ������ ����ؼ� �Էµ� ���� ����. (�ݺ������� �ѹ� �̻� ����� �� �����ϴ�)
	printf("�հ� : %d \n", total);

	return 0;
}
*/



/*
#include <stdio.h> // break��
int main(void)
{
	int sum=0, num=0;
	
	while(1) // 1�� ���� ���� ���̴�, ���ѷ���
	{
		sum+=num;
		if(sum>5000)
			break; // if���� ���������°��� �ƴ϶�, �ݺ��� ���������� ���̴�.
					// (���ΰ� �ִ� while�� �ϳ��� ��������.)
		num=0;
		num++;
	}
	printf("sum : %d \n", sum);
	printf("num : %d \n", num);
	return 0;
}
*/



/*
#include <stdio.h> // continue��
int main(void)
{
	int num = 1;
	printf("start!!\n\n");

	while(num<20)
	{
		num++;
		if(num%2==0 && num%3==0)
			continue; // "�ٽ� ó������ �����ϼ���" - printf��� ����.
		printf("%d\n", num);
	}
	printf("End!!\n\n");
	return 0;
} // ��������� 2�ǹ���� 3�ǹ���� ��ġ�ԵǴ� ���� �����ϰ� �����.
*/



// while, break(j�ǰ��� i���� �� ũ��) / continue



// ����. �������� ����ϵ� ¦�� �ܸ� ����ϵ��� ����.
//		�� 2���� 2*2����, 4���� 4*4����, 6���� 6*6����, 8���� 8*8���� ��µǵ��� ����.(�ذ�)

#include <stdio.h>
int main(void)
{
	int a=1, b=1;
	while(a<10)
	{
		a++;
		if (a%2 != 0)
			continue;
		while(b<10)
		{
			printf("\t%d * %d = %d\n", a, b, a*b);
			if(a==b)
				break;
			b++;
		}
		b=1;
	}
}

