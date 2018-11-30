//在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//void Tringle(int n)
//{
//	int tringle[6] = { 1 };
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 6; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			
//		}
//	}
//
//}

int main()
{
	int i = 0;
	int j = 0;
	int n = 6;
	int arr1[100] = { 0 };
	int arr2[100] = { 0 };

	printf("请输入要打印的行数:>");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (j == 0 || j == i - 1)
			{
				arr2[j] = 1;
			}
			else
			{
				arr2[j] = arr1[j] + arr1[j-1];
			}
		}

		for (j = 0; j < i; j++)
		{
			printf("%d ", arr2[j]);
			arr1[j] = arr2[j];
		}
		printf("\n");
	}



	system("pause");
	return 0;
}