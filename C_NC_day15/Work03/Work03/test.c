//Ä£ÄâÊµÏÖstrcpy

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char * ret = dest;
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr[20] = { 0 };

	my_strcpy(arr, "hello world!");

	printf("%s\n",arr);

	system("pause");
	return 0;
}