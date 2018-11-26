//实现一个函数,打印乘法口诀，口诀表的行数和列数自己指定，
//输入9，输出9*9口诀表，输入12，输出12*12的乘法口诀表

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


void table(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", j, i, i*j);
		}
		printf("\n");
	}
}
int main()
{

	int num = 0;

	printf("请输入要打印的乘法口诀表行数->");
	scanf("%d", &num);

	table(num);

	system("pause");
	return 0; 
}