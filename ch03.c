/*
#include <stdio.h> // ������ ����

int main(void)
{
	//3+4;
	//return 0; - ����� �ν��ϳ�, ������� ��ɾ ����

	int num; // num�̶�� ������ 20�� �����Ѵ�. (�ڷ��� int�� �������� ����ϰ�, ũ�Ⱑ 4byte) - ������ ����
	num = 20;
	printf("%d\n\n", num); // num�� ����ִ� ���� %d(10��������)�� ������ ����ϼ��� - ������ �ʱ�ȭ

	// int num = 20; - ������ ����� ���ÿ� �ʱ�ȭ �ϴ� ���� ����.

	return 0; // ����, os���� ��ȯ��.
}
*/



/*
#include<stdio.h> // �������� �� ���ǻ���.
int main(void)
{
	int num1;
	num1 = 10;
	int num2; // �����߻� - ������ �ݵ�� ��ɹ� ��, �պκп� ��ġ�ؾ��Ѵ�.
	num2 = 20;
}
*/



/*
#include<stdio.h> // ����

int main(void)
{
	int age = 21; // int(�����ڷ���)�� 21�� ����, 4byte // int n1, n2, n3, n4 ó�� �����ٿ� �� ���𰡴�.
	double weight = 50.0, height = 163.5; // double(�Ǽ��ڷ���)�� 50.0�� 163.5�� ����, ������ �̸��� weight�� height, 8byte�Ҵ�

	printf("���� ���̴� %d�� �Դϴ�.\n", age);
	printf("���� �����Դ� %f(kg) �Դϴ�.\n", weight); // �Ǽ��� ��¿��� %f�� ����
	printf("���� ������ %0.2f(cm) �Դϴ�. \n", height); // %0.nf ���� n�� ����ŭ �Ҽ����� ��µ�
}
*/




#include<stdio.h> // ���� ���� ����, ���۹��������. ���� �ذ����, scanf���� �Ѿ��.
int main(void)
{
	int age;
	double weight, height;
	char name[7], yn; // 7�� �ϴ� '�絿ȣ'�� �������� �Է��̵ȴ�. �ֱ׷����� ���������ҵ�.

	printf("����� �̸��� �Է��ϼ���! => ");
	scanf("%s", name);
	printf("\n%s���� ���̸� �Է��ϼ���! => ", name);
	scanf("%d", &age);
	printf("\n%s���� Ű�� �Է��ϼ���! => ", name);
	scanf("%lf", &height);
	printf("\n%s���� �����Ը� �Է��ϼ���! => ", name);
	scanf("%lf", &weight);
	printf("\n\n%s���� ���̴� %d�� �̸�, Ű�� %0.1fcm�̰�, �����Դ� %0.1fkg�Դϴ�. \n\t�����Ű���?\n", name, age, height, weight);
	scanf("%c", &yn);
	printf("\n\n������ �ԷµǾ����ϴ�. �����մϴ�!^^\n\n");

	return 0;
}




/*
#include<stdio.h> // ������ ����
int main(void)
{
	int num = 123;
	char ch = 'D'; // char�� ����, Ȭ����ǥ(')�� ���������, // ���ڿ��� �ֵ���ǥ(")

	num = num + 1; // C���� = �� �ǹ̴�, "�����ʿ� �ִ� �����͸� ���ʿ� �����ϰڴ�" ��� ��, ���ٶ�� �ǹ̰� �ƴ϶� '�����Ѵ�'�� �ǹ�
	ch = 'G'; // ���� D�� ����Ǿ��־�����, �̹����� G�� �����ϱ�� ��, �ٸ����� ���� ����
	printf("num = %d\n", num);
	printf("ch = %c\n", ch); // char(����)��¿��� %c�� ���
}
*/



/*
#include<stdio.h>
int main(void)
{
	float height_inch = 70.0;
	float height_cm = height_inch * 2.54; // inch������ cm�� ��ȯ��Ű�� �۾�(*2.54)

	printf("���� ������ %0.2f(cm) �Դϴ�. \n", height_cm);
}
*/



/*
#include<stdio.h> // ASCII�ڵ�, ������ �������
int main(void)
{
	char ch = 'A';
	int num = 5, ret; // ret�� char�� �ű�� �Ʒ��� %c�� �ٲ㼭�� ����غ���.

	ret = ch + num; // A�� ���������� ASCII�ڵ�δ� 65�� ǥ���� ��.
	printf("ret = %d\n", ret);
}
*/



/*
#include<stdio.h>
int main(void)
{
	int num1;
	float num2 = 367.78;

	num1 = num2;
	printf("num1 = %d\n", num1); // �Ǽ��� ���������� ����ϱ⶧����, �Ҽ����� �ڵ����� ������. (ȥ���ϸ� ������ ���� ����� ����Ǿ� ��Ȳ�Ҽ� ����)
}
*/



