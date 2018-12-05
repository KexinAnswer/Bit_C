//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
	  // 返回 1的位数 
//}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int count_one_bits(unsigned int value)
{
	int count = 0;

	while (value)
	{
		//n = n&(n - 1);
		//count++
		if (value % 2 == 1)
		{
			count++;
		}
		value /= 2;
	}
	return count;
}


int count_one_bits(unsigned int value)
{
	int count = 0;
	int i = 0;

	for (i = 0; i < 31; i++)
	{
		if (1 == ((value >> i) & 1))
		{
			count++;
		}
	}
	
	return count;
}


int main()
{
	int num = 0;
	int ret = 0;

	printf("请输入一个正整数;>");
	scanf("%d", &num);

	ret = count_one_bits(num);

	printf("二进制中含有%d个1", ret);

	system("pause");
	return 0;
}