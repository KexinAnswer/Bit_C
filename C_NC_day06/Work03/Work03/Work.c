//ʵ��һ�������ж�year�ǲ�������

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int leap_year(int year)
{
	//year�����귵��1  �������귵�� 
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

	printf("������Ҫ�жϵ����->:");
	scanf("%d",&year);

	ret = leap_year(year);

	if (ret == 1)
	{
		printf("%d������", year);
	}
	else
	{
		printf("%d��������", year);
	}

	system("pause");
	return 0;
}