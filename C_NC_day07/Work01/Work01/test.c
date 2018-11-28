//递归和非递归分别实现求第n个斐波那契数
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int fib_1(int num)
{
	int ret = 1;
	if (num <= 2)
	{
		return ret;
	}
	else
	{
		ret = fib_1(num - 1) + fib_1(num - 2);
		return ret;

	}
}

//
//
//

int fib_2(int num)
{
	int i = 0;
	int ret = 1;
	int a = 1;
	int b = 1;
	int temp = 0;

	if (num <= 2)
	{
		return ret;
	}
	else
	{
		for (i = 2; i < num; i++)
		{
			ret = a + b;
			a = b;
			b = ret;
		}
		return ret;
	}
}


int main()
{
	int n = 0;
	int ret = 0;

	printf("请输入需要求的斐波那契数:>");
	scanf("%d", &n);

	ret = fib_1(n);

	printf("fib1 = %d\n", ret);

	ret = fib_2(n);

	printf("fib2 = %d\n", ret);

	system("pause");
	return 0;
}