//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
//例如：2+22+222+2222+22222

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int Sn = 0;
	int a = 0;
	int i = 0;
	int j = 0;
	int sum = 0;
	int num = 0;
	printf("Sn=a+aa+aaa+aaaa+aaaaa\n");
	printf("请输入一个数:>\n");

	scanf("%d",&a);

	for (j = 0; j < 5; j++)
	{
		num = 0;
		
		for (i = 0; i <= j; i++)
		{

			sum = a*pow(10, i);
			num += sum;
		}
		Sn += num;
	}
	printf("%d\n",Sn);

	system("pause");
	return 0;
}