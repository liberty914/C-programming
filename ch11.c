
/*
�迭 - 100�� �̻��� �������� �ѹ��� �����Ҽ�����.
���� �ٸ��ԵǸ� �迭��������, �׶����� ����ü ���
�迭�� "������" �Ҵ��� ��. ���� ������ ���ָ� ��� ������� �˼�����
������ �Ҵ�Ǵµ����� �׿����� ������ ����
int�迭 [4] �ϰ�� 4*4 = 16����Ʈ
���� �Ȱ��� ������

[0], [1], [2] = ÷��, index�����
index�� 0���� �����ϱ� ������ 0��°��� ��� ����. �����򰥸� ���� ��
arr[0] = 10; arr0��°��ҿ��ٰ� 10�� �����ϰڴ�

*/



/*
#include <stdio.h>

int main(void)
{
	int arr[5];
	int sum=0, i;

	arr[0]=10, arr[1]=20, arr[2]=30, arr[3]=40, arr[4]=50;

	for(i=0; i<5; i++)
	{
		sum += arr[i];
		// �迭�� ���� ū �����߿� �ϳ�.
		// �ٸ� �����ʹ� �ٸ���, �ݺ����� �̿��ؼ� ���������� ������ ������. (���� ū ����!!!)
	}

	printf("�� : %d \n", sum);
	return 0;
}
*/



// ������ ����� ���ÿ� �ʱ�ȭ�ϵ�, �迭�� �����ϸ鼭 �ʱ�ȭ�� ����

// ���̸� �ڵ����� ��굵 ����

/*
#include <stdio.h>
int main(void)
{
	int arr1[5] = {1,2,3,4,5};
	int arr2[] = {1,2,3,4,5,6,7}; // �迭���� �����Ϸ��� �ڵ����
	int arr3[5] = {1,2}; // arr[2]���� 0���� �ʱ�ȭ ��
	int len1, len2, len3, i;

	printf("arr1�� ũ�� : %d \n", sizeof(arr1)); // sizeof������ �����
	printf("arr2�� ũ�� : %d \n", sizeof(arr2)); // �迭�� ũ��(byte)�� ���
	printf("arr3�� ũ�� : %d \n", sizeof(arr3));

	len1 = sizeof(arr1) / sizeof(int); // 20/4=5
	len2 = sizeof(arr2) / sizeof(int); // 28/4=7 �迭�� ���̸� ���ϰ�����
	len3 = sizeof(arr3) / sizeof(int); // 20/4=5

	for(i=0; i<len1; i++) // �ݺ����� �̿��� ���������� ������ ����
		printf("%d", arr1[i]);
	printf("\n");

	for(i=0; i<len2; i++) // �迭�� ���� �ϳ��� ������ִ� ��
		printf("%d", arr2[i]);
	printf("\n");

	for(i=0; i<len3; i++)
		printf("%d", arr3[i]);
	printf("\n");
}
*/




#include <stdio.h> // ���� �̿ϼ�

