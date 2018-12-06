//strcmp 
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


int my_strcmp(const char* arr1, const char* arr2)
{
	assert(arr1 != NULL);
	assert(arr2 != NULL);

	while (*arr1 == *arr2)
	{
		if (*arr1 == '\0')
		{
			return 0;;
		}
		arr1++;
		arr2++;
	}
	return (*arr1 - *arr2);
}

int main()
{
	char arr1[] = "abcde";
	char arr2[] = "abcdef";
	int ret = 0;
	
	ret = my_strcmp(arr1, arr2);
	
	if (ret == 0)
	{
		printf("arr1=arr2\n");
	}
	else if (ret < 0)
	{
		printf("arr1<arr2\n");
	}
	else
	{
		printf("arr1>arr2\n");

	}

	system("pause");
	return 0;
}