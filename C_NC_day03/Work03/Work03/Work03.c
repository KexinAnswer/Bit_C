//��д������һ��1~100���ڵ����������� ���ֶ��ٴ�9

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (9 == i / 10 )
		{
			count++;
		}
		if (9 == i % 10)
		{
			count++;
		}
	}
	printf("һ������%d��9",count);

	system("pause");
	return 0;
}
//9 19 29 39 49 59 69 79 89 90 91 92 93 94 95 96 97 98 99