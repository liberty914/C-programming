
/*
���� �߿��Ѱ� �� ���߿���

�ڵ�, - �ڵ� (�츮�� �ۼ��Ѱ�)
������,  - �������� static����
��, - �����Ҵ�?
���� - LIFO���� ��������, �Ű����� */


/*
#include <stdio.h>

char * ReadUserName(void)
{
	char name[30];
	printf("What's your name? ");
	gets(name);
	return name;
}

int main(void)
{
	char * name1;
	char * name2;
	name1 = ReadUserName();
	printf("name1 : %s \n", name1);
	name2 = ReadUserName();
	printf("name2 : %s \n", name2);

	return 0;
}
*/


/*
�����Լ��� ���������� ����Ǵµ�
	����� �� �׷��� �����ͺ����� �׸� ����������
	�����ͺ����� ���� �Ǵٸ� ���� 
	
	�����Ҵ� �ڷᱸ���ð��� ��û�����Ұ���*/

/*
#include <stdio.h>
#include <stdlib.h> // malloc()�Լ��� �������� �������
int main(void)
{
	int * ptr1 = (int *)malloc(sizeof(int)); // �� ���������� �޸� ���� �Ҵ� (�����Ҵ�)
	int * ptr2 = (int *)malloc(sizeof(int)*7); // int�� 4����Ʈ�ϱ�.
	int i;

	*ptr1 = 20;

	for(i=0; i<7; i++)
		ptr2[i]=i+1; // ptr2�� index [0]�� 1�� �Ǵ°���. index[6]���� �ʱ�ȭ������.

	printf("%d \n", *ptr1);
	
	for(i=0; i<7; i++) // 
		printf("%d", ptr2[i]);

	free(ptr1);
	free(ptr2);
	return 0;
} // �������� Ȯ���ϸ� ��Ȯ�ϰ� �����Ҽ���������, ���������� ���ΰ� �� �����Ҽ��ִ�.
*/
// �����͸� �迭ó�� �����ְ�, �迭�� ������ó�� �����ִ�.

// �����ʹ� c����� ��, �����Ͱ������� �ƹ��͵�����.


/*
#include <stdio.h>
#include <stdlib.h>

char * ReadUserName(void) // ���ϰ��� ������������ ��ȯ��. char *, name1�� �ּҰ��� ��. �Ҵ� �ɶ����� ���ο� �ּҰ��� �Ҵ��.
{
	char * name = (char *)malloc(sizeof(char)*30); // ���� �ʿ��Ҷ� �����Լ��� �����ϰ�, �ٷ� ����� ��.(������ �����)
	printf("What's your name? ");
	gets(name);
	return name;
}

int main(void)
{
	char * name1;
	char * name2;
	name1 = ReadUserName();
	printf("name1 : %s \n", name1);
	name2 = ReadUserName();
	printf("name2 : %s \n", name2);

	printf("again name1 : %s \n", name1);
	printf("again name2 : %s \n", name2);

	free(name1);
	free(name2);
	return 0;
}
*/




// ���ڿ��ִ���� ���� ���� �Է¹ޱ�.
// �� ���̸�ŭ �޸𸮰��� �����Ҵ� �ϱ�,
// ���ڿ� �Է¹ޱ�, �ܾ� ���������

// �ι��� +1 �� ��Ʈ


/*
#include <stdio.h> // ������ �ذ��ϱ�, ����
#include <stdlib.h>

char * Read(void)
{
	char * read = (char *)malloc(sizeof(char)+1);
	puts("���ڿ��� �Է��ϼ��� --> ");
	scanf("%s", read);
}

int main(void)
{
	int len;

	puts("�Է��Ͻ� ���ڿ��� �ִ� ���̸� �Է��ϼ���! -> ");
	scanf("%d", len);
	
*/


/* f7�� ������ �����ϰ� ������Ʈ������ �Ѵ� �������. */

/*
#include <stdio.h>
#define SQUARE(X) X*X

int main(void)
{
	int num = 20;

	printf("Square of num : %d \n", SQUARE(num));
	printf("Square of num : %d \n", SQUARE(-5));
	printf("Square of num : %g \n", SQUARE(2.5));

	printf("Square of 3+2 : %d \n", SQUARE(3+2)); // 3 + 2 * 3 + 2 ����켱������ ���� 11�� ����.
	printf("Square of 3+2 : %d \n", SQUARE((3)+(2)));
	printf("Square of 3+2 : %d \n", SQUARE((3+2)));
	return 0;
}
*/



#include <stdio.h>
#define NAME "ȫ�浿" // �� �빮�ڷν������, �����. ����� �����ִ°�
#define AGE 24
#define PRINT_ADDR puts("�ּ� : ��⵵ ���ν� \n");

int main(void)
{
	printf("�̸� : %s \n", NAME);
	printf("���� : %d \n", AGE);
	PRINT_ADDR; // ����ڰ� ���Ǹ� ���ؼ� ���°���.
	return 0;
}

