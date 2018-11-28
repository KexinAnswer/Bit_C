//写一个递归函数DigitSum(n),输入一个非负整数，，返回组成它的数字之和
//例如，调用DigitSum(1729),则应该返回1+7+2+9.它的和是19

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int DigitSum(int n)
{
	if (n < 10)
	{
		return n;
	}
	else
	{
		return DigitSum(n / 10) + n % 10;
	}
}

int main()
{
	int num = 0;
	int ret = 0;
	printf("请输入一个非负整数:>");
	scanf("%d", &num);

	ret = DigitSum(num);

	printf("结果为%d", ret);
	
	system("pause");
	return 0;
}