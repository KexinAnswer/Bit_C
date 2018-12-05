//输出一个整数的每一位

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

void print(int n)
{
	int a = 0;
	int num = n;

	for (a = 10; a < n*10; a *= 10)
	{
		while (num > a)
		{
			num /= 10;
		}
		printf("%d ", num % 10);
		num = n;
	}
}

int main()
{
	int num = 0;

	printf("请输入要打印的整数:>");
	scanf("%d", &num);

	print(num);

	system("pause");
	return 0;
}