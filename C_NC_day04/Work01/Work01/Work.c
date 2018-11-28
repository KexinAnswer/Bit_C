//      *
//     ***
//    *****
//   *******
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	int j = 0;
	int line = 0;
	scanf("%d", &line);

	//上三角
	for (i = 1; i <= line; i++)
	{
		for(j = 1; j <= line - i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//下三角
	for(i = 1; i < line; i++)
	{
		for(j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for(j = 1; j <= 2*(line-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}






















//int main()
//{
//
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int l = 0;
//	for (k = 6; k > 0; k--)
//	{
//		for (i = 0; i<k; i++)
//		{
//			printf(" ");
//		}
//		for (j=12; (j-(2*k-1))>0; j--)
//		{
//			printf("*");
//		}
//		
//		printf("\n");
//	}
//	for (k = 1; k < 8;k++)
//	{
//		for (i = 1; i < k; i++)
//		{
//			printf(" ");
//		}
//		for (j = 14; j - (2 * k - 1)>0; j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//
//	system("pause");
//	return 0;
//
//}