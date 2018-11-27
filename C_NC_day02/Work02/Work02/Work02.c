//给定两个整形变量的值，将两个值的内容进行交换

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{

	int a = 0;
	int b = 0;
	int c = 0;
	printf("请输入两个需要调换的整形值");
	scanf("%d%d",&a,&b);
	c = a;
	a = b;
	b = c;

	printf("a  = %d , b = %d\n", a,b);

	system("pause");
	return 0;

}

