//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int Factorial(num)
{
	int ret = 1;
	int i = 0;
	
	for (i = 1; i <= num; i++)
	{
		ret *= i;
	}
	
	return ret;
}

int Factoria2(num)
{
	if (num)
	{
		return num * Factoria2(num - 1);
	}

	return 1;
}


int main()
{
	int num = 0;

	printf("������һ����:>");
	scanf("%d",&num);

	printf("%d\n",Factorial(num));

	printf("%d\n", Factoria2(num));

	system("pause");
	return 0;
}