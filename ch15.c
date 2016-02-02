

// ����ó����� = ���ڰ���, ����Ÿ���, �˰���... ��ɻ�� �ڰ����� �ƴ� �ź����� ���� ���� �����縦 �ڰ����̶����.



// ����Ǳ⋚���� �ٽõ��ƿ͵� age�� �������ʴ´�.

// �迭�� �ּҰ��̱ⶫ����, �޴¾ֵ� �����Ͱ��Ǿ��Ѵ�. (�ణ ���ο��)

/*
#include <stdio.h>
int Func(int num);
{
	... ... ...
}

int main(void)
{
	int age = 17;
	Func(age);
	...
}
*/



// ���������̱⶧����, �����Լ��� �ᵵ ���� �����̾ȵ�.
// �����ͷ� ���������� �ؾ���.
// �蹮������ �ߴ���, ����������

/*
#include <stdio.h> // ���� ������ ��
void Swap(int n1, int n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
	printf("n1 n2 : %d %d \n", n1, n2);
}

int main(void)
{
	int num1 = 10;
	int num2 = 20;
	printf("num1 num2 : %d %d \n", num1, num2); // ���1

	Swap(num1, num2); // ���2
	printf("num1 num2 : %d %d \n", num1, num2); // ���3
	return 0;
} // ���簪�̱⶧���� ���������� �ȵ�
*/



/*
#include <stdio.h> // �ּҰ��� ������ ��
void Swap(int *n1, int *n2)
{
	int temp = *n1; // ���ҿ� �ʿ��� ��������
	*n1 = *n2;
	*n2 = temp;
	printf("n1 n2 : %d %d \n", *n1, *n2);
}

int main(void)
{
	int num1 = 10;
	int num2 = 20;
	//int * pnum1 = &num1;
	//int * pnum2 = &num2;
	printf("num1 num2 : %d %d \n", num1, num2);

	Swap(&num1, &num2);
	printf("num1 num2 : %d %d \n", num1, num2);
	return 0;
}
// ����� �ϳ��ϳ� �м��غ���.
*/




/*
#include <stdio.h>

void Func2(int * param) // param = parameter (�Ű�����)�� ����
{
	printf("%d %d", param[0], param[1]);
}

int main(void)
{
	int arr[3] = {1,2,3};
	Func2(arr);
	...
}
*/



/*
#include <stdio.h>
void ShowArr(int * param, int len)
{
	int i;
	for(i=0; i<len; i++)
		printf("%d", param[i]);
	printf("\n");
}

void AddArr(int * param, int len, int add)
{
	int i;
	for(i=0; i<len; i++)
		param[i] += add;
}

int main(void)
{
	int arr[3] = {1,2,3};
	AddArr(arr, sizeof(arr) / sizeof(int), 1);
	ShowArr(arr, sizeof(arr) / sizeof(int));

	AddArr(arr, sizeof(arr) / sizeof(int), 2);
	ShowArr(arr, sizeof(arr) / sizeof(int));

	AddArr(arr, sizeof(arr) / sizeof(int), 3);
	ShowArr(arr, sizeof(arr) / sizeof(int));

	return 0;
}
*/


/*
#include <stdio.h>
void ShowArr(int * param, int len)
{...}

void AddArr(int * param, int len, int add)
{...} // (1)�����ͺ����� ���·� ���ڰ��� ���޹޾��� ��

------------------------------------------

void ShowArr(int param[], int len)
{...}

void AddArr(int param[], int len, int add)
{...} // (2)�迭�� ���·� ���ڰ��� ���޹޾��� ��
*/



//����������
// �ּҰ��� �Ѱ��ִϱ� ���������� ��. �׷��� ���� ����Ǵ°���.

//����������

// �迭�� ���ڷ� �޴±��� ��»���� ��Ȯ�ϰ� �˱⶧���� 2��° ���� ��.
// �� �Լ��� �� �ϴ°ű��� �� �Ѵ��� �����־�� "���� �ڵ�"��
// �Լ�, ������ �̸��� �ǹ̰� �־����. �ٷκм��� �����ؾ���. �� �ǹ��ְ�.
// �������� �ּ��� ����̺Ұ�����. �����Ҷ��� �����͸� �ݵ�� �����������. (?)




