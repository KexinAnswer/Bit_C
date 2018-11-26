//实现一个函数，判断一个数是不是素数
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void judge_prime(int num)
{
	int i = 0;
	for (i = 2; i < sqrt(num); i++)
	{
		if (num % i == 0)
			break;
	}
	if (i>sqrt(num))
		printf("%d是素数\n", num);
	else
		printf("%d不是素数\n", num);
}


 
int main()
{

	int prime = 0;

	while (prime != -1)
	{
		printf("输入-1退出，请输入一个数:>");
		scanf("%d", &prime);

		judge_prime(prime);
	}


	system("pause");
	return 0;
}