//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

void comp(int num1, int num2)
{
	int n = num1^num2;
	int count = 0;

	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n /= 2;
	}
	
	printf("��%d��λ��ͬ",count);

}

int main()
{
	int num1 = 0;
	int num2 = 0;

	printf("��������������:>");
	scanf("%d %d", &num1, &num2);

	comp(num1, num2);

	system("pause");
	return 0;
}