/* const���� ���α׷��ӵ��� ���������̾�
   �����ͷ� �������� �Ұ�����
   ������տ� ptr�� ù��° �ʱ�ȭ�Ȱ͸�, �����ͺ����� ���ȭ��Ų��.
   ���α׷� �������� ���ؼ�

	const int * const ptr = &num1; �϶�.
	* ptr= (�ȵ�)
	ptr = num2 ; (�ȵ�)
	�� ���, ptr�� ���������� num1�ϳ��ۿ� ����ų�� ����.
	���α׷��� �������� ���� �����.

	����������

	���� �����Ϸ��� ������, ������ ������ �߻��ߴٴ°� ���Ծ˼�����.
	Ȥ�ö� �Ǽ��� �ٸ����� �Է�������� ����� �������� �ȱ��������� �����Ҽ�����
	�Ǽ��� 100%�Ѵ�. �Ǽ��� �ϳ��� ���ϱ����� ����� ��.   
	
	����������
	
	Swap�� ������ �̿��� Ǯ��  */


/*
#include <stdio.h>

int main(void)
{
	int num = 20;
	const int * ptr = &num;
	*ptr = 30;	//������ ����, �������� �Ұ�.
	num = 40;	//������ ����
	��
}


int main(void)
{
	int num1 = 20;
	int num2 = 30;
	int * const ptr = &num1;
	ptr = &num2; //������ ����, �ּҰ� ���� �Ұ�
	*ptr = 40;	 //������ ����
	��
}
*/




#include <stdio.h> // ���� 1, ���� �ڹٲٴ� �Լ� �����

void Swap(int *n1, int *n2, int *n3) // ��ȯ���� int�� ���� �� ��ȯ���ϳİ� ���.
{
	int temp;
	temp = *n1;
	*n1 = *n3; // �� ���, �����͸� main�Լ��� �����ϴ°� �ƴ϶�,
	*n3 = *n2; // Swap�Լ� ���� �����ؾ��Ѵ�.
	*n2 = temp;
}

int main(void)
{
	int num1=10;
	int num2=20;
	int num3=30;

	Swap(&num1, &num2, &num3);

	printf("num1 = %d \n", num1);
	printf("num2 = %d \n", num2);
	printf("num3 = %d \n", num3);
}


// 14�� ppt ������������ �����͸� �����ϴµ� ���� �߿��� ����.

// �迭�� �����ͻ���̴ϱ�. ���������ͷ� ����ų���� �ִ�.



// 2�����迭 [��][��] ũ��� 3x4x4(int) = 48byte
// 3�����迭�� ���Ǿ�������. �ֱ��� �ϸ� ��.


/*   *ptr = ��(����) -- ����ũ���Ϳ����� ������ �����Ͱ� ����Ű�� ������ ����. ���� ���Խ�Ŵ.
	 ptr = &�ּҰ� -- �� ������ �ּҰ��� �����ϴ°�, ������'����'�� ����, ���� ����Ŵ */


/*
#include <stdio.h>
int main(void)
{
	int villa[4][2];
	int popu, i, j;
	for(i=0; i<4; i++) // ������ �����ο� input
	{
		for(j=0; j<2; j++)
		{
			printf("%d�� %dȣ �α��� : ", i+1, j+1);
			scanf("%d", &villa[i][j]);
		}
	}
	for(i=0; i<4; i++) // ������ ���� �α��� output
	{
		popu = 0; // �� ������ �ʱ�ȭ��
		popu += villa[i][0]; // 1ȣ�� �ǹ�
		popu += villa[i][1]; // 2ȣ�� �ǹ�
		printf("%d�� �α��� : %d \n", i+1, popu);
	}
}
*/

// �迭�� ������ ���������ִ°� ����, �׷��� �ƴѰ�쵵����, �����Ҵ��̶�°� ����. �޸� Heap�����Ҵ�



/*
��Ʈ���� �ܹ���
	�ó��� */
