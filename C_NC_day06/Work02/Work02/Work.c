 //使用函数实现两个数的交换

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

void change(int* x, int* y)
{
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}
int main()
{
	int a = 0;
	int b = 0;

	printf("请输入两个数->");
	scanf("%d %d",&a,&b);

	change(&a,&b);

	printf("a = %d  b = %d", a, b);

	system("pause");
	return 0;
}