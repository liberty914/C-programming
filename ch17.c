

// �ι��ڸ� ���� ����̵�.

/*
#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[]) // �迭�� ���ڷ� ���޹���. ���� �Լ��� �� �˰��־����
{
	int len=strlen(str);
	str[len-1]=0; // 6-1 = 5�� 0����, 0�� null (��index�� 0���� �����ϱ⶧����)
}

int main(void)
{
	char str[100];
	printf("���ڿ� �Է� : ");
	fgets(str, sizeof(str), stdin); // str���ٰ� / str�� ũ�⸸ŭ / Ű����� �Է¹��� (���๮�� enter����)
	printf("���� : %d, ����: %s \n", strlen(str), str); // strlen()�Լ��� �ϳ��� ������� ǥ���Լ���. ���ڿ��� ���̸� ���ϴ�ǥ���Լ� <string.h> ������� �ȿ� ����.

	RemoveBSN(str); // �迭�� ���ڷ� ������.
	printf("���� : %d, ���� %s \n", strlen(str), str); // ���Ͱ� ������ -1����.
	return 0;
} // ������ �ڸ����ٰ� null���ڸ� ��������.
*/



/*
cpy�� ī�� 
strcpy(str2, str1); str1�� str2�� ���� ������� <<<<

strncpy(str2, str1, sizeof(str2)); sizeof�� ũ�⸸ŭ �����ϼ���.
*/



/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20] = "1234567890";
	char str2[20];
	char str3[5];

	strcpy(str2, str1);
	puts(str2);

	strncpy(str3, str1, sizeof(str3)); // 
	puts(str3);

	strncpy(str3, str1, sizeof(str3)-1);
	str3[sizeof(str3)-1] = 0;
	puts(str3);
	
	return 0;
}
*/




/* Ǯ��
2���� puts���� �ι��ڰ� ����� ������ ����, 
3��°�� ������ = 0 �� ���༭ �ι��ڰ� ������ �Ǵ°���. */

/*
strcat()
�ٸ����ڸ� �����̴°�
������� >>>
���ڰ� 3��
�ι��ں��� �������� ���۵�.
*/

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20] = "First~";
	char str2[20] = "Second";
	
	char str3[20] = "Simple num: ";
	char str4[20] = "1234567890";

	strcat(str1, str2); // str1�� \0�ڸ��� Second����
	puts(str1); // Second ������ �ι��ڰ� ����.

	strncat(str3, str4, 7); // str4�� 7���� ��������
	puts(str3); // [20]�� �ѵ� ������ ��°�����(NULL����)

	return 0;
}
*/


/*
strcmp() ���ϴ� compare
0�̾ƴѰ��� ��ȯ�Ѵ�.
������ 0

�����ϸ� 0
ncnp�� ���ڰ� �ϳ� ������
*/


/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20];
	char str2[20];
	printf("input1 : ");
	scanf("%s", str1);
	printf("input2 : ");
	scanf("%s", str2);

	if(!strcmp(str1, str2))
	{
		puts("�� ���ڿ��� �Ϻ��� �����ϴ�.");
	}
	else
	{
		puts("�� ���ڿ��� �Ϻ��� �������� �ʴ�.");
		if(!strncmp(str1, str2, 3))
			// �տ� 3���ڸ� ����. 5�� �Է��ϸ� 5���ڸ� ����.
			puts("�׷��� �� �� ���ڴ� �����ϴ�.");
	}
	return 0;
}
*/



/* ��������, ���Ȱ������ �� ����. �����̳� �������� �� ���൵ ���� �ȳ���.
*/



#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[50]; // []��ȣ�� ����θ� �ȵ�.
	char str2[50];
	char str3[100];
	
	fgets(str1, sizeof(str1), stdin);
	fgets(str2, sizeof(str2), stdin);

	strcpy(str3, str1);
	strcat(str3, str2);

	puts(str3); //�Ǵ� printf("%s", str3);
	// fgets�� ���ͱ��� �Է¹ޱ⶧���� �����ִ� �۾��� ���ľߵ�.
	
	return 0;
}