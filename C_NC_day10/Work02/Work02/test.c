//获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

void Odd_number(int n)
{
	int a = 0;
	int num = n;
	int count = 0;

	for (int i = 2; i < num*2; i *= 2)
	{
		while (num >= i)
		{
			num /= 2;
		}
		count++;
		if (count % 2 == 1)
		{
			printf("%d ", num % 2);
		}
		num = n;
	}
	printf("\n");
}

void Even_number(int n)
{
	int a = 0;
	int num = n;
	int count = 0;

	for (int i = 2; i <= num * 2; i *= 2)
	{
		while (num >= i)
		{
			num /= 2;
		}
		count++;
		if (count % 2 == 0)
		{
			printf("%d ", num % 2);
		}
		num = n;
	}
	printf("\n");

}

int main()
{
	int num = 0;
	
	printf("请输入一个数:>");
	scanf("%d", &num);

	Odd_number(num);
	Even_number(num);

	system("pause");
	return 0;

}