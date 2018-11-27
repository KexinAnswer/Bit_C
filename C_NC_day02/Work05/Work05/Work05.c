//将三个数按从大到小输出

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	printf("请输入三个整形数字：\n");
	scanf("%d%d%d",&a,&b,&c);

	if (b > a)
	{
		d = a;
		a = b;
		b = d;
	}
	if (c > a)
	{
		d = a;
		a = c;
		c = d;
	}
	if (c > b)
	{
		d = b;
		b = c;
		c = d;
	}

	printf("三个数按大小顺排时%d>%d>%d",a,b,c);
	
	system("pause");

	return 0;
}