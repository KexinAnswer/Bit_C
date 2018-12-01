//调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
void change(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		if (arr[left] % 2 == 1)
		{
			left++;
		}
		else
		{
			if (arr[right] % 2 == 0)
			{
				right--;
			}
			else
			{
				int temp = arr[left];
				arr[left] = arr[right];
				arr[right] = temp;
			}
		}
	}

}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
}

int main()
{
	int arr[9] = { 2, 4, 6, 8, 1, 3, 5, 7, 9 };
	int sz = sizeof(arr)/sizeof(arr[0]);

	change(arr,sz);

	print(arr,sz);

	system("pause");
	return 0;

}