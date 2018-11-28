//递归方式实现打印一个整数的每一位

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

	printf("请输入要打印的数:>");
	scanf("%d", &num);

	print(num);

	system("pause");
	return 0;
}