//实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
// 1 4    2 1   3 2  
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

void print(char arr[],int sz)
{
	int i = 0;
	for ( i = 0; i < sz; i++)
	{
		printf("%c ",arr[i]);
	}
}

void Levo(char arr[], int sz)
{
	int i = 0;
	char temp = '0';
	for (i = 0; i < sz-2; i++)
	{
		char temp = '0';
		temp = arr[i];
		arr[i] = arr[(3 + i) % 4];
		arr[(3 + i) % 4] = temp;
	}
}

int main()
{
	char arr[] = "ABCD";
	int sz = sizeof(arr) / sizeof(arr[0]);
	int n = 0;
	printf("请输入左旋次数:>");
	scanf("%d", &n);

	while (n)
	{
		Levo(arr, sz);
		n--;
	}
	print(arr, sz);
	system("pause");
	return 0;

}