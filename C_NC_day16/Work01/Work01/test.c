// µœ÷strcpy
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char* my_strcpy(char* dest, const char* src)
{
	char* start = dest;
	assert(dest != NULL);
	assert(src != NULL);

	while (*dest++ = *src++);
	{
		;
	}
	  
	return start;
}

int main()
{
	char arr[20] = { 0 };

	my_strcpy(arr, "abcdef");
	printf("%s\n", arr);

	system("pause");
	return 0;
}