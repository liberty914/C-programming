/*
30�̳� 40���� �̸��� ���°��� ���

������·� cpu�� �����̵�

�׳� ���� ���ϴ� �� (��������ʴ�, 5�� 5 �״��)

�ɺ������ = ��������, ����ġ����

�ɺ�������� �빮�ڷ� ����� - �̰��� ���, �Ѵ������⽱��
�ʱ�ȭ���� ������ �����Ⱚ���� �ʱ�ȭ��
*/

/*
#include <stdio.h>
int main(void)
{
	int arr[3] = {0,1,2};
	printf("ù ��° ��� : %p \n", &arr[0]);
	printf("�� ��° ��� : %p \n", &arr[1]);
	printf("�� ��° ��� : %p \n", &arr[2]);
	printf("�迭�� �̸�  : %p \n", arr);
}
*/


	/*
	arr�� �迭�� ù��° ���¸� ����Ų��
	�ּ� ����, arr�� ��������� ������,
	'�׻�' �迭�� ù������Ҹ� ����Ű��,
	������ �Ұ����ϱ⶧���� ��������� ������

	�����ʹ� �����̱⶧����, num1�� ����Ű��, num2�� ����ų���ִ�, �����ϱ�.

	arr�� �� ��ü�� �ּҰ��̱⶧���� &�����ڰ� �ʿ����.
	&�����ڴ� 

	���α׷��� ����ɶ����� �޸𸮺����� �ٽ��Ҵ�� - �׷��� �����̵�.


	�迭�� �̸��� ���� �������̱� ������ �����ͷ� ����� ������.
	*/



/*
#include <stdio.h>
int main(void)
{
	int arr1[3] = {1,2,3};
	double arr2[3] = {1.1, 2.2, 3.3};

	printf("%d %g \n", *arr1, *arr2); // %g %lf �� �Ȱ��� %e(������ �ε��Ҽ�����)�� �˾ƺ���
	*arr1 += 100;
	*arr2 += 120.5;
	printf("%d %g \n", arr1[0], arr2[0]);

	// �ᱹ *arr1 == arr1[0]
	return 0;
}
*/



/*
#include <stdio.h> // �����Ϳ� �迭
int main(void)
{
	int arr[3] = {15, 25, 35};
	int * ptr = &arr[0];

	printf("%d %d \n", ptr[0], arr[0]);
	printf("%d %d \n", ptr[1], arr[1]);
	printf("%d %d \n", ptr[2], arr[2]);
	printf("%d %d \n", *ptr, *arr);
} // (����)�����ͺ����� �迭�� 0��°����� �ּҸ� ����Ű�� ������,
// �����͸� �迭�� �̸�ó�� ����� ���� �ִ�. (�����δ� �̷��Դ� �� ���� ����, ���ؽ�Ű�� ���� ����ϻ�)
*/


/*
#include <stdio.h> // �׳� �غ���
int main(void)
{
	int num1=10, num2=20, num3=30;
	int * ptr1 = &num1;
	int * ptr2 = &num2;
	int * ptr3 = &num3;

	(*ptr1)++;
	(*ptr1) += 3;
	(*ptr2) -= 5;
	(*ptr2) = (*ptr1) + 10;

	printf("ptr1 = %d  \n ptr2 = %d \n %d \n", *ptr1, *ptr2, *ptr3);
}
*/



/*
#include <stdio.h> // ������ ����
int main(void)
{
	int num1; // 4����Ʈ
	double num2; // 8����Ʈ
	int * ptr1 = &num1;
	double * ptr2 = &num2;

	printf("ptr1   : %p \n", ptr1);
	printf("ptr1+1 : %p \n", ptr1+1); // 4����
	printf("ptr1+2 : %p \n\n", ptr1+2);

	printf("ptr2   : %p \n", ptr2);
	printf("ptr2+1 : %p \n", ptr2+1); // 8����
	printf("ptr2+2 : %p \n\n", ptr2+2);

	printf("������ ptr1 : %p \n", ptr1);
	printf("������ ptr2 : %p \n\n", ptr2);

	ptr1++;
	ptr2++;
	printf("������ ptr1 : %p \n", ptr1);
	printf("������ ptr2 : %p \n\n", ptr2);

	return 0; // ���� num���ٰ� ����� �ʱ�ȭ���־ ���̾ƴ� �ּҰ��̱� ������ ����� �ٸ�������.
}
*/



/*
#include <stdio.h> // ������ ���� (2)
int main(void)
{
	int arr[3] = {11, 22, 33};
	int * ptr = arr;
	printf("%d %d %d \n", *ptr, *(ptr+1), *(ptr+2));

	printf("%d", *ptr); ptr++;
	printf("%d", *ptr); ptr++;
	printf("%d", *ptr); ptr--;
	printf("%d", *ptr); ptr--;
	printf("%d", *ptr);
	printf("\n");

	return 0; // for���� �̿��Ͽ� �ڵ�����Ҽ��� �����Ͱ���.
} // �ڷ�����ŭ �����, int�� 4��ŭ, double�� 8��ŭ
*/


// arr[i] == *(ptr+i)

#include <stdio.h>
int main(void)
{
	int arr[3] = {1, 2, 3};
	int * ptr = arr; // �����Ͱ� 0��° ��Ҹ� ����Ű�� ��

	printf("%d %d %d \n", *(ptr+0), *(ptr+1), *(ptr+2));
	printf("%d %d %d \n", ptr[0], ptr[1], ptr[2]); // ������ ����
	printf("%d %d %d \n", *(arr+0), *(arr+1), *(arr+2));
	printf("%d %d %d \n", arr[0], arr[1], arr[2]); // �迭�� �̸�

	return 0;
}
