//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

void print(num)
{
	if (num)
	{
		print(num / 10);
		printf("%d ", num%10);
	}

	return 0;
}

int main()
{
	int num = 0;

	printf("������Ҫ��ӡ����:>");
	scanf("%d", &num);

	print(num);

	system("pause");
	return 0;
}