
/*
������

�޸𸮴� 1����Ʈ ������ �ּҰ� �Ҵ�Ǿ�����
����ũ����?
&num - ���� �ּҰ��� �ǹ�
�����ͺ����� �ּҸ� �����ϱ����� ���� (16��������) %p�� ����ϸ� �˼�����.
(Q. �� %x(16����)�� �������� ���ϴ� �������� ���� �ñ��ϴ�)

int * ptr
int* ptr ���߿��ϳ��� ����

int num = 10 ; 
int * ptr = &num; ����� ���ÿ� �ʱ�ȭ
ptr = &num1; // �����ͺ��� ��ü�� �ǹ�, �ּҸ� �����Ҽ��ִ�. �����̴ϱ� ���� �ٲܼ��ִ�.(num->num1)
*ptr = 30(num1) // �����ͺ����� ����Ű�� ������ ����� ��. ������ �����Ҽ� �ִ�.


*/

/*
#include <stdio.h>
main()
{
	int num=10;	// ���������� num �޸� �Ҵ�
	int * pit;	// �����ͺ��� pit �޸� �Ҵ�
	pit = &num;	// num�� �ּҸ� pit�� ����
}
*/


/*
#include <stdio.h>
main()
{
	int num=10;
	int * pit = &num;	// ����� ���ÿ� �ʱ�ȭ
	
	*pit = 50;	// �����ͺ��� pit�� ����Ű�� ���� 50�� ����

	printf("������ ���� num�� : %d \n", num);
	printf("������ ���� pit�� : %d \n", *pit);
}
*/



/*
#include <stdio.h>
int main(void)
{
	int num1 = 100, num2 = 100;
	int * pit;

	pit = &num1;	// ������ pit�� num1�� ����Ŵ (num1�� �ּҰ��� �����ϰ��ִ�.)
	(*pit) += 30;	// num1 += 30; �� ����

	pit = &num2;	// ������ pit�� num2�� ����Ŵ
	(*pit) -= 30;	// num2 -= 30; �� ����

	printf("num1 : %d \n", num1);
	printf("num2 : %d \n", num2);
	return 0;
}
*/



/*
// �߸��� �������� ���

#include <stdio.h>
int main(void) // �߸��� �� 1
{
	int * pit;
	*pit = 100;
}
// �����ͺ��� pit�� �����Ⱚ���� �ʱ�ȭ ��
// ���� 100�� ����Ǵ� ��ġ�� ������� �� �� ����



int main(void) // �߸��� �� 2
{
	int * pit = 250;
	*pit = 10;
}
// �����ͺ����� 250�� �����Ѵ�?
// �����ͺ����� �ּҸ� �����ϴ� �����̸�, ���� ���� �Ұ����ϴ�.
// �ּҸ� ������ ���� & �����ڰ� �ʿ���



int main(void) // �߸��� �� 3
{
	int num;
	int pit = &num;
}
// �����ͺ����� �ƴ� �Ϲݺ����� �ּҸ� �����Ҽ� ����.
// ����ũ����(*) �� ���Ծ���.



int main(void) // �߸��� �� 4
{
	int num1;
	double * pit1 = &num1;

	// �Ǵ�

	double num2;
	int * pit2 = &num2;

	// �Ǵ�

	unsigned int num3;
	int * pit3 = &num3;
}
// �����ͺ����� ������ ������ �Ȱ��� �ڷ��� �̾�� �Ѵ�.
*/



/*

�����ͺ������� ������ ������ �ʱ�ȭ���Ѿ��Ѵ�. ���ڷ� �ʱ�ȭ�Ҽ�����

1���� . �ȵȴ�.
// �Ϲݺ����� �ּҰ����� �������� �Ǵܸ���, ������ �����θ� �޾Ƶ���, �ּҰ��� ���µ� �����θ� �޾Ƶ���. �׷��ϱ� ������ �߻���.

2����. ����� �Ǳ�Ǵµ�, int�� double�� ������ ��������, double�� int�� ������ �Ҽ����� ©����.
- �̷��� ����ϸ� �ȵ�.




����������
�����
�Ҹ��̵ǰ�, ����̵�.
��ȯ���� �ϳ��ۿ� �ȵ� - �����ͷ� �ذ��Ҽ� ����.


*/

/*
#include <stdio.h> // ���� �ܰ����� - �����͸� �� ���ϱ�?

void go_south_east(int *lat, int *lon)
{
	*lat = *lat - 1;
	*lon = *lon + 1;
}

int main()
{
	int latitude = 32;
	int longitude = -64;
	//int * lat = &latitude;
	//int * lon = &longitude;
	
	go_south_east(&latitude, &longitude); // �ּҰ��� �Ѱ��ְ�����. int *lat = &latitude
	printf("���� ��ġ : [%d, %d]\n", latitude, longitude);

	return 0;
} // �������� �ʿ��ҵ�.
*/


/*
scanf�Լ��� num�� �ּҰ��� �Ѱ��ְԵǸ� �Է��� �ް�, �Է¹����� num������ ������.
&�� ���

�迭 �տ��ٰ��� &�� �����ʾ���

*/




#include <stdio.h>
int main(void)
{
	int num = 10;
	int * ptr1 = &num;
	int * ptr2 = ptr1;

	(*ptr1)++; // ��ȣ�� ��ġ�� �������� �����̾ȵȴ�.
	(*ptr2)++; // ��??

	printf("%d \n", num); // num��� *ptr1)���� ���൵ ��.
	return 0;
}




/* num=20
   *ptr1=20;
   *ptr2=20; 3����������� num���� �����Ҽ��ִ�. */




/*
#include <stdio.h>
int main(void)
{
	int num1 = 10;
	int num2 = 20;
	int * ptr1 = &num1;
	int * ptr2 = &num2;
	// int a=0;

	*ptr1 += 10; // ��ȣ�� ġ�� ��ġ�� ����� ����.
	*ptr2 -= 10; // ��???

	// ptr1 = &a;
	ptr1 = &num2;
	ptr2 = &num1;

	printf("*ptr1 = %d \n", *ptr1);
	printf("*ptr2 = %d \n", *ptr2);
}
*/