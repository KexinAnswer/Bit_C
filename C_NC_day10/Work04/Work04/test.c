//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7

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
	
	printf("有%d个位不同",count);

}

int main()
{
	int num1 = 0;
	int num2 = 0;

	printf("请输入两个整数:>");
	scanf("%d %d", &num1, &num2);

	comp(num1, num2);

	system("pause");
	return 0;
}