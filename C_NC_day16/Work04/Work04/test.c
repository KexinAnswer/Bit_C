// µœ÷strchar
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


char* my_strstr(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);

	while (*dest != src && *dest != '/0')
	{
		dest++;
	}
	if (*dest == '\0')
	{
		return NULL;
	}
	else
	{
		return dest;
	}

}

int main()
{
	char arr[] = "abcdef";
	char* ret = NULL;

	ret = my_strstr(arr, 'd');
	if (ret)
	{
		printf("%s\n",ret);
	}
	else
	{
		printf("Not Found!");
	}

	system("pause");
	return 0;
}