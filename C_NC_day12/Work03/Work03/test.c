//编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{

	int arr[] = { 1, 1, 2, 2, 3, 3, 4, 5, 5 };
	int temp = arr[0];
	int i = 0;

	for (i = 1; i < 9; i++)
	{
		temp = arr[i] ^ temp;
	}
	printf("%d\n",temp);


	system("pause");
	return 0;
}