/*
#include<stdio.h> // ���� ����ȯ ����
int main(void)
{
	int num1 = 25, num2 = 3;

	printf("num1 / num2 = %d\n", num1/num2);
	printf("num1 / num2 = %f\n", (double)num1/(double)num2); // ���� ������ ������ num���� double�� ��������ȯ�Ͽ� ��°��� ����.
	printf("num1 * num2 = %d\n", num1*num2);

	return 0;
}
*/



/*
#include<stdio.h> // �ڸ��� ����, �Ҽ��� �ڸ��� ����
int main(void)
{
	int int1 = 10;
	double double1 = 1234567890.123456789012345;

	printf("%d\n", int1); // �⺻��� ���
	printf("%5d\n", int1); // ������ 5���� �ΰ� ���������ķ� ���
	printf("%-5d\n", int1); // ������ 5���� �ΰ� �������ķ� ���

	printf("%f\n", double1); // �⺻ �Ҽ��� 6�ڸ�����
	printf("%20.3f\n", double1); // ������ 20��, �Ҽ��� 3���� �ΰ� ����������
	printf("%-10.4f\n\n", double1); // ������ 10��, �Ҽ��� 4���� �ΰ� ��������

	return 0;
}
*/



/*
#include<stdio.h> // scanf���
int main(void)
{
	int num1, num2, sum;

	printf("���� 2���� �Է��ϼ���~^^\n");
	scanf("%d%d", &num1, &num2); // %d�� %d���̿� �����̽��� �ְų�, ���͸� ġ�� �Է��� ��
	sum = num1 + num2;
	printf("�� ���� ���� %d �Դϴ�.", sum);
}
*/



/*
#include <stdio.h> // ���ڿ� �Է¹��, ����
int main(void)
{
	char name1[30], name2[30]; // ���ڿ��� �ִ� �ڸ����� �Է����ش�, [30]�� 30���ڱ��� �Է��Ҽ� �ִ�.

	printf("�̸��� �Է��ϼ���! ");
	scanf("%s", name1); // %s����, '&'�� �Է��ص� �ǰ�, �Է����� �ʾƵ� �ȴ�.
	printf("\n�ٸ� �̸��� �Է��ϼ���! ");
	scanf("%s", &name2);
	printf("\nù��° �̸��� %s, �ι�° �̸��� %s �Դϴ�.\n\n", name1, name2);

	return 0;
}
*/



/* ������ ���� - �繰�� �����ϸ� "��"�� ����

   ��ǻ�ʹ� 0�� 1�̱⶧���� ���ڸ� �Է��Ҽ�����, ASCII Code�� �̿��Ͽ� ǥ����. */





// ����1 - �Ǽ��� �Է¹޾� ����Ͻÿ�.
/*
#include<stdio.h>
int main(void)
{
    double num;
	printf("�Ҽ����� ������ �Ǽ��� �Է��ϼ���~!\n\n");
	scanf("%lf", &num);
	printf("����� �Է��Ͻ� ���ڴ� %0.3f �Դϴ�.\n\n", num);
	return 0;
}
*/




// ���� 2 - �ڽ��� �̴ϼ��� �Է¹޾� ����Ͻÿ�.
/*
#include<stdio.h>
int main(void)
{
	char ch1, ch2, ch3;

	printf("����� �̴ϼ��� 3���ڸ� �Է��ϼ���~!\n\n");
	scanf("%c%c%c", &ch1, &ch2, &ch3);
	printf("����� �̴ϼ��� %c%c%c �Դϴ�.\n\n", ch1, ch2, ch3);
	return 0;
}
*/



// ���� 3 - 3������ ������ �Է¹޾�, �հ�� ����� ���Ͻÿ�.
/*
#include<stdio.h>
int main(void)
{
	int eng, mat, kor;
	int sum;
	double ave;

	printf("����, ����, ������ ������ ���ʷ� �Է��ϼ���~!\n\n");
	printf("�������� = ");
	scanf("%d", &eng);
	printf("\n�������� = ");
	scanf("%d", &mat);
	printf("\n�������� = ");
	scanf("%d", &kor);

	sum = eng + mat + kor;
	ave = sum / 3;

	printf("3���� ������ �հ�� %d�̸�, ��������� %0.2f�Դϴ�.\n\n", sum, ave);
	return 0;
}
*/



/*
#include <stdio.h> // ������ ����, ������ �Է¹޾� ����ϱ�
int main(void)
{
	char name[7];
	int age;
	printf("����� �̸��� �����Դϱ�? ");
	scanf("%s", name);
	printf("\n%s���� ���̴� ����Դϱ�? ", name);
	scanf("%d", &age);
	printf("\n\n%s���� ���̴� %d�� �̱���!\n\n", name, age);

	return 0;
}
*/
