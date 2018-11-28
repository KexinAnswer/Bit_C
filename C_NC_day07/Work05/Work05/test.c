//递归和非递归分别实现strlen 

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int my_strlen1(char* arr)
{
	int count = 0;
	while (*arr)
	{
		arr = arr + 1;
		count++;
	}
	return count;
}

int my_strlen2(char* arr)
{

	if (*arr)
	{
		return 1 + my_strlen2(arr + 1);
	}
	return 0;
}

int main()
{
	char arr[] = "abcdef";
	printf("%d\n",my_strlen1(arr));

	printf("%d\n",my_strlen2(arr));

	system("pause");
	return 0;
}