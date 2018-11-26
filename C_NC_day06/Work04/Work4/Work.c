//创建一个数组，
//实现函数init()初始化数组
//实现empty()清空数组
//实现reverse()函数完成数组元素的逆置
//要求自己设计函数的参数，返回值
//未完成

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5


void init(int arr[N])
{
	int i = 0;
	printf("需要输入%d个数\n",N);
	for (i = 0; i < N; i++)
	{
		printf("请输入第%d个数\n",i+1);
		scanf("%d", &arr[i]);
	}
}

void reverse(int arr[N])
{
	int i = 0;
	int temp = 0;

	printf("函数逆置后的顺序是：\n");
	for (i = 0; i < N / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[N - i - 1];
		arr[N - i - 1] = temp;
	}
}

void empty(int arr[N])
{
	int i = 0;

	for (i = 0; i < N; i++)
	{
		arr[i] = 0;
	}
	printf("清空数组：\n");
}

void print(int arr[N])
{
	int i = 0;
	for (i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[N] = {0};

	init(arr);
	print(arr);

	reverse(arr);
	print(arr);

	empty(arr);
	print(arr);

	system("pause");
	return 0;
}