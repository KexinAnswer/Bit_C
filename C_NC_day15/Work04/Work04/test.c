//Ä£ÄâÊµÏÖstrcat

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char* my_strcat(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);

	char* ret = dest;

	while (*ret)
	{
		ret++;
	}

	while (*ret++ = *src++)
	{
		;
	}
	return dest;

}

int main()
{
	char arr[20] = "hello ";

	my_strcat(arr, "world!");

	printf("%s\n", arr);
	system("pause");
	return 0;
}