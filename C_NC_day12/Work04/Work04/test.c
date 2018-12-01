//有一个字符数组的内容为:"student a am i",
//请你将数组的内容改为"i am a student".
//要求：
//不能使用库函数。
//只能开辟有限个空间（空间个数和字符串的长度无关）。

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

my_strlen(char arr[])
{
	int count = 0;
	while (*arr)
	{
		arr++;
		count++;
	}
	return count;
}

void change(char* left,char* right)
{
	while (left < right)
	{
		char temp = 0;
		temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;

	}
}

void Change_arr(char arr1[])
{
	char temp[15] = { 0 };
	char arr2[15] = { 0 };
	char* start = arr1;
	char* end = arr1 + my_strlen(arr1) - 1;
	change(start, end);

	while (*arr1++)
	{
		if (*arr1 ==  ' '||*arr1 == '\0')
		{
			change(start,arr1-1);
			start = arr1 + 1;
		}
		
	}
}

int main()
{

	char arr[] = "student a am i";

	Change_arr(arr);

	printf("%s\n", arr);
	system("pause");
	return 0;
}