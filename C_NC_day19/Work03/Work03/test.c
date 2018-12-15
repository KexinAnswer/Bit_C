//strncmp

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int my_strcmp(const char* str1, const char* str2, int sz)
{
	int i;
	for (i = 0; i < sz; i++)
	{
		if (*str1 == *str2)
		{
			str1++;
			str2++;
		}
		else
		{
			return ((*str1) - (*str2));
		}
	}

	if (i == sz)
	{
		return 0;
	}

}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcd";  

	int ret = my_strcmp(arr1,arr2,6);

	if (ret == 0)
	{
		printf("arr1 = arr2\n");
	}
	else if (ret > 0)
	{
		printf("arr1 > arr2\n");
	}
	else
	{
		printf("arr1 < arr2\n");
	}

	system("pause");
	return 0;
}