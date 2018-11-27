//求两个数的最大公约数

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	printf("请输入需要求最大公约数的两个数:");
//	scanf("%d%d",&a,&b);
//
//	for (int i = 0; (a-b) != 0; i++)
//	{
//		if (a > b)
//		{
//			count = a - b;
//			if (count < b)
//			{
//
//				a = b;
//				b = count;
//			}
//			else
//			{
//
//				a = count;
//			}
//		}
//		else
//		{
//			a = a^b;
//			b = a^b;
//			a = a^b;
//		}
//	}
//	printf("最大公约数是%d",a);
//
//	system("pause");
//	return 0;
//}

int main()
{
	int num_1 = 0;
	int num_2 = 0;
	int i = 0;

	printf("请输入两个数:>");
	scanf("%d %d", &num_1, &num_2);

	for (i = num_1; i > 0; i--)
	{
		if (num_1 % i == 0 && num_2 % i == 0)
		{
			printf("最大公约数为%d\n",i);
		}
	}

	system("pause");
	return 0;
}