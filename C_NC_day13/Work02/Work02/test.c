//杨氏矩阵 
//有一个二维数组. 
//数组的每行从左到右是递增的，每列从上到下是递增的. 
//在这样的数组中查找一个数字是否存在。 
//时间复杂度小于O(N); 
//
//数组： 
//1 2 3 
//2 3 4 
//3 4 5 
//
//1 3 4 
//2 4 5 
//4 5 6 
//
//1 2 3 
//4 5 6 
//7 8 9 
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int search(int arr[3][3],int n)
{
	int x = 0;
	int y = 3;
	while (x<=3&&y>=0)
	{
		if (n < arr[x][y])
		{
			y--;
		}
		else if (n == arr[x][y])
		{
			return 1;
		}
		else
		{
			x++;
		}
	}
	return 0;
}

void print(int arr[3][3])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}


}
int main()
{
	int ret = 0;
	int n = 0;
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};

	printf("请输入要查找的数字:>");
	scanf("%d", &n);

	ret = search(arr,n);

	if (ret)
	{
		printf("找到了\n");
		print(arr);

	}
	else
	{
		printf("没有找到\n");
		print(arr);

	}

	system("pause");
	return 0;
}