int main(void)
{
	int arr[5];
	int max=0, min=0, sum=0, i, n=0;

	printf("5���� ���� �Է��ϼ���...");
	for(i=0; i<5; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	printf("\n");

	max=min=arr[0];

	for(i=1; i<5; i++) // max�� min�� index 0�̰�, index�� 4�����̹Ƿ�.
	{
		if(max < arr[i])
			max=arr[i];
		if(min > arr[i])
			min=arr[i];
	}

	// if�� ���̾��ʿ���� �ݺ��� �����ָ鼭 �ڵ����� ���ư��� ���ָ��.
	
	printf("�ִ밪 : %d \n", max);
	printf("�ּҰ� ; %d \n", min);
	printf("�� �� : %d \n", sum);
	return 0;
}




/*
#include <stdio.h>
int main(void)
{
	char str[] = "Good Morning!";

	printf("�迭�� ũ�� : %d \n", sizeof(str));
	printf("�� ���� ������ ��� : %c \n", str[13]); // index�� 0���� �����ϱ� ������ �ι��ڴ� 13��. 14�� �ƴϴ�. �򰥸�����
	printf("�� ���� ������ ��� : %d \n", str[13]); // �ι��ڴ� �ƽ�Ű�ڵ�� '0' ��

	str[12] = '?';
	printf("%s \n", str); // %c�� �ƴ϶� ���ڿ��� %s. string�� ����
	// �ι��ڶ����� 14�� ��
	return 0;
}
*/



/*
#include <stdio.h>

int main(void)
{
	char null = '\0';
	char space = ' ';
	printf("%d %d \n", null, space); // �ι����� �ƽ�Ű�ڵ�� 0 // space�� �ƽ�Ű�ڵ�� 32
	return 0;
}
*/



// �迭 scanf ������ &�� �������� ������ ���߿�����


/*
#include <stdio.h> // NULL������ �ʿ伺
int main(void)
{
	char str[50];
	int index=0;

	printf("���ڿ� �Է� : "); // Apple �̸� 6�� ��� ���, �α���
	scanf("%s", str);
	printf("�Է� ���� ���ڿ� : %s \n", str);

	printf("���� ���� ��� : ");

	while(str[index] != '\0') // ���� �ݺ��� ���ǽ� ���� �߿���!! �迭�� �ݺ����� ���� �ϳ��� set��
	{
		printf("%c", str[index]);
		index++;
	}
	printf("\n");
} // �ι����� ���翩�ο� ���� ���ڳ�, ���ڿ��̳İ� ������ ��, �ι��ڰ� ������ ���ڿ���
*/



/*
#include <stdio.h>
int main(void)
{

	int arr[5];
	int max, min, sum, i;
	printf("�Է� : ");

	for(i=0; i<5; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\n");

	max=min=arr[0]; // max�� min�� ��� 0���� �ʱ�ȭ�Ѵ�. (�̷��Ե� ����)
	for(i=1; i<5; i++) // �ݺ����� ���ε��� �� �ʿ����,
	{
		if(max < arr[i])
			max=arr[i];
		if(min > arr[i])
			min=arr[i];
		sum =+ arr[i];
	}
	printf("�ִ밪 : %d\n", max);
	printf("�ּҰ� : %d\n", min);
	printf("�� �� : %d \n", sum);
	return 0;
}
*/



/*
#include <stdio.h> // ���� 1. ���ܾ �Է¹ް� ���̸� ����Ͽ� ����ϱ�.
int main(void)
{
	char voca[100];
	int len=0;

	printf("���ܾ� �Է� : ");
	scanf("%s", voca); // ���ڿ� �迭�� & �Ⱦ� [100]�� ����ȵ�
	
	while(voca[len] != '\0') //  '\0' ��� 0�� �Է��ص���.
	//{
	//	printf("%c", voca[len]);
		len++;
		//a=len;
	//}
	
	//len = sizeof(voca[]) / sizeof(char); ����� �ʿ䰡 ���°�. �ݺ����� len�� ������ָ� �Ǵ°��̴ϱ�.
	
	printf("�Է��� ���ܾ��� ���̴� %d �Դϴ�. \n", len);
	return 0;
}
*/



// 11���� ���� 3�� Ǯ���, 9���� ���������� �Ẹ�� �����ϱ�, ������ ����


/*
#include <stdio.h> // ����������, ���ܾ� �������
int main(void)
{
	char voca[100];
	int len=0, i;
	char temp; // �ӽú��� a�� b�� ���� ���� �����ϱ� (����)

	printf("intput : ");
	scanf("%s", voca);

	while(voca[len] != '\0')
		len++;

	for(i=0; i<len/2; i++) // ������ ����߿� �ϳ�.
	{
		temp = voca[i];
		voca[i] = voca[(len-i)-1];
		voca[(len-i)-1]=temp;
	}
	printf("result :%s \n", voca);
	return 0;
}
*/