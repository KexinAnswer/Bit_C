//编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	unsigned int n = value;
	int count = 31;
	unsigned int sum = 0;

	while (n)
	{
		sum += pow(n % 2 * 2, count);
		n /= 2;
		count--;
	}

	return sum;
}



int main()
{
	unsigned int num = 0;
	unsigned int ret = 0;

	printf("请数输入一个正整数");
	scanf("%d", &num);
	
	ret = reverse_bit(num);

	printf("翻转后的值为:>%u\n",ret);

	system("pause");
	return 0;

}