// ���� [Random Number] rand() / srand() -> <stdlib.h>
/* seed�� - random�߿� �뷫���� �ʱⰪ.
��ȣ�п� ���� */

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num=0;
	int i=0;

	for(i=0; i<5; i++)
	{
		num=rand();
		printf("%d \n", num);
	}
	return 0;
}
*/


/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num=0;
	int i=0;
	srand(15);

	for(i=0; i<5; i++)
	{
		num = rand();
		printf("%d \n", num);
	}
	return 0;
}
*/



/*
#include <stdio.h> // printf(), scanf()
#include <stdlib.h> // rand(), srand()
#include <time.h> // time()

int main(void)
{
	int num=0;
	int i=0;
	srand((unsigned)time(NULL)); // ���� �̼������� ����ؼ� ���ϰ��ִ°�! "�ð�"�� seed������ �ְԵǸ� ���Ӿ��� �ٸ� ������ ����������!
	//(NULL)�� ����ð��� �ǹ�
	//unsigned - ������� ����ϰڴ�. (�ð����� ������ �ʿ����)
	
	rand();
	rand(); // seed���� �����ϱ� ���ؼ�
	rand();

	for(i=0; i<5; i++)
	{
		num = rand(); // seed���� �⺻���� 1�� ���־ ��� pc���� ���� ������ �߻���.
		printf("%d \n", num);
	}
	return 0;
}
*/



// ���� 1. (�Ϸ�)���� �Լ����� ���ϴ� �� �����ϱ� (���� ������ ���ϴ� ���� �˾ƺ� ��!)
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int fix9, fix15, fix26;
	srand((unsigned)time(NULL));
	fix9 = rand() % 10;
	fix15 = rand() % 15 + 1;
	fix26 = rand() % 7 + 20;

	printf("0~9 ���� �� : %d \n", fix9);
	printf("1~15 ���� �� : %d \n", fix15);
	printf("20~26 ���� �� : %d \n", fix26);
}
*/


/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int num, i, fix;
	srand((unsigned)time(NULL));
	rand();

	for(i=0; i<10; i++)
	{
		num=rand();
		fix=num%10+1;
		// x % 10 = 0~9
		// rand() % 15 + 1 --> 1~15
		// rand() % 7 + 20 --> 20~26
		printf("%d\n", fix);
	}
	return 0;
}
*/


// ���� 2. ���� �� �� ���߱� ����(�Ϸ�)
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int a, b;

	srand((unsigned)time(NULL));

	while(1)
	{
		a = rand() % 2 + 1;
		printf("������ �ո��ϱ��? �޸��ϱ��? \n");
		printf("�ո��� 1 ,  �޸��� 2   --->   ");
		scanf("%d", &b);

		if(a==b)
		{
			printf("�����Դϴ�~! ¦¦¦!\n\n");
		}
		else
		{
			printf("Ʋ�Ⱦ��Ф�\n\n");
		}
	}
}
*/



/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h> // cls�Լ�
int main(void)
{
	int a, com;
	srand((unsigned)time(NULL));
	rand();
	rand();
	rand();

	while(1)
	{
		com = rand() % 2 + 1;
		printf("===== ���� ���߱� ���� =====\n");
		printf("1. �ո�   2. �޸� --> ");
		scanf("%d", &a);

		if(a==com)
		{
			printf("�����Դϴ�~!\n\n");
		}
		else
		{
			printf("Ʋ�Ƚ��ϴ�~!\n\n");
		}
		Sleep(1000);
		//system("pause");
		system("cls");
	}
}
*/
/* �ý����Լ� - 
Sleep(1000); - 1000������ 1�� <Window.h>
system("pause");
system("cls"); */




// ���� 3. ��ǻ�Ϳ� ����, ����, �� �ϴ� ���� �����
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int a, com;
	srand((unsigned)time(NULL));
	rand();
	rand();
	rand();

	while(1)
	{
		printf("===== ���� ���� �� ���� =====\n");
		printf(" 1. ����   2. ����   3. �� ");
		scanf("%d", &a);
		com = rand()%3 + 1;

		if(a == com)
		{
			printf("������ϴ�!\n\n");
		}
		else
		{
			printf("Ʋ�Ƚ��ϴ�!\n\n");
		}
	}
	return 0;
}




// �߰�����, ��¦��¦ ������












/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int a, com;
	srand((unsigned)time(NULL));
	rand();
	rand();
	rand();

	while(1)
	{
		printf("===== ���� ���� �� ���� =====\n");
		printf(" 1. ����   2. ����   3. �� ");
		scanf("%d", &a);
		com = rand()%3 + 1;

		if(a == com)
		{
			printf("������ϴ�!\n\n");
		}
		else
		{
			printf("Ʋ�Ƚ��ϴ�!\n\n");
		}
	}
	return 0;
}
*/




// �߰�����, ��¦��¦ ������