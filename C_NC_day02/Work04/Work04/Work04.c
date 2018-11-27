//求十个整数中最大值

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int Max = 0;
	int max[10] = { 0 };
	printf("请输入是个整数：\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d",&max[i]);
	}

	for (int j = 0; j < 10; j++)
	{
		if (max[j] > Max)
		{
			Max = max[j];
		}
	}

	printf("最大值为%d",Max);
	system("pause");
	return 0;
	
}