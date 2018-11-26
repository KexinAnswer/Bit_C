//实现一个函数判断year是不是闰年

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int leap_year(int year)
{
	//year是闰年返回1  不是闰年返回 
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int year;
	int ret = 0;

	printf("请输入要判断的年份->:");
	scanf("%d",&year);

	ret = leap_year(year);

	if (ret == 1)
	{
		printf("%d是闰年", year);
	}
	else
	{
		printf("%d不是闰年", year);
	}

	system("pause");
	return 0;
}