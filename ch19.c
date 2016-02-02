

/*	��������    - �뷮��������, ���Ϻ���
	ĳ��
	��
	�ϵ��ũ   - �뷮����ŭ, ���ϴ��� */


// �������� ����

/* fopen = File open �̶�¶�
   
   FILE * fp
   FILE == ����ü�� ���� (C���� �����ϴ� ����ü, ���� ������������, int��������)

   write, read��� */


/*
#include <stdio.h> // ���� ��� ����

int main(void)
{
	FILE * fp = fopen("data.txt", "wt");
	if(fp==NULL) // �����ͺ����� ���Ͽ� ��������, ����Ű�´���� �ƹ��͵� ������, return-1 ����������. ����ó��.
	{
		puts("fail!");
		return -1;
	}

	fputc('A', fp); // ����A�� fp�� ����Ű�� ���Ͽ� ����
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp); // ������ ���������ϱ�, ������� ���� ������� �ǹ�
	return 0;
} // ������ �޸����� �����, �ű⿡ ABC�� �Էµ�.
*/


#include <stdio.h> // ���� �Է� ����

int main()
{
	int ch, i;
	FILE * fp = fopen("data.txt", "rt"); // �̹� ��������־�����, ���ǿ�������
	if(fp==NULL) // ������ ������(���̸�) fail����ϰ� ����
	{
		puts("fail!");
		return -1;
	}

	for(i=0; i<3; i++) // ������ �����ϱ� for������ ��
	{
		ch = fgetc(fp); // ���ڸ� �ϳ��� ����, ���������� �ּҰ� �ϳ��� ����, fgetc�� c���� ������� ǥ���Լ�, �׷�Ư��(���)�� �ִ°���.
		printf("%c \n", ch); // ���ڸ� �ϳ��� ����ϰ� ���� �ٲ�
	}
	fclose(fp); // ���� ����
	return 0;
}



// �������� ����.

// 2������ ���̳ʸ�

// rt�� �б� �ؽ�Ʈ��Ʈ��
/* �տ� f�� ������ �ڿ� ��Ʈ�������� ������ ��. */


/*
#include <stdio.h>
int main(void)
{
	FILE * fp = fopen("simple.txt", "wt");
	if(fp==NULL) {
		puts("���Ͽ��� ����!");
		return -1;
	}
	fputc('A', fp);
	fputc('B', fp);
	fputs("My name is hong \n", fp);
	fputs("Your name is Yoon \n", fp);
	fclose(fp);
	return 0;
}
*/


/*
#include <stdio.h>
int main(void)
{
	char str[30];
	int ch;
	FILE * fp = fopen("simple.txt", "rt"); // FILE����ü ã�ƺ���.
	if(fp==NULL) {
		puts("���Ͽ��� ����!");
		return -1;
	}
	ch=fgetc(fp);
	printf("%c \n", ch);
	ch=fgetc(fp);
	printf("%c \n", ch);

	fgets(str, sizeof(str), fp); // %s�� ����ϴ°� (����)����
	printf("%s", str);
	fgets(str, sizeof(str), fp); // ���ʴ�� ���ָ� �˾Ƽ� ��.
	printf("%s", str);

	fclose(fp);
	return 0;
}
*/













