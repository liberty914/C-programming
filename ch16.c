/*
��Ʈ���� os�� ��������
�ܹ���, �Է½�Ʈ�� ��½�Ʈ��

���ڴ� ���ڿ��� �ƴ�, ����1���� putchar ���ڸ� ���������� �ϳ�����
f���¤� ������ �ּҰ��� ���Է�-  ��Ʈ���� ���� ������ ����

���ɸ��ʹ� ���ڸ� ���޾���, 
�����پ��� ��Ʈ�������� ������ ���������.(?)

���ɸ��ʹ� ���ڸ� �Է¹޴��Լ�
fgetc�� ��Ʈ�������� ������ �Է��������, ǥ������� ���� �ٸ��͵� �������� (���Ͻ�Ʈ��)

*/

/*
#include <stdio.h>
int main(void)
{
	int ch1, ch2;
	
	ch1 = getchar();	// ���� �Է�
	ch2 = fgetc(stdin);	// ����Ű �Է�

	putchar(ch1);		// ���� ���
	fputc(ch2, stdout);	// ����Ű ���

	return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
	int ch;
		ch = getchar();
		if(ch==EOF)
			return;
		putchar(ch);
	return 0;
}
*/



/* ���ͱ��� �Է��� �޴°�. scanf���� �ٸ���, �����ϳ��� �Է¹ް� ����ϴ��Լ�. ���Ͽ��� �ݺ����Ἥ �ϳ��� �Է¹����� ���̾�. */

/*  eof end of file ������ ��
	eof ���Ͽ� ���� �����ϸ� �ݺ����� �����°� */

// �ƽ�Ű�ڵ� 32������, ��ҹ���. if��

//it���� c�� ���彬��

/*
#include <stdio.h> // ���ĺ� �ٲٱ�
int main(void)
{
	int ch1, ch2;

	ch1 = getchar();
	ch2 = fgetc(stdin);
	if('a' <= ch1 && ch1 <= 'z')
		ch1 -= 32; // if���� �빮�ڷ� �ٲ�� �� if���� �ٽ� ����Ǳ⶧���� ù��°if���� �۵��� ���ϴ°� 'ó��' ���̴°��̾���. break�� ���� ���������� �ϴµ�!!
	else if('A' <= ch1 && ch1 <= 'Z')
		ch1 += 32; // putchar(ch1+32)�� ���൵ ��!!
	else
		printf("���ĺ��� �Է��Ͻʽÿ�. \n");

	putchar(ch1);
	fputc(ch2, stdout);

	return 0;
}
*/

// f9- f10- f7 ������� ����ؼ� ã�ƺ���... ����� ��

// �ͽ�ũ��ú�or�� �ذᰡ��, �׳� or�� ����ϸ�ȵ�. �߸��Ȱ�찡 ���ü�����.
// 64 + 32 + 1
// xor�� �ϳ��� ���̸� ��



// �ּҸ� ����, fputs �ι�°���� ��Ʈ�������� ������ �����
// puts�� fputs�� ������. fputs�� ���� ������ �ٸ� ��Ʈ���� ���� ���� �������ֱ�����(?) 


/*
#include <stdio.h>
int main(void)
{
	char * str = "simple String";

	printf("1. puts test ----- \n");
	puts(str); // puts�Լ��� ���� ���๮�ڱ��� ���ִ°���.
	puts("So Simple String");

	printf("2. fputs test ----- \n");
	fputs(str, stdout); // fputs �̰͵� �ڵ� ����
	printf("\n");
	fputs("So Simple String", stdout);
	printf("\n");

	return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
	char str[7]; // 7byte�� �޸𸮰��� �Ҵ�
	gets(str); // �Է¹��� ���ڿ��� �迭 str�� ���� 
	...
}

int main(void)
{
	char str[7];
	fgets(str, sizeof(str), stdin)
	... // stdin���κ��� ���ڿ��� �Է¹޾Ƽ� str�� ����
}
*/

// ���ڿ� ������Լ� �־��°ɱ�? scanf�� printf�� �˰��ִµ�.
// ���¿뵵�� �ٸ�. ���������¸� �����Ҽ��־��� %d����
// �ܼ��ϰ� ����¹������� ������ ������Լ��� ����ϸ��. ���� �淮ȭ �Ѱ���. ª�Ƽ�!! ���� �Ѱ����ۿ� ����, ª�Ƽ�.

// stdin�� ǥ���Է�, Ű���带 �ǹ�.
// str���̸�ŭ(sizeof(str)) , �迭���̸�, ũ��, ��Ʈ����������)
// scanf�� ���⸦ �Է¸���.


/*
#include <stdio.h>
int main(void)
{
	char str[7]; // �ι��ڰ� 7��°���ڿ� �ݵ�� ������.
	int i;

	for(i=0; i<3; i++)
	{
		fgets(str, sizeof(str), stdin); // ����� enter������ �Է¹����� ����
		printf("Read %d : %s \n", i+1, str);
	}
	return 0;
}
*/


/*
������ �ٸ� = ��Ʈ��
���۶�� �ӽñ�������.
���ۿ� �������� ���̰� �� ���̸� �ѹ��� ������.


â���ִ� ���ǵ��� ����ī�� ��Ƽ� �ѹ��� �ű�°� ����. �� ����ī�� ����
scanf�� ���޾� ���� ������ ������ �߻���.

*/


#include <stdio.h>
int main(void)
{
	char ID[7];
	char name[10];

	fputs("�ֹι�ȣ �� 6�ڸ� �Է� : ", stdout);
	fgets(ID, sizeof(ID), stdin); // ���Ϳ� �ι��ڱ��� 7�� ������.
	fflush(stdin); // ���۸� ���� �Լ�

	fputs("�̸� �Է� : ", stdout);
	fgets(name, sizeof(name), stdin); // ���ۿ� �����ִ� ���͸� �Է��ع���.

	printf("�ֹι�ȣ : %s \n", ID);
	printf("�̸� : %s \n", name);

	return 0;
} // �ֹι�ȣ ���ڸ��� �Է��϶��ߴµ� 123456-1234657 �� �� �Է��ϴ»���� �ֱ⶧���� [8]�� �ٲ��ָ� ���Ӿ��� ������ �߻���.












