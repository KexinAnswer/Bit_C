//不使用（a + b） / 2这种方式，求两个数的平均值

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{

	int a = 0;
	int b = 0;
	printf("请输入两个正整数:>");

	scanf("%d %d", &a, &b);

	printf("%d", (b + ((a - b) >> 1)));

	system("pause");
	return 0;
}